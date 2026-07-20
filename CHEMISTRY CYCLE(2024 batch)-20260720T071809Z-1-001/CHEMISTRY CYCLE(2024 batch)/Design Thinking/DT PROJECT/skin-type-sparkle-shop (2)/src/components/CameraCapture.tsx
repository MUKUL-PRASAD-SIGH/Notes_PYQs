import React, { useRef, useState, useEffect } from 'react';
import { Button } from '@/components/ui/button';
import { Card, CardContent } from '@/components/ui/card';
import { Camera, RotateCcw, Upload, Sparkles, AlertCircle, CheckCircle2, XCircle, ArrowLeft } from 'lucide-react';
import { motion, AnimatePresence } from 'framer-motion';
import * as faceapi from 'face-api.js';
import { useNavigate } from 'react-router-dom';
import { ProductRecommendations } from './ProductRecommendations';
import { useAuth } from '../contexts/AuthContext';
import { saveAnalysisResults } from '../lib/supabase';
import * as cv from '@techstark/opencv-js';

interface CameraCaptureProps {
  onComplete: (imageData: string, analysis?: ImageAnalysis) => void;
  onBack?: () => void;
}

interface ImageAnalysis {
  faceDetected: boolean;
  faceLandmarks: any[];
  faceExpressions?: any;
  skinAnalysis: {
    pores: number;
    texture: number;
    evenness: number;
    hydration: number;
    overall: number;
    detailedMetrics: {
      poreSize: number;
      poreDistribution: number;
      skinSmoothness: number;
      toneEvenness: number;
      hydrationLevel: number;
      oiliness: number;
    };
  };
  imageQuality: {
    brightness: number;
    contrast: number;
    sharpness: number;
    focus: number;
  };
  recommendations: string[];
}

// YOLOv7 model configuration
const YOLO_CONFIG = {
  modelPath: '/models/yolov7.onnx',
  inputSize: 640,
  confidenceThreshold: 0.5,
  nmsThreshold: 0.4,
  classes: [
    'acne', 'wrinkles', 'dark_spots', 'dryness', 'oily', 'redness',
    'pores', 'texture', 'sensitivity', 'pigmentation'
  ]
};

