import React, { useState } from 'react';
import { motion, AnimatePresence } from 'framer-motion';
import { MessageCircle, X, ArrowLeft, Send } from 'lucide-react';

interface FloatingChatbotProps {
  onClose: () => void;
}

const FloatingChatbot: React.FC<FloatingChatbotProps> = ({ onClose }) => {
  const [isExpanded, setIsExpanded] = useState(false);
  const [messages, setMessages] = useState<Array<{ text: string; isUser: boolean }>>([]);
  const [inputText, setInputText] = useState('');

  const handleSubmit = (e: React.FormEvent) => {
    e.preventDefault();
    if (!inputText.trim()) return;

    // Add user message
    setMessages(prev => [...prev, { text: inputText, isUser: true }]);
    setInputText('');

    // Simulate AI response
    setTimeout(() => {
      setMessages(prev => [...prev, {
        text: "I'm your beauty expert! How can I help you today?",
        isUser: false
      }]);
    }, 1000);
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
    message: {
      scale: 1.02,
      transition: springConfigs.elastic
    }
  };

  return (
    <motion.div
      initial="hidden"
      animate="visible"
      exit="exit"
      variants={containerVariants}
      className="fixed inset-0 bg-black/50 backdrop-blur-sm z-50 flex items-center justify-center p-4"
    >
      <motion.div
        variants={itemVariants}
        className="bg-white rounded-2xl shadow-xl w-full max-w-lg overflow-hidden"
        whileHover={hoverAnimations.card}
      >
        {/* Header */}
        <motion.div
          variants={itemVariants}
          className="bg-gradient-to-r from-purple-500 to-fuchsia-500 p-4 flex items-center justify-between"
        >
          <motion.div
            initial={{ opacity: 0, x: -15 }}
            animate={{ opacity: 1, x: 0 }}
            transition={{
              ...springConfigs.gentle,
              delay: 0.15
            }}
            className="flex items-center gap-3"
          >
            <motion.div
              initial={{ scale: 0 }}
              animate={{ scale: 1 }}
              transition={{
                ...springConfigs.bouncy,
                delay: 0.25
              }}
              className="w-10 h-10 bg-white/20 rounded-full flex items-center justify-center"
            >
              <MessageCircle className="w-5 h-5 text-white" />
            </motion.div>
            <motion.h2
              initial={{ opacity: 0 }}
              animate={{ opacity: 1 }}
              transition={{
                ...springConfigs.gentle,
                delay: 0.35
              }}
              className="text-white font-semibold"
            >
              Beauty Assistant
            </motion.h2>
          </motion.div>
          <motion.div
            initial={{ opacity: 0, x: 15 }}
            animate={{ opacity: 1, x: 0 }}
            transition={{
              ...springConfigs.gentle,
              delay: 0.45
            }}
            className="flex items-center gap-2"
          >
            <motion.button
              onClick={() => setIsExpanded(false)}
              className="p-2 text-white/80 hover:text-white transition-colors"
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
            </motion.button>
            <motion.button
              onClick={onClose}
              className="p-2 text-white/80 hover:text-white transition-colors"
              whileHover={hoverAnimations.button}
              whileTap={{ scale: 0.97 }}
              transition={springConfigs.snappy}
            >
              <motion.div
                whileHover={hoverAnimations.icon}
                transition={springConfigs.bouncy}
              >
                <X className="w-5 h-5" />
              </motion.div>
            </motion.button>
          </motion.div>
        </motion.div>

        {/* Messages */}
        <motion.div
          variants={containerVariants}
          className="h-[400px] overflow-y-auto p-4 space-y-4"
        >
          <AnimatePresence mode="wait">
            {messages.map((message, index) => (
              <motion.div
                key={index}
                variants={itemVariants}
                initial={{ opacity: 0, y: 15, scale: 0.97 }}
                animate={{ opacity: 1, y: 0, scale: 1 }}
                exit={{ opacity: 0, y: -15, scale: 0.97 }}
                transition={{
                  ...springConfigs.snappy,
                  delay: index * 0.08
                }}
                className={`flex ${message.isUser ? 'justify-end' : 'justify-start'}`}
              >
                <motion.div
                  whileHover={hoverAnimations.message}
                  transition={springConfigs.gentle}
                  className={`max-w-[80%] rounded-2xl p-3 ${
                    message.isUser
                      ? 'bg-gradient-to-r from-purple-500 to-fuchsia-500 text-white'
                      : 'bg-gray-100 text-gray-800'
                  }`}
                >
                  <motion.p
                    initial={{ opacity: 0 }}
                    animate={{ opacity: 1 }}
                    transition={{
                      ...springConfigs.gentle,
                      delay: index * 0.08 + 0.08
                    }}
                    className="text-sm"
                  >
                    {message.text}
                  </motion.p>
                </motion.div>
              </motion.div>
            ))}
          </AnimatePresence>
        </motion.div>

        {/* Input */}
        <motion.div
          variants={itemVariants}
          className="p-4 border-t border-gray-100"
        >
          <motion.form
            onSubmit={handleSubmit}
            className="flex gap-2"
            initial={{ opacity: 0, y: 15 }}
            animate={{ opacity: 1, y: 0 }}
            transition={{
              ...springConfigs.gentle,
              delay: 0.55
            }}
          >
            <motion.input
              type="text"
              value={inputText}
              onChange={(e) => setInputText(e.target.value)}
              placeholder="Ask about your skin care..."
              className="flex-1 px-4 py-2 rounded-lg border border-gray-200 focus:border-purple-500 focus:ring-2 focus:ring-purple-200 outline-none transition-all"
              whileFocus={{ scale: 1.01 }}
              transition={springConfigs.gentle}
            />
            <motion.button
              type="submit"
              className="bg-gradient-to-r from-purple-500 to-fuchsia-500 text-white px-4 py-2 rounded-lg hover:opacity-90 transition-opacity"
              whileHover={{ scale: 1.02 }}
              whileTap={{ scale: 0.98 }}
              transition={springConfigs.snappy}
            >
              <motion.div
                whileHover={hoverAnimations.icon}
                transition={springConfigs.bouncy}
              >
                <Send className="w-5 h-5" />
              </motion.div>
            </motion.button>
          </motion.form>
        </motion.div>
      </motion.div>
    </motion.div>
  );
};

export default FloatingChatbot; 