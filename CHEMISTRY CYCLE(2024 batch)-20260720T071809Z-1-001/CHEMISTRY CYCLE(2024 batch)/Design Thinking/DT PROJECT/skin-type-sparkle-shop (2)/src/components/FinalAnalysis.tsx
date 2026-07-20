import React, { useState } from 'react';
import { motion } from 'framer-motion';
import { Card } from '@/components/ui/card';
import { Button } from '@/components/ui/button';
import { Progress } from '@/components/ui/progress';
import { Alert, AlertDescription } from '@/components/ui/alert';
import { Badge } from '@/components/ui/badge';
import { SkinAnalysis } from '@/services/yoloService';
import { ArrowLeft, Download, Printer, Heart, Star, Wand2, Flower2, Butterfly, Rainbow, Crown, Sparkle, AlertCircle, CheckCircle2, FileText } from 'lucide-react';
import SignUpForm from './SignUpForm';
import { jsPDF } from 'jspdf';
import 'jspdf-autotable';

interface FinalAnalysisProps {
  analysis: SkinAnalysis;
  onBack: () => void;
}

const FinalAnalysis = ({ analysis, onBack }: FinalAnalysisProps) => {
  const [showSignUp, setShowSignUp] = useState(false);
  const [selectedRoutine, setSelectedRoutine] = useState<'basic' | 'advanced' | 'luxury'>('basic');
  const [isGeneratingReport, setIsGeneratingReport] = useState(false);

  const getHealthScoreColor = (score: number) => {
    if (score >= 80) return 'text-green-600';
    if (score >= 60) return 'text-yellow-600';
    return 'text-red-600';
  };

  const getHealthScoreMessage = (score: number) => {
    if (score >= 80) return 'Your skin is in great condition!';
    if (score >= 60) return 'Your skin needs some attention.';
    return 'Your skin needs immediate care.';
  };

  const getSkinTypeDescription = (type: string) => {
    const descriptions: Record<string, string> = {
      'Oily': 'Your skin produces excess sebum, leading to shine and potential breakouts.',
      'Dry': 'Your skin lacks moisture and may feel tight or flaky.',
      'Combination': 'Your skin has both oily and dry areas, typically with an oily T-zone.',
      'Sensitive': 'Your skin reacts easily to products and environmental factors.',
      'Normal': 'Your skin is well-balanced with no major concerns.',
      'Mature': 'Your skin shows signs of aging and may need extra care.'
    };
    return descriptions[type] || 'Your skin type has been detected.';
  };

  const getSeverityColor = (severity: 'mild' | 'moderate' | 'severe') => {
    switch (severity) {
      case 'mild':
        return 'bg-green-100 text-green-800 border-green-200';
      case 'moderate':
        return 'bg-yellow-100 text-yellow-800 border-yellow-200';
      case 'severe':
        return 'bg-red-100 text-red-800 border-red-200';
      default:
        return 'bg-gray-100 text-gray-800 border-gray-200';
    }
  };

  const getPriorityColor = (priority: 'high' | 'medium' | 'low') => {
    switch (priority) {
      case 'high':
        return 'bg-red-100 text-red-800 border-red-200';
      case 'medium':
        return 'bg-yellow-100 text-yellow-800 border-yellow-200';
      case 'low':
        return 'bg-green-100 text-green-800 border-green-200';
      default:
        return 'bg-gray-100 text-gray-800 border-gray-200';
    }
  };

  const getRoutineProducts = (type: 'basic' | 'advanced' | 'luxury') => {
    const routines = {
      basic: [
        {
          step: 'Cleanser',
          products: [
            { name: 'Gentle Foaming Cleanser', brand: 'CeraVe', price: '$14.99', description: 'Non-drying formula that removes dirt and oil' },
            { name: 'Hydrating Facial Cleanser', brand: 'La Roche-Posay', price: '$15.99', description: 'Soap-free, gentle cleansing' }
          ]
        },
        {
          step: 'Moisturizer',
          products: [
            { name: 'Daily Moisturizing Lotion', brand: 'CeraVe', price: '$16.99', description: 'Lightweight, non-comedogenic formula' },
            { name: 'Neutrogena Hydro Boost', brand: 'Neutrogena', price: '$19.99', description: 'Oil-free gel moisturizer' }
          ]
        },
        {
          step: 'Sunscreen',
          products: [
            { name: 'Ultra-Light Daily UV Defense', brand: 'Neutrogena', price: '$12.99', description: 'SPF 50, non-greasy formula' },
            { name: 'Mineral Sunscreen', brand: 'La Roche-Posay', price: '$34.99', description: 'SPF 50, gentle mineral formula' }
          ]
        }
      ],
      advanced: [
        {
          step: 'Cleanser',
          products: [
            { name: 'Gentle Foaming Cleanser', brand: 'CeraVe', price: '$14.99', description: 'Non-drying formula that removes dirt and oil' },
            { name: 'Hydrating Facial Cleanser', brand: 'La Roche-Posay', price: '$15.99', description: 'Soap-free, gentle cleansing' }
          ]
        },
        {
          step: 'Toner',
          products: [
            { name: 'Hydrating Toner', brand: 'Paula\'s Choice', price: '$22.00', description: 'Alcohol-free, pH-balanced formula' },
            { name: 'Calming Toner', brand: 'Klairs', price: '$24.00', description: 'Soothing and hydrating' }
          ]
        },
        {
          step: 'Serum',
          products: [
            { name: 'Niacinamide 10%', brand: 'The Ordinary', price: '$6.80', description: 'Oil control and pore refinement' },
            { name: 'Hyaluronic Acid', brand: 'The Ordinary', price: '$7.90', description: 'Intense hydration' }
          ]
        },
        {
          step: 'Moisturizer',
          products: [
            { name: 'Daily Moisturizing Lotion', brand: 'CeraVe', price: '$16.99', description: 'Lightweight, non-comedogenic formula' },
            { name: 'Neutrogena Hydro Boost', brand: 'Neutrogena', price: '$19.99', description: 'Oil-free gel moisturizer' }
          ]
        },
        {
          step: 'Sunscreen',
          products: [
            { name: 'Ultra-Light Daily UV Defense', brand: 'Neutrogena', price: '$12.99', description: 'SPF 50, non-greasy formula' },
            { name: 'Mineral Sunscreen', brand: 'La Roche-Posay', price: '$34.99', description: 'SPF 50, gentle mineral formula' }
          ]
        }
      ],
      luxury: [
        {
          step: 'Cleanser',
          products: [
            { name: 'Gentle Foaming Cleanser', brand: 'CeraVe', price: '$14.99', description: 'Non-drying formula that removes dirt and oil' },
            { name: 'Hydrating Facial Cleanser', brand: 'La Roche-Posay', price: '$15.99', description: 'Soap-free, gentle cleansing' }
          ]
        },
        {
          step: 'Toner',
          products: [
            { name: 'Hydrating Toner', brand: 'Paula\'s Choice', price: '$22.00', description: 'Alcohol-free, pH-balanced formula' },
            { name: 'Calming Toner', brand: 'Klairs', price: '$24.00', description: 'Soothing and hydrating' }
          ]
        },
        {
          step: 'Essence',
          products: [
            { name: 'First Treatment Essence', brand: 'SK-II', price: '$99.00', description: 'Pitera-rich formula for radiance' },
            { name: 'Advanced Night Repair', brand: 'Estée Lauder', price: '$85.00', description: 'Anti-aging and repair' }
          ]
        },
        {
          step: 'Serum',
          products: [
            { name: 'Niacinamide 10%', brand: 'The Ordinary', price: '$6.80', description: 'Oil control and pore refinement' },
            { name: 'Hyaluronic Acid', brand: 'The Ordinary', price: '$7.90', description: 'Intense hydration' }
          ]
        },
        {
          step: 'Moisturizer',
          products: [
            { name: 'Daily Moisturizing Lotion', brand: 'CeraVe', price: '$16.99', description: 'Lightweight, non-comedogenic formula' },
            { name: 'Neutrogena Hydro Boost', brand: 'Neutrogena', price: '$19.99', description: 'Oil-free gel moisturizer' }
          ]
        },
        {
          step: 'Eye Cream',
          products: [
            { name: 'Advanced Eye Repair', brand: 'Estée Lauder', price: '$65.00', description: 'Anti-aging eye treatment' },
            { name: 'Eye Contour Cream', brand: 'La Mer', price: '$225.00', description: 'Luxury eye care' }
          ]
        },
        {
          step: 'Sunscreen',
          products: [
            { name: 'Ultra-Light Daily UV Defense', brand: 'Neutrogena', price: '$12.99', description: 'SPF 50, non-greasy formula' },
            { name: 'Mineral Sunscreen', brand: 'La Roche-Posay', price: '$34.99', description: 'SPF 50, gentle mineral formula' }
          ]
        }
      ]
    };

    return routines[type];
  };

  const handlePrint = () => {
    window.print();
  };

  const handleDownload = () => {
    const element = document.createElement('a');
    const file = new Blob([JSON.stringify(analysis, null, 2)], { type: 'application/json' });
    element.href = URL.createObjectURL(file);
    element.download = 'skin-analysis-report.json';
    document.body.appendChild(element);
    element.click();
    document.body.removeChild(element);
  };

  const generatePDFReport = () => {
    setIsGeneratingReport(true);
    const doc = new jsPDF();
    
    // Add title
    doc.setFontSize(24);
    doc.text('Skin Analysis Report', 20, 20);
    
    // Add date
    doc.setFontSize(12);
    doc.text(`Generated on: ${new Date().toLocaleDateString()}`, 20, 30);
    
    // Add skin type analysis
    doc.setFontSize(16);
    doc.text('Skin Type Analysis', 20, 45);
    doc.setFontSize(12);
    doc.text(`Primary Type: ${analysis.primaryType}`, 20, 55);
    doc.text(`Secondary Type: ${analysis.secondaryType}`, 20, 62);
    doc.text(`Confidence Score: ${analysis.confidenceScore}%`, 20, 69);
    
    // Add skin concerns
    doc.setFontSize(16);
    doc.text('Skin Concerns', 20, 85);
    doc.setFontSize(12);
    analysis.concerns.forEach((concern, index) => {
      doc.text(`• ${concern}`, 25, 95 + (index * 7));
    });
    
    // Add recommended routine
    doc.setFontSize(16);
    doc.text('Recommended Skincare Routine', 20, 140);
    doc.setFontSize(12);
    
    const routine = getRoutineProducts(selectedRoutine);
    routine.forEach((step, index) => {
      const yPos = 150 + (index * 30);
      doc.text(`${index + 1}. ${step.step}`, 20, yPos);
      step.products.forEach((product, pIndex) => {
        doc.text(`   • ${product.name} (${product.brand}) - ${product.price}`, 25, yPos + 7 + (pIndex * 7));
      });
    });
    
    // Add footer
    const pageHeight = doc.internal.pageSize.height;
    doc.setFontSize(10);
    doc.text('Generated by Skin Type Sparkle Shop', 20, pageHeight - 20);
    
    // Save the PDF
    doc.save('skin-analysis-report.pdf');
    setIsGeneratingReport(false);
  };

  return (
    <motion.div
      initial={{ opacity: 0, y: 20 }}
      animate={{ opacity: 1, y: 0 }}
      exit={{ opacity: 0, y: -20 }}
      className="space-y-6"
    >
      {showSignUp ? (
        <SignUpForm
          onSuccess={() => {
            setShowSignUp(false);
            // Save the current analysis to the user's profile
            authService.saveAnalysis(analysis);
          }}
          onCancel={() => setShowSignUp(false)}
        />
      ) : (
        <>
          <div className="flex items-center justify-between">
            <Button
              onClick={onBack}
              variant="outline"
              className="text-pink-500 hover:text-pink-600"
            >
              <ArrowLeft className="w-4 h-4 mr-2" />
              Back
            </Button>
            <div className="flex space-x-2">
              <Button
                onClick={handlePrint}
                variant="outline"
                className="text-purple-500 hover:text-purple-600"
              >
                <Printer className="w-4 h-4 mr-2" />
                Print
              </Button>
              <Button
                onClick={handleDownload}
                variant="outline"
                className="text-blue-500 hover:text-blue-600"
              >
                <Download className="w-4 h-4 mr-2" />
                Download
              </Button>
            </div>
          </div>

          <div className="grid grid-cols-1 md:grid-cols-2 gap-6">
            <Card className="p-6 bg-white/80 backdrop-blur-sm border-pink-200">
              <h2 className="text-2xl font-bold text-gray-900 mb-4">Overall Health Score</h2>
              <div className="flex items-center justify-center mb-4">
                <div className="relative">
                  <Progress
                    value={analysis.overallHealth}
                    className="h-4 w-48"
                  />
                  <div className={`absolute inset-0 flex items-center justify-center text-2xl font-bold ${getHealthScoreColor(analysis.overallHealth)}`}>
                    {analysis.overallHealth}%
                  </div>
                </div>
              </div>
              <p className="text-center text-gray-600">
                {getHealthScoreMessage(analysis.overallHealth)}
              </p>
            </Card>

            <Card className="p-6 bg-white/80 backdrop-blur-sm border-pink-200">
              <h2 className="text-2xl font-bold text-gray-900 mb-4">Skin Type</h2>
              <Alert className="bg-white/80 backdrop-blur-sm border-pink-200">
                <Heart className="w-4 h-4 text-pink-500" />
                <AlertDescription>
                  <div className="font-semibold text-pink-700">{analysis.skinType}</div>
                  <p className="text-sm text-gray-600 mt-1">
                    {getSkinTypeDescription(analysis.skinType)}
                  </p>
                </AlertDescription>
              </Alert>
            </Card>
          </div>

          <Card className="p-6 bg-white/80 backdrop-blur-sm border-pink-200">
            <h2 className="text-2xl font-bold text-gray-900 mb-4">Detected Concerns</h2>
            <div className="grid grid-cols-1 md:grid-cols-2 lg:grid-cols-3 gap-4">
              {analysis.concerns.map((concern, index) => (
                <Card
                  key={index}
                  className="p-4 bg-white/80 backdrop-blur-sm border-pink-200 hover:shadow-lg transition-shadow"
                >
                  <div className="flex items-start justify-between">
                    <div>
                      <h3 className="font-semibold text-gray-900">{concern.name}</h3>
                      <p className="text-sm text-gray-600 mt-1">{concern.description}</p>
                    </div>
                    <Badge className={getSeverityColor(concern.severity)}>
                      {concern.severity}
                    </Badge>
                  </div>
                  <div className="mt-3">
                    <div className="flex items-center justify-between text-sm">
                      <span className="text-gray-600">Confidence</span>
                      <span className="font-medium text-gray-900">
                        {Math.round(concern.confidence * 100)}%
                      </span>
                    </div>
                    <Progress
                      value={concern.confidence * 100}
                      className="h-1 mt-1"
                    />
                  </div>
                </Card>
              ))}
            </div>
          </Card>

          <Card className="p-6 bg-white/80 backdrop-blur-sm border-pink-200">
            <h2 className="text-2xl font-bold text-gray-900 mb-4">Recommendations</h2>
            <div className="grid grid-cols-1 md:grid-cols-2 lg:grid-cols-3 gap-4">
              {analysis.recommendations.map((recommendation, index) => (
                <Card
                  key={index}
                  className="p-4 bg-white/80 backdrop-blur-sm border-pink-200 hover:shadow-lg transition-shadow"
                >
                  <div className="flex items-start justify-between">
                    <div>
                      <h3 className="font-semibold text-gray-900">{recommendation.title}</h3>
                      <p className="text-sm text-gray-600 mt-1">{recommendation.description}</p>
                    </div>
                    <Badge className={getPriorityColor(recommendation.priority)}>
                      {recommendation.priority}
                    </Badge>
                  </div>
                  {recommendation.products && (
                    <div className="mt-3">
                      <h4 className="text-sm font-medium text-gray-900">Recommended Products</h4>
                      <ul className="mt-1 space-y-1">
                        {recommendation.products.map((product, pIndex) => (
                          <li key={pIndex} className="text-sm text-gray-600">
                            • {product}
                          </li>
                        ))}
                      </ul>
                    </div>
                  )}
                </Card>
              ))}
            </div>
          </Card>

          <Card className="p-6 bg-white/80 backdrop-blur-sm border-pink-200">
            <h2 className="text-2xl font-bold text-gray-900 mb-4">Additional Insights</h2>
            <div className="space-y-4">
              {analysis.seasonalRecommendations && (
                <div>
                  <h3 className="font-semibold text-gray-900 mb-2">Seasonal Care</h3>
                  <p className="text-gray-600">{analysis.seasonalRecommendations}</p>
                </div>
              )}
              {analysis.lifestyleImpact && (
                <div>
                  <h3 className="font-semibold text-gray-900 mb-2">Lifestyle Impact</h3>
                  <p className="text-gray-600">{analysis.lifestyleImpact}</p>
                </div>
              )}
              {analysis.additionalNotes && (
                <div>
                  <h3 className="font-semibold text-gray-900 mb-2">Additional Notes</h3>
                  <p className="text-gray-600">{analysis.additionalNotes}</p>
                </div>
              )}
            </div>
          </Card>

          <Card className="p-6 bg-white/80 backdrop-blur-sm border-pink-200">
            <div className="flex justify-between items-center mb-6">
              <h2 className="text-2xl font-bold text-gray-900">
                Your Personalized Skincare Routine
              </h2>
              <Button
                onClick={generatePDFReport}
                disabled={isGeneratingReport}
                className="bg-gradient-to-r from-pink-500 to-purple-500 hover:from-pink-600 hover:to-purple-600 text-white"
              >
                {isGeneratingReport ? (
                  <span className="flex items-center">
                    <FileText className="w-4 h-4 mr-2" />
                    Generating...
                  </span>
                ) : (
                  <span className="flex items-center">
                    <Download className="w-4 h-4 mr-2" />
                    Download Report
                  </span>
                )}
              </Button>
            </div>

            <div className="space-y-4">
              <div className="flex justify-center space-x-4 mb-6">
                <Button
                  onClick={() => setSelectedRoutine('basic')}
                  variant={selectedRoutine === 'basic' ? 'default' : 'outline'}
                  className="bg-gradient-to-r from-pink-500 to-purple-500 hover:from-pink-600 hover:to-purple-600 text-white"
                >
                  Basic Routine
                </Button>
                <Button
                  onClick={() => setSelectedRoutine('advanced')}
                  variant={selectedRoutine === 'advanced' ? 'default' : 'outline'}
                  className="bg-gradient-to-r from-pink-500 to-purple-500 hover:from-pink-600 hover:to-purple-600 text-white"
                >
                  Advanced Routine
                </Button>
                <Button
                  onClick={() => setSelectedRoutine('luxury')}
                  variant={selectedRoutine === 'luxury' ? 'default' : 'outline'}
                  className="bg-gradient-to-r from-pink-500 to-purple-500 hover:from-pink-600 hover:to-purple-600 text-white"
                >
                  Luxury Routine
                </Button>
              </div>

              <div className="space-y-4">
                {getRoutineProducts(selectedRoutine).map((step, index) => (
                  <div key={index} className="bg-white rounded-lg p-4 shadow-sm">
                    <h3 className="text-lg font-semibold text-gray-900 mb-3">
                      {index + 1}. {step.step}
                    </h3>
                    <div className="grid grid-cols-1 md:grid-cols-2 gap-4">
                      {step.products.map((product, pIndex) => (
                        <div
                          key={pIndex}
                          className="flex items-start space-x-3 p-3 bg-gray-50 rounded-lg hover:bg-gray-100 transition-colors"
                        >
                          <div className="flex-1">
                            <h4 className="font-medium text-gray-900">{product.name}</h4>
                            <p className="text-sm text-gray-600">{product.brand}</p>
                            <p className="text-sm text-gray-500 mt-1">{product.description}</p>
                            <p className="text-sm font-medium text-pink-600 mt-2">{product.price}</p>
                          </div>
                          <Button
                            variant="outline"
                            size="sm"
                            className="text-pink-500 hover:text-pink-600"
                          >
                            <Heart className="w-4 h-4" />
                          </Button>
                        </div>
                      ))}
                    </div>
                  </div>
                ))}
              </div>
            </div>
          </Card>

          <Card className="p-6 bg-white/80 backdrop-blur-sm border-pink-200">
            <div className="text-center space-y-4">
              <h2 className="text-2xl font-bold text-gray-900">
                Want More Beauty Recommendations?
              </h2>
              <p className="text-gray-600">
                Create an account to save your beauty profile and get updates on new products perfect for you.
              </p>
              <Button
                onClick={() => setShowSignUp(true)}
                className="bg-gradient-to-r from-pink-500 to-purple-500 hover:from-pink-600 hover:to-purple-600 text-white"
              >
                Create Free Account
              </Button>
            </div>
          </Card>
        </>
      )}
    </motion.div>
  );
};

export default FinalAnalysis; 