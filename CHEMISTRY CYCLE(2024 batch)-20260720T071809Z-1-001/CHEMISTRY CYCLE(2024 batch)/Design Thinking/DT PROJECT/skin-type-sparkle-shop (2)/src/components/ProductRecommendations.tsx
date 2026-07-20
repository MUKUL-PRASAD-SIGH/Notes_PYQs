import React, { useEffect, useState } from 'react';
import { Card, CardContent, CardHeader, CardTitle } from '@/components/ui/card';
import { Button } from '@/components/ui/button';
import { useAuth } from '../contexts/AuthContext';
import { getProductRecommendations, saveUserPreferences } from '../lib/supabase';
import { motion, AnimatePresence } from 'framer-motion';

interface Product {
  id: string;
  name: string;
  description: string;
  price: number;
  imageUrl: string;
  category: string;
  skinType: string[];
  concerns: string[];
  ageGroup: string[];
  lifestyle: string[];
}

interface ProductRecommendationsProps {
  analysisResults: {
    skinType: string;
    concerns: string[];
    recommendations: string[];
  };
}

export const ProductRecommendations: React.FC<ProductRecommendationsProps> = ({ analysisResults }) => {
  const { user } = useAuth();
  const [products, setProducts] = useState<Product[]>([]);
  const [loading, setLoading] = useState(true);
  const [error, setError] = useState<string | null>(null);

  useEffect(() => {
    const loadRecommendations = async () => {
      if (!user) return;

      try {
        // Save user preferences based on analysis
        await saveUserPreferences(user.id, {
          skinType: analysisResults.skinType,
          concerns: analysisResults.concerns,
          ageGroup: '20s', // You might want to get this from user profile
          lifestyle: ['normal'] // You might want to get this from user profile
        });

        // Get product recommendations
        const { products: recommendedProducts } = await getProductRecommendations(user.id);
        setProducts(recommendedProducts);
      } catch (err: any) {
        setError(err.message);
      } finally {
        setLoading(false);
      }
    };

    loadRecommendations();
  }, [user, analysisResults]);

  if (loading) {
    return (
      <Card className="w-full">
        <CardContent className="p-6">
          <div className="flex items-center justify-center">
            <div className="animate-spin rounded-full h-8 w-8 border-b-2 border-pink-500"></div>
          </div>
        </CardContent>
      </Card>
    );
  }

  if (error) {
    return (
      <Card className="w-full">
        <CardContent className="p-6">
          <div className="text-red-500 text-center">{error}</div>
        </CardContent>
      </Card>
    );
  }

  return (
    <Card className="w-full">
      <CardHeader>
        <CardTitle>Recommended Products</CardTitle>
      </CardHeader>
      <CardContent>
        <div className="grid grid-cols-1 md:grid-cols-2 lg:grid-cols-3 gap-4">
          <AnimatePresence>
            {products.map((product) => (
              <motion.div
                key={product.id}
                initial={{ opacity: 0, y: 20 }}
                animate={{ opacity: 1, y: 0 }}
                exit={{ opacity: 0, y: -20 }}
                transition={{ duration: 0.3 }}
              >
                <Card className="h-full">
                  <CardContent className="p-4">
                    <div className="aspect-square relative mb-4">
                      <img
                        src={product.imageUrl}
                        alt={product.name}
                        className="object-cover w-full h-full rounded-lg"
                      />
                    </div>
                    <h3 className="font-semibold text-lg mb-2">{product.name}</h3>
                    <p className="text-sm text-gray-600 mb-4">{product.description}</p>
                    <div className="flex justify-between items-center">
                      <span className="font-semibold">${product.price.toFixed(2)}</span>
                      <Button
                        className="bg-gradient-to-r from-pink-500 to-rose-500 hover:from-pink-600 hover:to-rose-600"
                        onClick={() => {
                          // Add to cart functionality
                          console.log('Add to cart:', product.id);
                        }}
                      >
                        Add to Cart
                      </Button>
                    </div>
                  </CardContent>
                </Card>
              </motion.div>
            ))}
          </AnimatePresence>
        </div>
      </CardContent>
    </Card>
  );
}; 