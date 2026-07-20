import React, { useState, useEffect } from 'react';
import { useNavigate } from 'react-router-dom';
import { motion, AnimatePresence } from 'framer-motion';
import { Camera, MessageCircle, ShoppingBag, ArrowLeft, Sparkles, Heart, Star, Wand2, Flower2, Butterfly, Rainbow, Crown, Sparkle } from 'lucide-react';
import CameraCapture from '@/components/CameraCapture';
import FloatingChatbot from '@/components/FloatingChatbot';
import { useAuth } from '@/lib/AuthContext';
import Guide from '@/components/Guide';
import { Card, CardContent } from '@/components/ui/card';
import { Button } from '@/components/ui/button';
import { RealTimeAnalysis } from '../components/RealTimeAnalysis';
import { FinalAnalysis } from '../components/FinalAnalysis';
import { SkinAnalysis } from '../services/yoloService';

const Index: React.FC = () => {
  const navigate = useNavigate();
  const { user } = useAuth();
  const [showCamera, setShowCamera] = useState(false);
  const [showChatbot, setShowChatbot] = useState(false);
  const [showGuide, setShowGuide] = useState(true);
  const [currentStep, setCurrentStep] = useState<'initial' | 'analysis' | 'questionnaire' | 'final'>('initial');
  const [analysisResults, setAnalysisResults] = useState<SkinAnalysis | null>(null);
  const [questionnaireResults, setQuestionnaireResults] = useState({
    ageGroup: '',
    lifestyle: [] as string[],
    concerns: [] as string[],
    goals: [] as string[]
  });

  const handleBack = () => {
    if (showCamera) {
      setShowCamera(false);
    } else if (showChatbot) {
      setShowChatbot(false);
    } else {
      navigate(-1);
    }
  };

  const handleChatClick = () => {
    setShowChatbot(true);
    // Create and show instruction message
    const instruction = document.createElement('div');
    instruction.className = 'fixed inset-0 flex items-center justify-center z-50 pointer-events-none';
    instruction.innerHTML = `
      <div class="bg-white/90 backdrop-blur-sm p-6 rounded-2xl shadow-lg transform transition-all duration-500 animate-fade-in">
        <div class="flex flex-col items-center gap-4">
          <div class="animate-pulse">
            <MessageCircle className="w-12 h-12 text-pink-500" />
          </div>
          <h3 class="text-xl font-semibold text-gray-800">Click the floating icon!</h3>
          <p class="text-gray-600 text-center">Your beauty expert is ready to chat</p>
        </div>
      </div>
    `;
    document.body.appendChild(instruction);
    setTimeout(() => {
      instruction.remove();
    }, 3000);
  };

  const handleCameraComplete = (imageData, analysis) => {
    console.log('Image captured:', imageData);
    console.log('Analysis:', analysis);
    setShowCamera(false);
  };

  const handleAnalysisComplete = (results: SkinAnalysis) => {
    setAnalysisResults(results);
    setCurrentStep('questionnaire');
  };

  const handleQuestionnaireComplete = (results: typeof questionnaireResults) => {
    setQuestionnaireResults(results);
    setCurrentStep('final');
  };

  const handleCancel = () => {
    setCurrentStep('initial');
    setAnalysisResults(null);
  };

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
    hidden: { opacity: 0 },
    visible: {
      opacity: 1,
      transition: {
        staggerChildren: 0.1
      }
    }
  };

  const itemVariants = {
    hidden: { opacity: 0, y: 20 },
    visible: { opacity: 1, y: 0 }
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
    gradient: {
      scale: 1.02,
      transition: springConfigs.elastic
    }
  };

  return (
    <div className="min-h-screen bg-gradient-to-b from-pink-50 to-purple-50">
      {/* Floating Elements */}
      <div className="fixed inset-0 pointer-events-none overflow-hidden">
        <motion.div
          animate={{
            y: [0, -20, 0],
            rotate: [0, 5, 0]
          }}
          transition={{
            duration: 4,
            repeat: Infinity,
            ease: "easeInOut"
          }}
          className="absolute top-20 left-10"
        >
          <Sparkles className="w-8 h-8 text-pink-400" />
        </motion.div>
        <motion.div
          animate={{
            y: [0, 20, 0],
            rotate: [0, -5, 0]
          }}
          transition={{
            duration: 5,
            repeat: Infinity,
            ease: "easeInOut"
          }}
          className="absolute top-40 right-20"
        >
          <Flower2 className="w-8 h-8 text-purple-400" />
        </motion.div>
        <motion.div
          animate={{
            y: [0, -15, 0],
            rotate: [0, 10, 0]
          }}
          transition={{
            duration: 6,
            repeat: Infinity,
            ease: "easeInOut"
          }}
          className="absolute bottom-40 left-20"
        >
          <Butterfly className="w-8 h-8 text-blue-400" />
        </motion.div>
        <motion.div
          animate={{
            y: [0, 15, 0],
            rotate: [0, -10, 0]
          }}
          transition={{
            duration: 7,
            repeat: Infinity,
            ease: "easeInOut"
          }}
          className="absolute bottom-20 right-40"
        >
          <Rainbow className="w-8 h-8 text-indigo-400" />
        </motion.div>
      </div>

      <div className="container mx-auto px-4 py-8">
        <motion.div
          variants={containerVariants}
          initial="hidden"
          animate="visible"
          className="max-w-4xl mx-auto"
        >
          {/* Header */}
          <motion.div variants={itemVariants} className="text-center mb-8">
            <div className="flex items-center justify-center space-x-2 mb-4">
              <Sparkle className="w-8 h-8 text-pink-500" />
              <h1 className="text-4xl font-bold bg-gradient-to-r from-pink-500 to-purple-500 bg-clip-text text-transparent">
                Skin Type Sparkle
              </h1>
              <Sparkle className="w-8 h-8 text-purple-500" />
            </div>
            <p className="text-lg text-gray-600">
              Discover your skin's unique story with our magical analysis ✨
            </p>
          </motion.div>

          {/* Main Content */}
          <AnimatePresence mode="wait">
            {currentStep === 'initial' && (
              <motion.div
                key="initial"
                initial={{ opacity: 0, y: 20 }}
                animate={{ opacity: 1, y: 0 }}
                exit={{ opacity: 0, y: -20 }}
                className="space-y-6"
              >
                <Card className="p-6 bg-white/80 backdrop-blur-sm border-pink-200">
                  <div className="text-center space-y-4">
                    <div className="flex justify-center space-x-4 mb-6">
                      <motion.div
                        animate={{
                          scale: [1, 1.1, 1],
                          rotate: [0, 5, 0]
                        }}
                        transition={{
                          duration: 2,
                          repeat: Infinity,
                          ease: "easeInOut"
                        }}
                      >
                        <Wand2 className="w-12 h-12 text-pink-500" />
                      </motion.div>
                      <motion.div
                        animate={{
                          scale: [1, 1.1, 1],
                          rotate: [0, -5, 0]
                        }}
                        transition={{
                          duration: 2,
                          repeat: Infinity,
                          ease: "easeInOut",
                          delay: 0.5
                        }}
                      >
                        <Heart className="w-12 h-12 text-purple-500" />
                      </motion.div>
                      <motion.div
                        animate={{
                          scale: [1, 1.1, 1],
                          rotate: [0, 5, 0]
                        }}
                        transition={{
                          duration: 2,
                          repeat: Infinity,
                          ease: "easeInOut",
                          delay: 1
                        }}
                      >
                        <Star className="w-12 h-12 text-blue-500" />
                      </motion.div>
                    </div>
                    <h2 className="text-2xl font-semibold text-gray-800">
                      Ready to Begin Your Skin Journey? ✨
                    </h2>
                    <p className="text-gray-600">
                      Let's discover your skin's unique needs and create your personalized care routine
                    </p>
                    <div className="flex justify-center space-x-4 mt-6">
                      <Button
                        onClick={() => setCurrentStep('analysis')}
                        className="bg-gradient-to-r from-pink-500 to-purple-500 hover:from-pink-600 hover:to-purple-600 text-white"
                      >
                        <Camera className="w-5 h-5 mr-2" />
                        Start Analysis
                      </Button>
                    </div>
                  </div>
                </Card>

                {/* Features */}
                <div className="grid grid-cols-1 md:grid-cols-3 gap-4">
                  <Card className="p-4 bg-white/80 backdrop-blur-sm border-pink-200">
                    <div className="flex items-center space-x-2">
                      <Crown className="w-6 h-6 text-yellow-500" />
                      <h3 className="font-semibold">Personalized Analysis</h3>
                    </div>
                    <p className="text-sm text-gray-600 mt-2">
                      Get detailed insights about your unique skin type and concerns
                    </p>
                  </Card>
                  <Card className="p-4 bg-white/80 backdrop-blur-sm border-pink-200">
                    <div className="flex items-center space-x-2">
                      <Sparkles className="w-6 h-6 text-pink-500" />
                      <h3 className="font-semibold">Expert Recommendations</h3>
                    </div>
                    <p className="text-sm text-gray-600 mt-2">
                      Receive tailored product and routine suggestions for your skin
                    </p>
                  </Card>
                  <Card className="p-4 bg-white/80 backdrop-blur-sm border-pink-200">
                    <div className="flex items-center space-x-2">
                      <Flower2 className="w-6 h-6 text-purple-500" />
                      <h3 className="font-semibold">Seasonal Care</h3>
                    </div>
                    <p className="text-sm text-gray-600 mt-2">
                      Learn how to adapt your routine for different seasons
                    </p>
                  </Card>
                </div>
              </motion.div>
            )}

            {currentStep === 'analysis' && (
              <motion.div
                key="analysis"
                initial={{ opacity: 0, y: 20 }}
                animate={{ opacity: 1, y: 0 }}
                exit={{ opacity: 0, y: -20 }}
              >
                <div className="flex justify-start mb-4">
                  <Button
                    onClick={handleCancel}
                    variant="outline"
                    className="text-pink-500 hover:text-pink-600"
                  >
                    ← Back
                  </Button>
                </div>
                <RealTimeAnalysis
                  onAnalysisComplete={handleAnalysisComplete}
                  onCancel={handleCancel}
                />
              </motion.div>
            )}

            {currentStep === 'questionnaire' && (
              <motion.div
                key="questionnaire"
                initial={{ opacity: 0, y: 20 }}
                animate={{ opacity: 1, y: 0 }}
                exit={{ opacity: 0, y: -20 }}
                className="container mx-auto px-4 py-8"
              >
                <Card className="max-w-2xl mx-auto">
                  <CardContent className="p-6">
                    <h2 className="text-2xl font-bold text-center mb-6">
                      Additional Information
                    </h2>
                    {/* Add your questionnaire form here */}
                    <div className="space-y-4">
                      {/* Example questions */}
                      <div>
                        <label className="block text-sm font-medium text-gray-700 mb-2">
                          Age Group
                        </label>
                        <select
                          className="w-full p-2 border rounded"
                          value={questionnaireResults.ageGroup}
                          onChange={(e) => setQuestionnaireResults(prev => ({
                            ...prev,
                            ageGroup: e.target.value
                          }))}
                        >
                          <option value="">Select age group</option>
                          <option value="teens">Teens (13-19)</option>
                          <option value="20s">20s</option>
                          <option value="30s">30s</option>
                          <option value="40s">40s</option>
                          <option value="50s+">50s+</option>
                        </select>
                      </div>

                      <div>
                        <label className="block text-sm font-medium text-gray-700 mb-2">
                          Lifestyle Factors
                        </label>
                        <div className="space-y-2">
                          {['Stress', 'Smoking', 'Exercise', 'Diet', 'Sleep'].map((factor) => (
                            <label key={factor} className="flex items-center">
                              <input
                                type="checkbox"
                                className="mr-2"
                                checked={questionnaireResults.lifestyle.includes(factor)}
                                onChange={(e) => {
                                  const newLifestyle = e.target.checked
                                    ? [...questionnaireResults.lifestyle, factor]
                                    : questionnaireResults.lifestyle.filter(f => f !== factor);
                                  setQuestionnaireResults(prev => ({
                                    ...prev,
                                    lifestyle: newLifestyle
                                  }));
                                }}
                              />
                              {factor}
                            </label>
                          ))}
                        </div>
                      </div>

                      <div className="flex justify-center mt-6">
                        <Button
                          onClick={() => handleQuestionnaireComplete(questionnaireResults)}
                          className="bg-gradient-to-r from-pink-500 to-rose-500 hover:from-pink-600 hover:to-rose-600"
                        >
                          Complete Analysis
                        </Button>
                      </div>
                    </div>
                  </CardContent>
                </Card>
              </motion.div>
            )}

            {currentStep === 'final' && analysisResults && (
              <motion.div
                key="final"
                initial={{ opacity: 0, y: 20 }}
                animate={{ opacity: 1, y: 0 }}
                exit={{ opacity: 0, y: -20 }}
              >
                <div className="flex justify-start mb-4">
                  <Button
                    onClick={handleCancel}
                    variant="outline"
                    className="text-pink-500 hover:text-pink-600"
                  >
                    ← Back
                  </Button>
                </div>
                <FinalAnalysis
                  analysis={analysisResults}
                  questionnaireResults={questionnaireResults}
                  onClose={handleCancel}
                />
              </motion.div>
            )}
          </AnimatePresence>
        </motion.div>
      </div>

      {/* Footer */}
      <footer className="mt-12 py-6 text-center text-gray-600">
        <p className="flex items-center justify-center space-x-2">
          <span>Made with</span>
          <Heart className="w-4 h-4 text-pink-500" />
          <span>for your beautiful skin</span>
        </p>
      </footer>
    </div>
  );
};

export default Index; 