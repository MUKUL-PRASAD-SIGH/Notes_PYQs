import { useState } from 'react';
import { motion } from 'framer-motion';
import { Card } from '@/components/ui/card';
import { Button } from '@/components/ui/button';
import { Input } from '@/components/ui/input';
import { Label } from '@/components/ui/label';
import { Alert, AlertDescription } from '@/components/ui/alert';
import { authService, BeautyProfile } from '@/services/authService';
import { Heart, Star, Wand2, Flower2, Butterfly, Rainbow, Crown, Sparkle, AlertCircle } from 'lucide-react';

interface SignUpFormProps {
  onSuccess: () => void;
  onCancel: () => void;
}

const SignUpForm = ({ onSuccess, onCancel }: SignUpFormProps) => {
  const [step, setStep] = useState<'account' | 'profile'>('account');
  const [loading, setLoading] = useState(false);
  const [error, setError] = useState<string | null>(null);

  // Account form state
  const [email, setEmail] = useState('');
  const [password, setPassword] = useState('');
  const [name, setName] = useState('');

  // Profile form state
  const [skinType, setSkinType] = useState('');
  const [skinConcerns, setSkinConcerns] = useState<string[]>([]);
  const [preferredBrands, setPreferredBrands] = useState<string[]>([]);
  const [preferredIngredients, setPreferredIngredients] = useState<string[]>([]);
  const [priceRange, setPriceRange] = useState<'budget' | 'mid' | 'luxury'>('mid');

  const handleAccountSubmit = async (e: React.FormEvent) => {
    e.preventDefault();
    setLoading(true);
    setError(null);

    try {
      await authService.signUp(email, password, name);
      setStep('profile');
    } catch (err) {
      setError('Failed to create account. Please try again.');
    } finally {
      setLoading(false);
    }
  };

  const handleProfileSubmit = async (e: React.FormEvent) => {
    e.preventDefault();
    setLoading(true);
    setError(null);

    try {
      const profile: Partial<BeautyProfile> = {
        skinType,
        skinConcerns,
        preferences: {
          brands: preferredBrands,
          ingredients: preferredIngredients,
          priceRange,
        },
        analysisHistory: [],
        savedProducts: [],
      };

      await authService.updateBeautyProfile(profile);
      onSuccess();
    } catch (err) {
      setError('Failed to save beauty profile. Please try again.');
    } finally {
      setLoading(false);
    }
  };

  return (
    <motion.div
      initial={{ opacity: 0, y: 20 }}
      animate={{ opacity: 1, y: 0 }}
      exit={{ opacity: 0, y: -20 }}
      className="max-w-md mx-auto"
    >
      <Card className="p-6 bg-white/80 backdrop-blur-sm border-pink-200">
        <div className="text-center mb-6">
          <h2 className="text-2xl font-bold text-gray-900">
            {step === 'account' ? 'Create Your Account' : 'Complete Your Beauty Profile'}
          </h2>
          <p className="text-gray-600 mt-2">
            {step === 'account'
              ? 'Join our community of beauty enthusiasts'
              : 'Help us personalize your experience'}
          </p>
        </div>

        {error && (
          <Alert variant="destructive" className="mb-4">
            <AlertCircle className="w-4 h-4" />
            <AlertDescription>{error}</AlertDescription>
          </Alert>
        )}

        {step === 'account' ? (
          <form onSubmit={handleAccountSubmit} className="space-y-4">
            <div>
              <Label htmlFor="name">Name</Label>
              <Input
                id="name"
                type="text"
                value={name}
                onChange={(e) => setName(e.target.value)}
                required
                className="mt-1"
              />
            </div>
            <div>
              <Label htmlFor="email">Email</Label>
              <Input
                id="email"
                type="email"
                value={email}
                onChange={(e) => setEmail(e.target.value)}
                required
                className="mt-1"
              />
            </div>
            <div>
              <Label htmlFor="password">Password</Label>
              <Input
                id="password"
                type="password"
                value={password}
                onChange={(e) => setPassword(e.target.value)}
                required
                className="mt-1"
              />
            </div>
            <div className="flex space-x-4">
              <Button
                type="button"
                variant="outline"
                onClick={onCancel}
                className="flex-1"
              >
                Cancel
              </Button>
              <Button
                type="submit"
                className="flex-1 bg-gradient-to-r from-pink-500 to-purple-500 hover:from-pink-600 hover:to-purple-600 text-white"
                disabled={loading}
              >
                {loading ? 'Creating Account...' : 'Next'}
              </Button>
            </div>
          </form>
        ) : (
          <form onSubmit={handleProfileSubmit} className="space-y-4">
            <div>
              <Label htmlFor="skinType">Skin Type</Label>
              <select
                id="skinType"
                value={skinType}
                onChange={(e) => setSkinType(e.target.value)}
                required
                className="w-full mt-1 rounded-md border-gray-300 shadow-sm focus:border-pink-500 focus:ring-pink-500"
              >
                <option value="">Select your skin type</option>
                <option value="Oily">Oily</option>
                <option value="Dry">Dry</option>
                <option value="Combination">Combination</option>
                <option value="Normal">Normal</option>
                <option value="Sensitive">Sensitive</option>
                <option value="Mature">Mature</option>
              </select>
            </div>

            <div>
              <Label>Skin Concerns</Label>
              <div className="grid grid-cols-2 gap-2 mt-1">
                {[
                  'Acne',
                  'Aging',
                  'Dryness',
                  'Oiliness',
                  'Sensitivity',
                  'Pigmentation',
                  'Redness',
                  'Texture',
                ].map((concern) => (
                  <label
                    key={concern}
                    className="flex items-center space-x-2 p-2 rounded-md border border-gray-200 hover:bg-gray-50"
                  >
                    <input
                      type="checkbox"
                      checked={skinConcerns.includes(concern)}
                      onChange={(e) => {
                        if (e.target.checked) {
                          setSkinConcerns([...skinConcerns, concern]);
                        } else {
                          setSkinConcerns(skinConcerns.filter((c) => c !== concern));
                        }
                      }}
                      className="rounded text-pink-500 focus:ring-pink-500"
                    />
                    <span className="text-sm">{concern}</span>
                  </label>
                ))}
              </div>
            </div>

            <div>
              <Label>Preferred Brands</Label>
              <div className="grid grid-cols-2 gap-2 mt-1">
                {[
                  'La Roche-Posay',
                  'CeraVe',
                  'The Ordinary',
                  'Neutrogena',
                  'Olay',
                  'Clinique',
                  'Estée Lauder',
                  'Lancôme',
                ].map((brand) => (
                  <label
                    key={brand}
                    className="flex items-center space-x-2 p-2 rounded-md border border-gray-200 hover:bg-gray-50"
                  >
                    <input
                      type="checkbox"
                      checked={preferredBrands.includes(brand)}
                      onChange={(e) => {
                        if (e.target.checked) {
                          setPreferredBrands([...preferredBrands, brand]);
                        } else {
                          setPreferredBrands(preferredBrands.filter((b) => b !== brand));
                        }
                      }}
                      className="rounded text-pink-500 focus:ring-pink-500"
                    />
                    <span className="text-sm">{brand}</span>
                  </label>
                ))}
              </div>
            </div>

            <div>
              <Label>Preferred Ingredients</Label>
              <div className="grid grid-cols-2 gap-2 mt-1">
                {[
                  'Hyaluronic Acid',
                  'Vitamin C',
                  'Retinol',
                  'Niacinamide',
                  'Salicylic Acid',
                  'Glycolic Acid',
                  'Peptides',
                  'Ceramides',
                ].map((ingredient) => (
                  <label
                    key={ingredient}
                    className="flex items-center space-x-2 p-2 rounded-md border border-gray-200 hover:bg-gray-50"
                  >
                    <input
                      type="checkbox"
                      checked={preferredIngredients.includes(ingredient)}
                      onChange={(e) => {
                        if (e.target.checked) {
                          setPreferredIngredients([...preferredIngredients, ingredient]);
                        } else {
                          setPreferredIngredients(
                            preferredIngredients.filter((i) => i !== ingredient)
                          );
                        }
                      }}
                      className="rounded text-pink-500 focus:ring-pink-500"
                    />
                    <span className="text-sm">{ingredient}</span>
                  </label>
                ))}
              </div>
            </div>

            <div>
              <Label>Price Range</Label>
              <div className="grid grid-cols-3 gap-2 mt-1">
                {[
                  { value: 'budget', label: 'Budget' },
                  { value: 'mid', label: 'Mid-Range' },
                  { value: 'luxury', label: 'Luxury' },
                ].map((range) => (
                  <label
                    key={range.value}
                    className={`flex items-center justify-center p-2 rounded-md border ${
                      priceRange === range.value
                        ? 'border-pink-500 bg-pink-50'
                        : 'border-gray-200 hover:bg-gray-50'
                    }`}
                  >
                    <input
                      type="radio"
                      name="priceRange"
                      value={range.value}
                      checked={priceRange === range.value}
                      onChange={(e) => setPriceRange(e.target.value as 'budget' | 'mid' | 'luxury')}
                      className="sr-only"
                    />
                    <span className="text-sm">{range.label}</span>
                  </label>
                ))}
              </div>
            </div>

            <div className="flex space-x-4">
              <Button
                type="button"
                variant="outline"
                onClick={() => setStep('account')}
                className="flex-1"
              >
                Back
              </Button>
              <Button
                type="submit"
                className="flex-1 bg-gradient-to-r from-pink-500 to-purple-500 hover:from-pink-600 hover:to-purple-600 text-white"
                disabled={loading}
              >
                {loading ? 'Creating Profile...' : 'Complete Profile'}
              </Button>
            </div>
          </form>
        )}
      </Card>
    </motion.div>
  );
};

export default SignUpForm; 