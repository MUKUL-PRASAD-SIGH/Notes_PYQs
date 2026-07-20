import { SkinAnalysis } from './yoloService';

export interface User {
  id: string;
  email: string;
  name: string;
  beautyProfile?: BeautyProfile;
  createdAt: Date;
  updatedAt: Date;
}

export interface BeautyProfile {
  skinType: string;
  skinConcerns: string[];
  preferences: {
    brands: string[];
    ingredients: string[];
    priceRange: 'budget' | 'mid' | 'luxury';
  };
  analysisHistory: SkinAnalysis[];
  savedProducts: SavedProduct[];
  createdAt: Date;
  updatedAt: Date;
}

export interface SavedProduct {
  id: string;
  name: string;
  brand: string;
  category: string;
  description: string;
  ingredients: string[];
  price: number;
  rating: number;
  savedAt: Date;
}

class AuthService {
  private currentUser: User | null = null;
  private readonly API_URL = process.env.NEXT_PUBLIC_API_URL || 'http://localhost:3000/api';

  async signUp(email: string, password: string, name: string): Promise<User> {
    try {
      const response = await fetch(`${this.API_URL}/auth/signup`, {
        method: 'POST',
        headers: {
          'Content-Type': 'application/json',
        },
        body: JSON.stringify({ email, password, name }),
      });

      if (!response.ok) {
        throw new Error('Sign up failed');
      }

      const user = await response.json();
      this.currentUser = user;
      return user;
    } catch (error) {
      console.error('Sign up error:', error);
      throw error;
    }
  }

  async signIn(email: string, password: string): Promise<User> {
    try {
      const response = await fetch(`${this.API_URL}/auth/signin`, {
        method: 'POST',
        headers: {
          'Content-Type': 'application/json',
        },
        body: JSON.stringify({ email, password }),
      });

      if (!response.ok) {
        throw new Error('Sign in failed');
      }

      const user = await response.json();
      this.currentUser = user;
      return user;
    } catch (error) {
      console.error('Sign in error:', error);
      throw error;
    }
  }

  async signOut(): Promise<void> {
    try {
      await fetch(`${this.API_URL}/auth/signout`, {
        method: 'POST',
      });
      this.currentUser = null;
    } catch (error) {
      console.error('Sign out error:', error);
      throw error;
    }
  }

  async getCurrentUser(): Promise<User | null> {
    if (this.currentUser) {
      return this.currentUser;
    }

    try {
      const response = await fetch(`${this.API_URL}/auth/me`);
      if (!response.ok) {
        return null;
      }

      const user = await response.json();
      this.currentUser = user;
      return user;
    } catch (error) {
      console.error('Get current user error:', error);
      return null;
    }
  }

  async updateBeautyProfile(profile: Partial<BeautyProfile>): Promise<BeautyProfile> {
    if (!this.currentUser) {
      throw new Error('User not authenticated');
    }

    try {
      const response = await fetch(`${this.API_URL}/users/${this.currentUser.id}/beauty-profile`, {
        method: 'PATCH',
        headers: {
          'Content-Type': 'application/json',
        },
        body: JSON.stringify(profile),
      });

      if (!response.ok) {
        throw new Error('Failed to update beauty profile');
      }

      const updatedProfile = await response.json();
      if (this.currentUser) {
        this.currentUser.beautyProfile = updatedProfile;
      }
      return updatedProfile;
    } catch (error) {
      console.error('Update beauty profile error:', error);
      throw error;
    }
  }

  async saveAnalysis(analysis: SkinAnalysis): Promise<void> {
    if (!this.currentUser) {
      throw new Error('User not authenticated');
    }

    try {
      const response = await fetch(`${this.API_URL}/users/${this.currentUser.id}/analysis`, {
        method: 'POST',
        headers: {
          'Content-Type': 'application/json',
        },
        body: JSON.stringify(analysis),
      });

      if (!response.ok) {
        throw new Error('Failed to save analysis');
      }
    } catch (error) {
      console.error('Save analysis error:', error);
      throw error;
    }
  }

  async saveProduct(product: Omit<SavedProduct, 'id' | 'savedAt'>): Promise<SavedProduct> {
    if (!this.currentUser) {
      throw new Error('User not authenticated');
    }

    try {
      const response = await fetch(`${this.API_URL}/users/${this.currentUser.id}/saved-products`, {
        method: 'POST',
        headers: {
          'Content-Type': 'application/json',
        },
        body: JSON.stringify(product),
      });

      if (!response.ok) {
        throw new Error('Failed to save product');
      }

      return await response.json();
    } catch (error) {
      console.error('Save product error:', error);
      throw error;
    }
  }

  async getSavedProducts(): Promise<SavedProduct[]> {
    if (!this.currentUser) {
      throw new Error('User not authenticated');
    }

    try {
      const response = await fetch(`${this.API_URL}/users/${this.currentUser.id}/saved-products`);
      if (!response.ok) {
        throw new Error('Failed to get saved products');
      }

      return await response.json();
    } catch (error) {
      console.error('Get saved products error:', error);
      throw error;
    }
  }

  async getAnalysisHistory(): Promise<SkinAnalysis[]> {
    if (!this.currentUser) {
      throw new Error('User not authenticated');
    }

    try {
      const response = await fetch(`${this.API_URL}/users/${this.currentUser.id}/analysis-history`);
      if (!response.ok) {
        throw new Error('Failed to get analysis history');
      }

      return await response.json();
    } catch (error) {
      console.error('Get analysis history error:', error);
      throw error;
    }
  }
}

export const authService = new AuthService(); 