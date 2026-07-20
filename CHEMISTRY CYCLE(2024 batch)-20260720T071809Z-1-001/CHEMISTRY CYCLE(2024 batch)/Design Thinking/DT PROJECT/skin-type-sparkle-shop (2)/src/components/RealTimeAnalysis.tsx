import React, { useEffect, useRef, useState } from 'react';
import { motion, AnimatePresence } from 'framer-motion';
import { yoloService, Detection, SkinAnalysis, YOLOService } from '../services/yoloService';
import { Card } from './ui/card';
import { Button } from './ui/button';
import { Progress } from './ui/progress';
import { Alert, AlertDescription } from './ui/alert';
import { AlertCircle, CheckCircle2, XCircle, Camera, X, Sparkles, Heart, Star, Wand2, Flower2, Butterfly, Rainbow, Crown, Sparkle } from 'lucide-react';
import { Badge } from './ui/badge';

interface RealTimeAnalysisProps {
  onAnalysisComplete: (results: SkinAnalysis) => void;
  onCancel: () => void;
}

const RealTimeAnalysis = ({ onAnalysisComplete, onCancel }: RealTimeAnalysisProps) => {
  const videoRef = useRef<HTMLVideoElement>(null);
  const canvasRef = useRef<HTMLCanvasElement>(null);
  const yoloServiceRef = useRef<YOLOService | null>(null);
  const [progress, setProgress] = useState(0);
  const [error, setError] = useState<string | null>(null);
  const [detections, setDetections] = useState<Detection[]>([]);
  const [analysisStatus, setAnalysisStatus] = useState<'idle' | 'analyzing' | 'complete'>('idle');
  const [currentSkinType, setCurrentSkinType] = useState<string | null>(null);
  const [detectedConcerns, setDetectedConcerns] = useState<string[]>([]);
  const [analysisPhase, setAnalysisPhase] = useState<'initial' | 'processing' | 'finalizing'>('initial');
  const [confidenceScores, setConfidenceScores] = useState<Record<string, number>>({});
  const [severityLevels, setSeverityLevels] = useState<Record<string, 'mild' | 'moderate' | 'severe'>>({});
  const [analysisMetrics, setAnalysisMetrics] = useState({
    hydration: 0,
    oilLevel: 0,
    sensitivity: 0,
    agingSigns: 0,
    barrierHealth: 0
  });
  const [isProcessingFrame, setIsProcessingFrame] = useState(false);
  const [lastProcessedTime, setLastProcessedTime] = useState<number>(0);
  const [frameCount, setFrameCount] = useState(0);

  useEffect(() => {
    // Initialize YOLO service
    yoloServiceRef.current = new YOLOService();
    startCamera();
    return () => stopCamera();
  }, []);

  const startCamera = async () => {
    try {
      const stream = await navigator.mediaDevices.getUserMedia({
        video: {
          width: { ideal: 1280 },
          height: { ideal: 720 },
          facingMode: 'user'
        }
      });
      if (videoRef.current) {
        videoRef.current.srcObject = stream;
      }
    } catch (err) {
      setError('Unable to access camera. Please ensure you have granted camera permissions.');
    }
  };

  const stopCamera = () => {
    if (videoRef.current?.srcObject) {
      const stream = videoRef.current.srcObject as MediaStream;
      stream.getTracks().forEach(track => track.stop());
    }
  };

  const drawDetections = (ctx: CanvasRenderingContext2D, detections: Detection[]) => {
    const { width, height } = ctx.canvas;
    ctx.clearRect(0, 0, width, height);

    // Draw processing indicator if active
    if (isProcessingFrame) {
      ctx.save();
      ctx.fillStyle = 'rgba(0, 0, 0, 0.5)';
      ctx.fillRect(0, 0, width, height);
      
      // Draw processing text
      ctx.fillStyle = 'white';
      ctx.font = 'bold 24px Inter';
      ctx.textAlign = 'center';
      ctx.textBaseline = 'middle';
      ctx.fillText('Processing Frame...', width / 2, height / 2);
      
      // Draw frame count
      ctx.font = '16px Inter';
      ctx.fillText(`Frame ${frameCount}`, width / 2, height / 2 + 30);
      ctx.restore();
    }

    // Draw detection overlays
    detections.forEach(detection => {
      const { x, y, w, h, confidence, className, severity } = detection;
      const color = getSeverityColor(severity);

      // Draw gradient bounding box
      const gradient = ctx.createLinearGradient(x, y, x + w, y + h);
      gradient.addColorStop(0, `${color}33`);
      gradient.addColorStop(1, `${color}11`);
      ctx.fillStyle = gradient;
      ctx.fillRect(x, y, w, h);

      // Draw border
      ctx.strokeStyle = color;
      ctx.lineWidth = 2;
      ctx.strokeRect(x, y, w, h);

      // Draw label with blur effect
      ctx.save();
      ctx.shadowColor = 'rgba(0, 0, 0, 0.5)';
      ctx.shadowBlur = 4;
      ctx.fillStyle = 'white';
      ctx.font = '14px Inter';
      ctx.fillText(`${className} (${Math.round(confidence * 100)}%)`, x + 5, y - 5);
      ctx.restore();

      // Draw severity indicator
      const dotSize = 8;
      const dotX = x + w - dotSize - 5;
      const dotY = y + 5;
      ctx.beginPath();
      ctx.arc(dotX, dotY, dotSize, 0, Math.PI * 2);
      ctx.fillStyle = color;
      ctx.fill();

      // Draw confidence bar
      const barHeight = 4;
      const barWidth = w * confidence;
      ctx.fillStyle = color;
      ctx.fillRect(x, y + h + 2, barWidth, barHeight);
    });

    // Draw analysis progress indicator
    if (analysisStatus === 'analyzing') {
      const centerX = width / 2;
      const centerY = height / 2;
      const radius = 50;
      const progress = progress / 100;

      // Draw progress circle
      ctx.beginPath();
      ctx.arc(centerX, centerY, radius, 0, Math.PI * 2);
      ctx.strokeStyle = '#e5e7eb';
      ctx.lineWidth = 8;
      ctx.stroke();

      ctx.beginPath();
      ctx.arc(centerX, centerY, radius, -Math.PI / 2, -Math.PI / 2 + Math.PI * 2 * progress);
      ctx.strokeStyle = '#8b5cf6';
      ctx.lineWidth = 8;
      ctx.stroke();

      // Draw percentage
      ctx.fillStyle = '#4b5563';
      ctx.font = '24px Inter';
      ctx.textAlign = 'center';
      ctx.textBaseline = 'middle';
      ctx.fillText(`${Math.round(progress * 100)}%`, centerX, centerY);
    }
  };

  const getSeverityColor = (severity: 'mild' | 'moderate' | 'severe') => {
    switch (severity) {
      case 'mild':
        return '#10b981';
      case 'moderate':
        return '#f59e0b';
      case 'severe':
        return '#ef4444';
      default:
        return '#6b7280';
    }
  };

  const startAnalysis = async () => {
    if (!yoloServiceRef.current) {
      setError('YOLO service not initialized');
      return;
    }

    setAnalysisStatus('analyzing');
    setProgress(0);
    setError(null);
    setDetections([]);
    setCurrentSkinType(null);
    setDetectedConcerns([]);
    setAnalysisPhase('initial');
    setFrameCount(0);

    const totalFrames = 30;
    const interval = 2000 / totalFrames;

    try {
      for (let i = 0; i < totalFrames; i++) {
        if (analysisStatus !== 'analyzing') break;

        // Capture frame
        const canvas = canvasRef.current;
        const video = videoRef.current;
        if (canvas && video) {
          const ctx = canvas.getContext('2d');
          if (ctx) {
            // Show processing indicator
            setIsProcessingFrame(true);
            setLastProcessedTime(Date.now());

            // Draw current frame
            ctx.drawImage(video, 0, 0, canvas.width, canvas.height);
            
            // Get image data for YOLO
            const imageData = canvas.toDataURL('image/jpeg');
            
            // Perform detection
            const newDetections = await yoloServiceRef.current.detectObjects(imageData);
            setDetections(newDetections);
            drawDetections(ctx, newDetections);

            // Update frame count
            setFrameCount(prev => prev + 1);

            // Update metrics based on detections
            updateMetrics(newDetections);

            // Hide processing indicator after a minimum time
            setTimeout(() => {
              setIsProcessingFrame(false);
            }, 100);
          }
        }

        // Update progress
        const newProgress = ((i + 1) / totalFrames) * 100;
        setProgress(newProgress);

        // Update analysis phase
        if (newProgress < 33) {
          setAnalysisPhase('initial');
        } else if (newProgress < 66) {
          setAnalysisPhase('processing');
        } else {
          setAnalysisPhase('finalizing');
        }

        await new Promise(resolve => setTimeout(resolve, interval));
      }

      // Complete analysis
      const finalAnalysis = yoloServiceRef.current.analyzeSkin(detections);
      onAnalysisComplete(finalAnalysis);
      setAnalysisStatus('complete');
    } catch (err) {
      setError('Error during analysis: ' + (err as Error).message);
      setAnalysisStatus('idle');
    }
  };

  const updateMetrics = (detections: Detection[]) => {
    const metrics = {
      hydration: 0,
      oilLevel: 0,
      sensitivity: 0,
      agingSigns: 0,
      barrierHealth: 0
    };

    detections.forEach(detection => {
      const { className, confidence, severity } = detection;
      const severityMultiplier = severity === 'severe' ? 1 : severity === 'moderate' ? 0.7 : 0.4;

      if (className.includes('dehydration')) {
        metrics.hydration += confidence * severityMultiplier * 100;
      }
      if (className.includes('oil') || className.includes('sebum')) {
        metrics.oilLevel += confidence * severityMultiplier * 100;
      }
      if (className.includes('sensitive') || className.includes('redness')) {
        metrics.sensitivity += confidence * severityMultiplier * 100;
      }
      if (className.includes('wrinkle') || className.includes('aging')) {
        metrics.agingSigns += confidence * severityMultiplier * 100;
      }
      if (className.includes('barrier')) {
        metrics.barrierHealth += confidence * severityMultiplier * 100;
      }
    });

    // Normalize metrics
    Object.keys(metrics).forEach(key => {
      metrics[key as keyof typeof metrics] = Math.min(100, metrics[key as keyof typeof metrics]);
    });

    setAnalysisMetrics(metrics);
  };

  return (
    <motion.div
      initial={{ opacity: 0, y: 20 }}
      animate={{ opacity: 1, y: 0 }}
      exit={{ opacity: 0, y: -20 }}
      className="w-full max-w-4xl mx-auto p-4"
    >
      <Card className="p-6">
        <div className="flex flex-col items-center space-y-6">
          <div className="relative w-full aspect-video bg-black rounded-lg overflow-hidden">
            <video
              ref={videoRef}
              autoPlay
              playsInline
              muted
              className="w-full h-full object-cover"
            />
            <canvas
              ref={canvasRef}
              className="absolute top-0 left-0 w-full h-full"
            />
            {isProcessingFrame && (
              <div className="absolute inset-0 flex items-center justify-center bg-black bg-opacity-50">
                <div className="text-center text-white">
                  <div className="text-xl font-bold mb-2">Processing Frame</div>
                  <div className="text-sm">Frame {frameCount}</div>
                </div>
              </div>
            )}
          </div>

          <div className="w-full space-y-4">
            <div className="flex items-center justify-between">
              <h3 className="text-lg font-semibold">Skin Analysis Progress</h3>
              <span className="text-sm text-gray-500">{progress}%</span>
            </div>
            <Progress value={progress} className="w-full" />
          </div>

          {currentSkinType && (
            <motion.div
              initial={{ opacity: 0, y: 10 }}
              animate={{ opacity: 1, y: 0 }}
              className="w-full"
            >
              <Alert>
                <AlertCircle className="h-4 w-4" />
                <AlertDescription>
                  Detected Skin Type: <span className="font-semibold">{currentSkinType}</span>
                </AlertDescription>
              </Alert>
            </motion.div>
          )}

          {detectedConcerns.length > 0 && (
            <motion.div
              initial={{ opacity: 0, y: 10 }}
              animate={{ opacity: 1, y: 0 }}
              className="w-full"
            >
              <Alert>
                <AlertCircle className="h-4 w-4" />
                <AlertDescription>
                  <div className="space-y-2">
                    <p className="font-semibold">Detected Concerns:</p>
                    <div className="flex flex-wrap gap-2">
                      {detectedConcerns.map((concern, index) => (
                        <Badge
                          key={index}
                          variant="secondary"
                          className={`${
                            severityLevels[concern] === 'severe'
                              ? 'bg-red-100 text-red-700'
                              : severityLevels[concern] === 'moderate'
                              ? 'bg-yellow-100 text-yellow-700'
                              : 'bg-green-100 text-green-700'
                          }`}
                        >
                          {concern} ({Math.round(confidenceScores[concern] * 100)}%)
                        </Badge>
                      ))}
                    </div>
                  </div>
                </AlertDescription>
              </Alert>
            </motion.div>
          )}

          {analysisPhase === 'processing' && (
            <div className="mt-4 grid grid-cols-2 md:grid-cols-5 gap-4">
              <div className="p-3 bg-blue-50 rounded-lg">
                <div className="text-sm font-medium text-blue-700">Hydration</div>
                <div className="text-2xl font-bold text-blue-900">
                  {analysisMetrics.hydration}%
                </div>
              </div>
              <div className="p-3 bg-green-50 rounded-lg">
                <div className="text-sm font-medium text-green-700">Oil Level</div>
                <div className="text-2xl font-bold text-green-900">
                  {analysisMetrics.oilLevel}%
                </div>
              </div>
              <div className="p-3 bg-yellow-50 rounded-lg">
                <div className="text-sm font-medium text-yellow-700">Sensitivity</div>
                <div className="text-2xl font-bold text-yellow-900">
                  {analysisMetrics.sensitivity}%
                </div>
              </div>
              <div className="p-3 bg-purple-50 rounded-lg">
                <div className="text-sm font-medium text-purple-700">Aging Signs</div>
                <div className="text-2xl font-bold text-purple-900">
                  {analysisMetrics.agingSigns}%
                </div>
              </div>
              <div className="p-3 bg-red-50 rounded-lg">
                <div className="text-sm font-medium text-red-700">Barrier Health</div>
                <div className="text-2xl font-bold text-red-900">
                  {analysisMetrics.barrierHealth}%
                </div>
              </div>
            </div>
          )}

          {error && (
            <motion.div
              initial={{ opacity: 0, y: 10 }}
              animate={{ opacity: 1, y: 0 }}
              className="w-full"
            >
              <Alert variant="destructive">
                <XCircle className="h-4 w-4" />
                <AlertDescription>{error}</AlertDescription>
              </Alert>
            </motion.div>
          )}

          <div className="flex space-x-4">
            {analysisStatus === 'idle' && (
              <Button
                onClick={startAnalysis}
                className="flex-1 bg-gradient-to-r from-pink-500 to-purple-500 hover:from-pink-600 hover:to-purple-600 text-white"
              >
                <Camera className="w-5 h-5 mr-2" />
                Start Analysis
              </Button>
            )}
            {analysisStatus === 'analyzing' && (
              <Button
                onClick={() => {
                  setAnalysisStatus('idle');
                  setProgress(0);
                }}
                variant="outline"
                className="flex-1"
              >
                Cancel Analysis
              </Button>
            )}
            <Button
              onClick={onCancel}
              variant="outline"
              className="flex-1"
            >
              Close Camera
            </Button>
          </div>
        </div>
      </Card>
    </motion.div>
  );
};

export default RealTimeAnalysis; 