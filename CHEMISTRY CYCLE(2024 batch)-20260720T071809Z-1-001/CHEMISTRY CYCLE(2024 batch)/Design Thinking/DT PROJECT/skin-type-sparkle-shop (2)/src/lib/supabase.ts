// Product recommendation functions
export const saveUserPreferences = async (userId: string, preferences: {
  skinType: string;
  concerns: string[];
  ageGroup: string;
  lifestyle: string[];
}) => {
  const { data, error } = await supabase
    .from('user_preferences')
    .upsert([
      {
        user_id: userId,
        skin_type: preferences.skinType,
        concerns: preferences.concerns,
        age_group: preferences.ageGroup,
        lifestyle: preferences.lifestyle,
        updated_at: new Date().toISOString()
      }
    ]);
  return { data, error };
};

export const getProductRecommendations = async (userId: string) => {
  // First get user preferences
  const { data: preferences, error: prefError } = await supabase
    .from('user_preferences')
    .select('*')
    .eq('user_id', userId)
    .single();

  if (prefError) throw prefError;

  // Then get matching products
  const { data: products, error: prodError } = await supabase
    .from('products')
    .select('*')
    .contains('skin_type', [preferences.skin_type])
    .contains('concerns', preferences.concerns)
    .contains('age_group', [preferences.age_group])
    .contains('lifestyle', preferences.lifestyle);

  if (prodError) throw prodError;

  return { products, preferences };
};

export const saveAnalysisResults = async (userId: string, results: {
  skinType: string;
  concerns: string[];
  recommendations: string[];
  imageUrl: string;
}) => {
  const { data, error } = await supabase
    .from('skin_analysis')
    .insert([
      {
        user_id: userId,
        skin_type: results.skinType,
        concerns: results.concerns,
        recommendations: results.recommendations,
        image_url: results.imageUrl,
        created_at: new Date().toISOString()
      }
    ]);
  return { data, error };
};

export const getAnalysisHistory = async (userId: string) => {
  const { data, error } = await supabase
    .from('skin_analysis')
    .select('*')
    .eq('user_id', userId)
    .order('created_at', { ascending: false });
  return { data, error };
}; 