const CameraCapture: React.FC<CameraCaptureProps> = ({ onComplete, onBack }) => {
  const videoRef = useRef<HTMLVideoElement>(null);
  const canvasRef = useRef<HTMLCanvasElement>(null);
  const { user } = useAuth();
  const [stream, setStream] = useState<MediaStream | null>(null);
  const [isCameraOn, setIsCameraOn] = useState(false);
  const [isCapturing, setIsCapturing] = useState(false);
  const [error, setError] = useState<string | null>(null);
  const [showGuide, setShowGuide] = useState(true);
  const [isFaceDetected, setIsFaceDetected] = useState(false);
  const [cameraMode, setCameraMode] = useState<'user' | 'environment'>('user');
  const [analysis, setAnalysis] = useState<ImageAnalysis | null>(null);
  const [realTimeGuidance, setRealTimeGuidance] = useState<string[]>([]);
  const [processingStatus, setProcessingStatus] = useState<string>('');
  const [capturedImage, setCapturedImage] = useState<string | null>(null);
  const [showRecommendations, setShowRecommendations] = useState(false);
  const [yoloModel, setYoloModel] = useState<any>(null);
  const [detectionOverlay, setDetectionOverlay] = useState<HTMLCanvasElement | null>(null);
  const navigate = useNavigate();

  // Enhanced spring configurations for different animation types
  const springConfigs = {
    gentle: {
      type: "spring",
      stiffness: 60,
      damping: 15,
      mass: 1.4,
      velocity: 0,
      restDelta: 0.001
    },
    snappy: {
      type: "spring",
      stiffness: 250,
      damping: 25,
      mass: 0.7,
      velocity: 0,
      restDelta: 0.001
    },
    bouncy: {
      type: "spring",
      stiffness: 180,
      damping: 6,
      mass: 1.2,
      velocity: 0,
      restDelta: 0.001
    },
    elastic: {
      type: "spring",
      stiffness: 120,
      damping: 4,
      mass: 1,
      velocity: 0,
      restDelta: 0.001
    }
  };

  // Advanced easing functions
  const easingFunctions = {
    smooth: [0.4, 0, 0.2, 1],
    bounce: [0.68, -0.6, 0.32, 1.6],
    elastic: [0.68, -0.55, 0.265, 1.55],
    sharp: [0.4, 0, 0.6, 1],
    soft: [0.33, 1, 0.68, 1]
  };

  // Enhanced animation variants
  const containerVariants = {
    hidden: { opacity: 0, scale: 0.98 },
    visible: {
      opacity: 1,
      scale: 1,
      transition: {
        staggerChildren: 0.06,
        delayChildren: 0.08,
        duration: 0.4,
        ease: easingFunctions.smooth
      }
    },
    exit: {
      opacity: 0,
      scale: 0.98,
      transition: {
        duration: 0.25,
        ease: easingFunctions.sharp
      }
    }
  };

  const itemVariants = {
    hidden: { y: 15, opacity: 0, scale: 0.97 },
    visible: {
      y: 0,
      opacity: 1,
      scale: 1,
      transition: springConfigs.gentle
    },
    exit: {
      y: -15,
      opacity: 0,
      scale: 0.97,
      transition: springConfigs.snappy
    }
  };

  // Interactive hover animations
  const hoverAnimations = {
    button: {
      scale: 1.04,
      x: -4,
      transition: springConfigs.snappy
    },
    card: {
      scale: 1.01,
      y: -3,
      transition: springConfigs.gentle
    },
    icon: {
      scale: 1.15,
      rotate: 4,
      transition: springConfigs.bouncy
    },
    progress: {
      scale: 1.02,
      transition: springConfigs.elastic
    }
  };

  // Progress bar animation variants
  const progressVariants = {
    initial: { scaleX: 0, opacity: 0 },
    animate: {
      scaleX: 1,
      opacity: 1,
      transition: {
        ...springConfigs.elastic,
        duration: 1.2
      }
    }
  };

  useEffect(() => {
    // Load face-api models
    const loadModels = async () => {
      try {
        await faceapi.nets.tinyFaceDetector.loadFromUri('/models');
        await faceapi.nets.faceLandmark68Net.loadFromUri('/models');
        await faceapi.nets.faceRecognitionNet.loadFromUri('/models');
        await faceapi.nets.faceExpressionNet.loadFromUri('/models');
      } catch (err) {
        console.error('Error loading face-api models:', err);
        setError('Failed to load face detection models');
      }
    };

    loadModels();
  }, []);

  useEffect(() => {
    let stream: MediaStream | null = null;

    const startCamera = async () => {
      try {
        stream = await navigator.mediaDevices.getUserMedia({
          video: {
            facingMode: cameraMode,
            width: { ideal: 1280 },
            height: { ideal: 720 }
          }
        });

        if (videoRef.current) {
          videoRef.current.srcObject = stream;
          setIsCameraOn(true);
          setError(null);
        }
      } catch (err) {
        console.error('Error accessing camera:', err);
        setError('Failed to access camera. Please ensure you have granted camera permissions.');
      }
    };

    if (isCameraOn) {
      startCamera();
    }

    return () => {
      if (stream) {
        stream.getTracks().forEach(track => track.stop());
      }
    };
  }, [isCameraOn, cameraMode]);

  useEffect(() => {
    let animationFrameId: number;

    const detectFace = async () => {
      if (videoRef.current && canvasRef.current && isCameraOn) {
        const detections = await faceapi.detectAllFaces(
          videoRef.current,
          new faceapi.TinyFaceDetectorOptions()
        ).withFaceLandmarks().withFaceExpressions();

        if (detections.length > 0) {
          setIsFaceDetected(true);
        } else {
          setIsFaceDetected(false);
        }

        animationFrameId = requestAnimationFrame(detectFace);
      }
    };

    if (isCameraOn) {
      detectFace();
    }

    return () => {
      if (animationFrameId) {
        cancelAnimationFrame(animationFrameId);
      }
    };
  }, [isCameraOn]);

  useEffect(() => {
    if (!isCameraOn || !videoRef.current) return;

    const detectFace = async () => {
      if (!videoRef.current) return;

      try {
        const detections = await faceapi.detectAllFaces(
          videoRef.current,
          new faceapi.TinyFaceDetectorOptions()
        ).withFaceLandmarks().withFaceExpressions();

        setIsFaceDetected(detections.length > 0);

        // Real-time guidance
        const guidance: string[] = [];
        
        if (detections.length === 0) {
          guidance.push('No face detected. Please position your face in the frame.');
        } else if (detections.length > 1) {
          guidance.push('Multiple faces detected. Please ensure only one face is in frame.');
        } else {
          const face = detections[0];
          const landmarks = face.landmarks;
          
          // Check face position
          const faceBox = face.detection.box;
          const videoWidth = videoRef.current.videoWidth;
          const videoHeight = videoRef.current.videoHeight;
          
          if (faceBox.x < videoWidth * 0.2) {
            guidance.push('Move face slightly to the right');
          } else if (faceBox.x + faceBox.width > videoWidth * 0.8) {
            guidance.push('Move face slightly to the left');
          }
          
          if (faceBox.y < videoHeight * 0.2) {
            guidance.push('Move face slightly down');
          } else if (faceBox.y + faceBox.height > videoHeight * 0.8) {
            guidance.push('Move face slightly up');
          }

          // Check face angle
          const leftEye = landmarks.getLeftEye();
          const rightEye = landmarks.getRightEye();
          const eyeAngle = Math.atan2(
            rightEye[0].y - leftEye[0].y,
            rightEye[0].x - leftEye[0].x
          ) * 180 / Math.PI;
          
          if (Math.abs(eyeAngle) > 10) {
            guidance.push('Keep your head straight');
          }
        }

        setRealTimeGuidance(guidance);
      } catch (err) {
        console.error('Error detecting face:', err);
      }
    };

    const interval = setInterval(detectFace, 100);
    return () => clearInterval(interval);
  }, [isCameraOn]);

  useEffect(() => {
    // Load YOLOv7 model
    const loadYOLOModel = async () => {
      try {
        const model = await cv.dnn.readNetFromONNX(YOLO_CONFIG.modelPath);
        setYoloModel(model);
        console.log('YOLOv7 model loaded successfully');
      } catch (err) {
        console.error('Failed to load YOLOv7 model:', err);
        setError('Failed to load skin analysis model');
      }
    };

    loadYOLOModel();
  }, []);

  const startCamera = () => {
    setIsCameraOn(true);
  };

  const stopCamera = () => {
    if (videoRef.current && videoRef.current.srcObject) {
      const stream = videoRef.current.srcObject as MediaStream;
      stream.getTracks().forEach(track => track.stop());
      videoRef.current.srcObject = null;
    }
    setIsCameraOn(false);
  };

  const analyzeSkin = async (canvas: HTMLCanvasElement): Promise<ImageAnalysis['skinAnalysis']> => {
    const context = canvas.getContext('2d');
    if (!context) throw new Error('Failed to get canvas context');

    const imageData = context.getImageData(0, 0, canvas.width, canvas.height);
    const data = imageData.data;

    // Enhanced analysis metrics
    let poreCount = 0;
    let poreSizeSum = 0;
    let textureScore = 0;
    let evennessScore = 0;
    let hydrationScore = 0;
    let oilinessScore = 0;
    let smoothnessScore = 0;
    let toneVariance = 0;

    // Edge detection and analysis
    for (let y = 1; y < canvas.height - 1; y++) {
      for (let x = 1; x < canvas.width - 1; x++) {
        const idx = (y * canvas.width + x) * 4;
        const center = (data[idx] + data[idx + 1] + data[idx + 2]) / 3;
        const right = (data[idx + 4] + data[idx + 5] + data[idx + 6]) / 3;
        const bottom = (data[idx + canvas.width * 4] + data[idx + canvas.width * 4 + 1] + data[idx + canvas.width * 4 + 2]) / 3;
        
        const edge = Math.abs(center - right) + Math.abs(center - bottom);
        
        // Pore detection and analysis
        if (edge > 30) {
          poreCount++;
          poreSizeSum += edge;
        }
        
        // Texture and smoothness analysis
        textureScore += edge;
        smoothnessScore += 1 / (1 + edge);
        
        // Evenness and tone analysis
        const neighbors = [
          data[idx - 4], data[idx + 4],
          data[idx - canvas.width * 4], data[idx + canvas.width * 4]
        ];
        const variance = neighbors.reduce((acc, val) => acc + Math.abs(center - val), 0) / neighbors.length;
        evennessScore += variance;
        toneVariance += variance;
        
        // Hydration and oiliness analysis
        const brightness = (data[idx] + data[idx + 1] + data[idx + 2]) / 3;
        hydrationScore += brightness;
        oilinessScore += Math.abs(brightness - center);
      }
    }

    // Normalize scores
    const totalPixels = canvas.width * canvas.height;
    const avgPoreSize = poreSizeSum / (poreCount || 1);
    const poreDistribution = poreCount / totalPixels;

    return {
      pores: poreCount,
      texture: textureScore / totalPixels,
      evenness: 1 - (evennessScore / totalPixels / 255),
      hydration: hydrationScore / totalPixels / 255,
      overall: (textureScore + evennessScore + hydrationScore) / (3 * totalPixels),
      detailedMetrics: {
        poreSize: avgPoreSize / 255,
        poreDistribution: poreDistribution,
        skinSmoothness: smoothnessScore / totalPixels,
        toneEvenness: 1 - (toneVariance / totalPixels / 255),
        hydrationLevel: hydrationScore / totalPixels / 255,
        oiliness: oilinessScore / totalPixels / 255
      }
    };
  };

  const enhanceImage = async (canvas: HTMLCanvasElement): Promise<void> => {
    const context = canvas.getContext('2d');
    if (!context) return;

    const imageData = context.getImageData(0, 0, canvas.width, canvas.height);
    const data = imageData.data;

    // Apply contrast enhancement
    const factor = 1.2;
    const intercept = 128 * (1 - factor);
    
    for (let i = 0; i < data.length; i += 4) {
      data[i] = factor * data[i] + intercept;
      data[i + 1] = factor * data[i + 1] + intercept;
      data[i + 2] = factor * data[i + 2] + intercept;
    }

    // Apply sharpening
    const kernel = [
      0, -1, 0,
      -1, 5, -1,
      0, -1, 0
    ];

    const tempData = new Uint8ClampedArray(data);
    for (let y = 1; y < canvas.height - 1; y++) {
      for (let x = 1; x < canvas.width - 1; x++) {
        const idx = (y * canvas.width + x) * 4;
        for (let c = 0; c < 3; c++) {
          let sum = 0;
          for (let ky = -1; ky <= 1; ky++) {
            for (let kx = -1; kx <= 1; kx++) {
              const kidx = ((y + ky) * canvas.width + (x + kx)) * 4 + c;
              sum += tempData[kidx] * kernel[(ky + 1) * 3 + (kx + 1)];
            }
          }
          data[idx + c] = Math.min(255, Math.max(0, sum));
        }
      }
    }

    context.putImageData(imageData, 0, 0);
  };

  const captureImage = async () => {
    if (!videoRef.current || !canvasRef.current) return;

    setIsCapturing(true);
    setProcessingStatus('Capturing image...');
    const video = videoRef.current;
    const canvas = canvasRef.current;
    const context = canvas.getContext('2d');

    if (!context) {
      setError('Failed to get canvas context');
      setIsCapturing(false);
      return;
    }

    try {
      // Set canvas dimensions to match video
      canvas.width = video.videoWidth;
      canvas.height = video.videoHeight;

      // Draw the current video frame
      context.drawImage(video, 0, 0, canvas.width, canvas.height);

      setProcessingStatus('Enhancing image...');
      await enhanceImage(canvas);

      setProcessingStatus('Analyzing skin...');
      const skinAnalysis = await analyzeSkin(canvas);

      setProcessingStatus('Detecting facial features...');
      const detections = await faceapi.detectAllFaces(
        canvas,
        new faceapi.TinyFaceDetectorOptions()
      ).withFaceLandmarks().withFaceExpressions();

      // Store the captured image
      const imageData = canvas.toDataURL('image/jpeg', 0.8);
      setCapturedImage(imageData);

      // Generate more detailed recommendations
      const recommendations: string[] = [];
      
      if (skinAnalysis.detailedMetrics.poreSize > 0.4) {
        recommendations.push('Consider using a pore-minimizing product with salicylic acid');
      }
      if (skinAnalysis.detailedMetrics.skinSmoothness < 0.3) {
        recommendations.push('Your skin could benefit from gentle exfoliation 2-3 times per week');
      }
      if (skinAnalysis.detailedMetrics.toneEvenness < 0.4) {
        recommendations.push('Consider using products with niacinamide for even skin tone');
      }
      if (skinAnalysis.detailedMetrics.hydrationLevel < 0.5) {
        recommendations.push('Your skin needs more hydration. Try a hyaluronic acid serum');
      }
      if (skinAnalysis.detailedMetrics.oiliness > 0.6) {
        recommendations.push('Consider using oil-control products with mattifying properties');
      }

      const imageAnalysis: ImageAnalysis = {
        faceDetected: detections.length > 0,
        faceLandmarks: detections.map(d => d.landmarks),
        faceExpressions: detections[0]?.expressions,
        skinAnalysis,
        imageQuality: {
          brightness: 0.5, // Placeholder - implement actual calculation
          contrast: 0.5,
          sharpness: 0.5,
          focus: 0.5
        },
        recommendations
      };

      setAnalysis(imageAnalysis);
      setProcessingStatus('');

      // Convert canvas to base64 image
      onComplete(imageData, imageAnalysis);

    } catch (err) {
      console.error('Error capturing image:', err);
      setError('Failed to capture image');
    } finally {
      setIsCapturing(false);
      setProcessingStatus('');
    }
  };

  const switchCamera = () => {
    setCameraMode(prev => prev === 'user' ? 'environment' : 'user');
  };

  const handleFileUpload = (event: React.ChangeEvent<HTMLInputElement>) => {
    const file = event.target.files?.[0];
    if (!file) return;

    const reader = new FileReader();
    reader.onload = (e) => {
      const imageData = e.target?.result as string;
      onComplete(imageData);
    };
    reader.readAsDataURL(file);
  };

  const handleBack = () => {
    if (onBack) {
      onBack();
    } else {
      navigate(-1);
    }
  };

  const handleAnalysis = async () => {
    if (!capturedImage) return;

    setShowRecommendations(true);

    // Simulate analysis (replace with actual ML model)
    await new Promise(resolve => setTimeout(resolve, 2000));
    
    const results = {
      skinType: 'Combination',
      concerns: ['Dryness', 'Uneven texture'],
      recommendations: ['Use gentle cleanser', 'Apply moisturizer daily']
    };

    // Save analysis results to Supabase
    if (onComplete) {
      onComplete(capturedImage, results);
    }
  };

  const analyzeImage = async (imageData: string) => {
    if (!yoloModel) {
      setError('Skin analysis model not loaded');
      return;
    }

    setIsCapturing(true);
    try {
      // Create image element from data URL
      const img = new Image();
      img.src = imageData;
      await new Promise((resolve) => {
        img.onload = resolve;
      });

      // Create canvas for processing
      const canvas = document.createElement('canvas');
      const ctx = canvas.getContext('2d');
      if (!ctx) throw new Error('Failed to get canvas context');

      // Set canvas size to match YOLO input size
      canvas.width = YOLO_CONFIG.inputSize;
      canvas.height = YOLO_CONFIG.inputSize;

      // Draw and resize image
      ctx.drawImage(img, 0, 0, canvas.width, canvas.height);

      // Convert to OpenCV format
      const src = cv.imread(canvas);
      const blob = cv.blobFromImage(src, 1/255.0, new cv.Size(YOLO_CONFIG.inputSize, YOLO_CONFIG.inputSize));

      // Run YOLOv7 detection
      yoloModel.setInput(blob);
      const output = yoloModel.forward();

      // Process detections
      const detections = processYOLOOutput(output, img.width, img.height);

      // Create detection overlay
      createDetectionOverlay(detections, img.width, img.height);

      // Analyze skin based on detections
      const results = analyzeSkinFromDetections(detections);

      setAnalysisResults(results);
      setShowRecommendations(true);

      // Save results to Supabase
      if (user) {
        await saveAnalysisResults(user.id, {
          ...results,
          imageUrl: imageData,
          detections: detections.map(d => ({
            class: YOLO_CONFIG.classes[d.classId],
            confidence: d.confidence
          }))
        });
      }

      // Clean up
      src.delete();
      blob.delete();
      output.delete();
    } catch (err) {
      console.error('Analysis error:', err);
      setError('Failed to analyze image');
    } finally {
      setIsCapturing(false);
    }
  };

  const processYOLOOutput = (output: any, originalWidth: number, originalHeight: number) => {
    const detections = [];
    const outputData = output.data;
    
    // YOLOv7 output processing
    for (let i = 0; i < outputData.length; i += 6) {
      const confidence = outputData[i + 4];
      if (confidence > YOLO_CONFIG.confidenceThreshold) {
        const x = outputData[i] * originalWidth;
        const y = outputData[i + 1] * originalHeight;
        const w = outputData[i + 2] * originalWidth;
        const h = outputData[i + 3] * originalHeight;
        const classId = Math.round(outputData[i + 5]);

        detections.push({
          x, y, w, h,
          confidence,
          classId
        });
      }
    }

    // Apply Non-Maximum Suppression
    return applyNMS(detections);
  };

  const applyNMS = (detections: any[]) => {
    // Sort detections by confidence
    detections.sort((a, b) => b.confidence - a.confidence);

    const filteredDetections = [];
    const used = new Set();

    for (let i = 0; i < detections.length; i++) {
      if (used.has(i)) continue;

      const detection = detections[i];
      filteredDetections.push(detection);
      used.add(i);

      // Check overlap with remaining detections
      for (let j = i + 1; j < detections.length; j++) {
        if (used.has(j)) continue;

        const other = detections[j];
        const iou = calculateIOU(detection, other);

        if (iou > YOLO_CONFIG.nmsThreshold) {
          used.add(j);
        }
      }
    }

    return filteredDetections;
  };

  const calculateIOU = (box1: any, box2: any) => {
    const x1 = Math.max(box1.x, box2.x);
    const y1 = Math.max(box1.y, box2.y);
    const x2 = Math.min(box1.x + box1.w, box2.x + box2.w);
    const y2 = Math.min(box1.y + box1.h, box2.y + box2.h);

    const intersection = Math.max(0, x2 - x1) * Math.max(0, y2 - y1);
    const area1 = box1.w * box1.h;
    const area2 = box2.w * box2.h;
    const union = area1 + area2 - intersection;

    return intersection / union;
  };

  const createDetectionOverlay = (detections: any[], width: number, height: number) => {
    const overlay = document.createElement('canvas');
    overlay.width = width;
    overlay.height = height;
    const ctx = overlay.getContext('2d');
    if (!ctx) return;

    // Draw detections
    detections.forEach(detection => {
      const { x, y, w, h, confidence, classId } = detection;
      const className = YOLO_CONFIG.classes[classId];

      // Draw bounding box
      ctx.strokeStyle = '#00ff00';
      ctx.lineWidth = 2;
      ctx.strokeRect(x, y, w, h);

      // Draw label
      ctx.fillStyle = '#00ff00';
      ctx.font = '16px Arial';
      ctx.fillText(`${className} ${(confidence * 100).toFixed(1)}%`, x, y - 5);
    });

    setDetectionOverlay(overlay);
  };

  const analyzeSkinFromDetections = (detections: any[]) => {
    // Count occurrences of each skin condition
    const conditionCounts = new Map<string, number>();
    detections.forEach(detection => {
      const condition = YOLO_CONFIG.classes[detection.classId];
      conditionCounts.set(condition, (conditionCounts.get(condition) || 0) + 1);
    });

    // Determine skin type based on conditions
    let skinType = 'Normal';
    if (conditionCounts.get('oily') > 0) {
      skinType = 'Oily';
    } else if (conditionCounts.get('dryness') > 0) {
      skinType = 'Dry';
    } else if (conditionCounts.get('oily') > 0 && conditionCounts.get('dryness') > 0) {
      skinType = 'Combination';
    }

    // Collect concerns
    const concerns = Array.from(conditionCounts.entries())
      .filter(([_, count]) => count > 0)
      .map(([condition]) => condition);

    // Generate recommendations based on conditions
    const recommendations = generateRecommendations(concerns, skinType);

    return {
      skinType,
      concerns,
      recommendations
    };
  };

  const generateRecommendations = (concerns: string[], skinType: string) => {
    const recommendations = [];

    // General recommendations based on skin type
    switch (skinType) {
      case 'Oily':
        recommendations.push('Use oil-free cleanser', 'Apply mattifying moisturizer');
        break;
      case 'Dry':
        recommendations.push('Use gentle, hydrating cleanser', 'Apply rich moisturizer');
        break;
      case 'Combination':
        recommendations.push('Use balanced cleanser', 'Apply lightweight moisturizer');
        break;
      default:
        recommendations.push('Use gentle cleanser', 'Apply daily moisturizer');
    }

    // Specific recommendations based on concerns
    concerns.forEach(concern => {
      switch (concern) {
        case 'acne':
          recommendations.push('Use salicylic acid treatment', 'Avoid touching face');
          break;
        case 'wrinkles':
          recommendations.push('Use retinol serum', 'Apply sunscreen daily');
          break;
        case 'dark_spots':
          recommendations.push('Use vitamin C serum', 'Apply brightening treatment');
          break;
        case 'redness':
          recommendations.push('Use calming serum', 'Avoid harsh products');
          break;
        case 'sensitivity':
          recommendations.push('Use fragrance-free products', 'Patch test new products');
          break;
      }
    });

    return recommendations;
  };

  return (
    <motion.div
      initial="hidden"
      animate="visible"
      exit="exit"
      variants={containerVariants}
      className="min-h-screen bg-gradient-to-br from-rose-50 via-pink-50 to-fuchsia-50 p-4"
    >
      <div className="max-w-4xl mx-auto">
        <motion.button
          variants={itemVariants}
          onClick={handleBack}
          className="flex items-center gap-2 text-gray-600 hover:text-gray-900 transition-colors mb-4"
          whileHover={hoverAnimations.button}
          whileTap={{ scale: 0.97 }}
          transition={springConfigs.snappy}
        >
          <motion.div
            whileHover={hoverAnimations.icon}
            transition={springConfigs.bouncy}
          >
            <ArrowLeft className="w-5 h-5" />
          </motion.div>
          <span>Back</span>
        </motion.button>

        <AnimatePresence>
          {showGuide && (
            <motion.div
              initial={{ opacity: 0, y: -20 }}
              animate={{ opacity: 1, y: 0 }}
              exit={{ opacity: 0, y: -20 }}
              className="mb-6"
            >
              <Card className="bg-white/90 backdrop-blur-md border-pink-200/50 shadow-xl">
                <div className="p-6">
                  <div className="flex items-center space-x-3 mb-4">
                    <div className="p-2 bg-gradient-to-br from-pink-500 to-rose-500 rounded-xl shadow-lg">
                      <Sparkles className="h-6 w-6 text-white" />
                    </div>
                    <h3 className="text-lg font-semibold bg-gradient-to-r from-pink-600 to-rose-600 bg-clip-text text-transparent">
                      Capture Tips
                    </h3>
                  </div>
                  <ul className="space-y-2 text-gray-600">
                    <li className="flex items-center space-x-2">
                      <div className="w-1.5 h-1.5 rounded-full bg-gradient-to-r from-pink-500 to-rose-500"></div>
                      <span>Find a well-lit area with natural light</span>
                    </li>
                    <li className="flex items-center space-x-2">
                      <div className="w-1.5 h-1.5 rounded-full bg-gradient-to-r from-pink-500 to-rose-500"></div>
                      <span>Position your face in the center of the frame</span>
                    </li>
                    <li className="flex items-center space-x-2">
                      <div className="w-1.5 h-1.5 rounded-full bg-gradient-to-r from-pink-500 to-rose-500"></div>
                      <span>Keep a neutral expression for best results</span>
                    </li>
                    <li className="flex items-center space-x-2">
                      <div className="w-1.5 h-1.5 rounded-full bg-gradient-to-r from-pink-500 to-rose-500"></div>
                      <span>Ensure your entire face is visible</span>
                    </li>
                  </ul>
                  <Button
                    variant="ghost"
                    className="mt-4 text-rose-600 hover:text-rose-700 hover:bg-rose-50"
                    onClick={() => setShowGuide(false)}
                  >
                    Got it!
                  </Button>
                </div>
              </Card>
            </motion.div>
          )}
        </AnimatePresence>

        <motion.div
          variants={itemVariants}
          className="relative aspect-[4/3] bg-black/5 rounded-2xl overflow-hidden"
          whileHover={hoverAnimations.card}
        >
          <motion.video
            ref={videoRef}
            autoPlay
            playsInline
            className="w-full h-full object-cover"
            initial={{ scale: 0.97, opacity: 0 }}
            animate={{ scale: 1, opacity: 1 }}
            transition={{
              ...springConfigs.gentle,
              duration: 0.7,
              ease: easingFunctions.smooth
            }}
          />
          <motion.canvas
            ref={canvasRef}
            className="absolute top-0 left-0 w-full h-full"
            initial={{ opacity: 0 }}
            animate={{ opacity: 1 }}
            transition={{
              ...springConfigs.gentle,
              delay: 0.25
            }}
          />
          
          <AnimatePresence mode="wait">
            {realTimeGuidance.length > 0 && (
              <motion.div
                initial={{ opacity: 0, y: 15, scale: 0.97 }}
                animate={{ opacity: 1, y: 0, scale: 1 }}
                exit={{ opacity: 0, y: -15, scale: 0.97 }}
                transition={{
                  ...springConfigs.snappy,
                  type: "spring",
                  stiffness: 250,
                  damping: 25
                }}
                className="absolute top-4 left-1/2 -translate-x-1/2 bg-white/90 backdrop-blur-sm px-4 py-2 rounded-full shadow-lg"
              >
                <motion.p
                  initial={{ opacity: 0 }}
                  animate={{ opacity: 1 }}
                  transition={{ delay: 0.08 }}
                  className="text-sm font-medium text-gray-700"
                >
                  {realTimeGuidance[0]}
                </motion.p>
              </motion.div>
            )}
          </AnimatePresence>

          <AnimatePresence mode="wait">
            {processingStatus && (
              <motion.div
                initial={{ opacity: 0 }}
                animate={{ opacity: 1 }}
                exit={{ opacity: 0 }}
                transition={{ duration: 0.15 }}
                className="absolute inset-0 bg-black/50 flex items-center justify-center"
              >
                <motion.div
                  initial={{ scale: 0.97, opacity: 0 }}
                  animate={{ scale: 1, opacity: 1 }}
                  transition={{
                    ...springConfigs.snappy,
                    type: "spring",
                    stiffness: 250,
                    damping: 25
                  }}
                  className="bg-white/90 backdrop-blur-sm px-6 py-4 rounded-xl shadow-lg"
                >
                  <motion.p
                    initial={{ opacity: 0 }}
                    animate={{ opacity: 1 }}
                    transition={{ delay: 0.08 }}
                    className="text-gray-700 font-medium"
                  >
                    {processingStatus}
                  </motion.p>
                </motion.div>
              </motion.div>
            )}
          </AnimatePresence>
        </motion.div>

        <div className="mt-6 text-center">
          <p className="text-gray-500 text-sm font-medium">
            {isFaceDetected 
              ? "Face detected! You can now capture the image."
              : "Position your face in the center of the frame"}
          </p>
          <AnimatePresence mode="wait">
            {analysis && capturedImage && (
              <motion.div
                variants={itemVariants}
                className="mt-6 p-6 bg-white/80 backdrop-blur-sm rounded-xl shadow-sm"
                whileHover={hoverAnimations.card}
              >
                <div className="grid grid-cols-2 gap-6">
                  <motion.div
                    variants={itemVariants}
                    className="relative"
                  >
                    <motion.h3
                      initial={{ opacity: 0, y: -10 }}
                      animate={{ opacity: 1, y: 0 }}
                      transition={{ delay: 0.15 }}
                      className="text-lg font-semibold text-gray-800 mb-4"
                    >
                      Captured Image
                    </motion.h3>
                    <motion.div
                      initial={{ scale: 0.97 }}
                      animate={{ scale: 1 }}
                      transition={{
                        ...springConfigs.snappy,
                        type: "spring",
                        stiffness: 250,
                        damping: 25
                      }}
                      className="relative aspect-square rounded-lg overflow-hidden"
                      whileHover={{ scale: 1.01 }}
                    >
                      <motion.img
                        initial={{ opacity: 0 }}
                        animate={{ opacity: 1 }}
                        transition={{ delay: 0.25 }}
                        src={capturedImage}
                        alt="Captured skin analysis"
                        className="w-full h-full object-cover"
                      />
                      <motion.div
                        initial={{ opacity: 0 }}
                        animate={{ opacity: 1 }}
                        transition={{ delay: 0.3 }}
                        className="absolute inset-0 bg-gradient-to-t from-black/20 to-transparent"
                      />
                    </motion.div>
                  </motion.div>

                  <motion.div
                    variants={itemVariants}
                  >
                    <motion.h3
                      initial={{ opacity: 0, y: -10 }}
                      animate={{ opacity: 1, y: 0 }}
                      transition={{ delay: 0.25 }}
                      className="text-lg font-semibold text-gray-800 mb-4"
                    >
                      Skin Analysis Results
                    </motion.h3>
                    
                    <motion.div
                      variants={containerVariants}
                      className="space-y-4"
                    >
                      <motion.div
                        variants={itemVariants}
                        className="space-y-3"
                      >
                        <div>
                          <div className="flex justify-between text-sm mb-1">
                            <span className="text-gray-600">Pore Size & Distribution</span>
                            <span className="font-medium">
                              {Math.round(analysis.skinAnalysis.detailedMetrics.poreSize * 100)}%
                            </span>
                          </div>
                          <div className="h-2 bg-gray-100 rounded-full overflow-hidden">
                            <div
                              className="h-full bg-gradient-to-r from-pink-500 to-rose-500"
                              style={{ width: `${analysis.skinAnalysis.detailedMetrics.poreSize * 100}%` }}
                            />
                          </div>
                        </div>

                        <div>
                          <div className="flex justify-between text-sm mb-1">
                            <span className="text-gray-600">Skin Smoothness</span>
                            <span className="font-medium">
                              {Math.round(analysis.skinAnalysis.detailedMetrics.skinSmoothness * 100)}%
                            </span>
                          </div>
                          <div className="h-2 bg-gray-100 rounded-full overflow-hidden">
                            <div
                              className="h-full bg-gradient-to-r from-pink-500 to-rose-500"
                              style={{ width: `${analysis.skinAnalysis.detailedMetrics.skinSmoothness * 100}%` }}
                            />
                          </div>
                        </div>

                        <div>
                          <div className="flex justify-between text-sm mb-1">
                            <span className="text-gray-600">Tone Evenness</span>
                            <span className="font-medium">
                              {Math.round(analysis.skinAnalysis.detailedMetrics.toneEvenness * 100)}%
                            </span>
                          </div>
                          <div className="h-2 bg-gray-100 rounded-full overflow-hidden">
                            <div
                              className="h-full bg-gradient-to-r from-pink-500 to-rose-500"
                              style={{ width: `${analysis.skinAnalysis.detailedMetrics.toneEvenness * 100}%` }}
                            />
                          </div>
                        </div>

                        <div>
                          <div className="flex justify-between text-sm mb-1">
                            <span className="text-gray-600">Hydration Level</span>
                            <span className="font-medium">
                              {Math.round(analysis.skinAnalysis.detailedMetrics.hydrationLevel * 100)}%
                            </span>
                          </div>
                          <div className="h-2 bg-gray-100 rounded-full overflow-hidden">
                            <div
                              className="h-full bg-gradient-to-r from-pink-500 to-rose-500"
                              style={{ width: `${analysis.skinAnalysis.detailedMetrics.hydrationLevel * 100}%` }}
                            />
                          </div>
                        </div>

                        <div>
                          <div className="flex justify-between text-sm mb-1">
                            <span className="text-gray-600">Oiliness</span>
                            <span className="font-medium">
                              {Math.round(analysis.skinAnalysis.detailedMetrics.oiliness * 100)}%
                            </span>
                          </div>
                          <div className="h-2 bg-gray-100 rounded-full overflow-hidden">
                            <div
                              className="h-full bg-gradient-to-r from-pink-500 to-rose-500"
                              style={{ width: `${analysis.skinAnalysis.detailedMetrics.oiliness * 100}%` }}
                            />
                          </div>
                        </div>
                      </motion.div>
                    </motion.div>
                  </motion.div>
                </div>

                <motion.div
                  variants={itemVariants}
                  className="mt-6 pt-6 border-t border-gray-200"
                >
                  <motion.h4
                    initial={{ opacity: 0 }}
                    animate={{ opacity: 1 }}
                    transition={{ delay: 0.4 }}
                    className="text-sm font-medium text-gray-600 mb-3"
                  >
                    Personalized Recommendations
                  </motion.h4>
                  <motion.ul
                    variants={containerVariants}
                    className="space-y-2"
                  >
                    {analysis.recommendations.map((rec, index) => (
                      <motion.li
                        key={index}
                        variants={itemVariants}
                        className="flex items-start text-sm"
                        whileHover={{ x: 4 }}
                        transition={springConfigs.gentle}
                      >
                        <motion.div
                          initial={{ scale: 0 }}
                          animate={{ scale: 1 }}
                          transition={{
                            ...springConfigs.bouncy,
                            delay: 0.5 + index * 0.08
                          }}
                        >
                          <CheckCircle2 className="w-4 h-4 text-green-500 mt-0.5 mr-2 flex-shrink-0" />
                        </motion.div>
                        <motion.span
                          initial={{ opacity: 0, x: -15 }}
                          animate={{ opacity: 1, x: 0 }}
                          transition={{
                            ...springConfigs.gentle,
                            delay: 0.5 + index * 0.08
                          }}
                          className="text-gray-700"
                        >
                          {rec}
                        </motion.span>
                      </motion.li>
                    ))}
                  </motion.ul>
                </motion.div>

                <motion.div
                  variants={itemVariants}
                  className="mt-6 pt-6 border-t border-gray-200"
                >
                  <motion.div
                    initial={{ opacity: 0 }}
                    animate={{ opacity: 1 }}
                    transition={{ delay: 0.6 }}
                    className="flex items-center justify-between"
                  >
                    <span className="text-sm font-medium text-gray-600">Overall Skin Health</span>
                    <motion.span
                      initial={{ scale: 0 }}
                      animate={{ scale: 1 }}
                      transition={{
                        ...springConfigs.bouncy,
                        type: "spring",
                        stiffness: 250,
                        damping: 25,
                        delay: 0.7
                      }}
                      className="text-lg font-semibold text-gray-800"
                    >
                      {Math.round(analysis.skinAnalysis.overall * 100)}%
                    </motion.span>
                  </motion.div>
                  <motion.div
                    initial={{ scaleX: 0 }}
                    animate={{ scaleX: 1 }}
                    transition={{
                      ...springConfigs.gentle,
                      type: "spring",
                      stiffness: 100,
                      damping: 20,
                      delay: 0.8
                    }}
                    className="h-3 bg-gray-100 rounded-full overflow-hidden mt-2"
                  >
                    <motion.div
                      initial={{ width: 0 }}
                      animate={{ width: `${analysis.skinAnalysis.overall * 100}%` }}
                      transition={{
                        duration: 1.2,
                        ease: easingFunctions.elastic,
                        delay: 0.9
                      }}
                      className="h-full bg-gradient-to-r from-pink-500 to-rose-500"
                    />
                  </motion.div>
                </motion.div>
              </motion.div>
            )}
          </AnimatePresence>
        </div>

        {showRecommendations && analysis && (
          <motion.div
            initial={{ opacity: 0, y: 20 }}
            animate={{ opacity: 1, y: 0 }}
            transition={{ duration: 0.5 }}
            className="mt-8"
          >
            <ProductRecommendations analysisResults={analysis} />
          </motion.div>
        )}
      </div>
    </motion.div>
  );
};

export default CameraCapture; 