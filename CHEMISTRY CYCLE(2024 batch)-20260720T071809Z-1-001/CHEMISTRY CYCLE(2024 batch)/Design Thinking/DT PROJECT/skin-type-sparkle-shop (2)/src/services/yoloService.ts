import * as cv from '@techstark/opencv-js';

export interface Detection {
  x: number;
  y: number;
  w: number;
  h: number;
  confidence: number;
  classId: number;
  className: string;
  severity: 'mild' | 'moderate' | 'severe';
}

export interface SkinAnalysis {
  skinType: string;
  concerns: Array<{
    name: string;
    severity: 'mild' | 'moderate' | 'severe';
    confidence: number;
    description: string;
  }>;
  recommendations: Array<{
    category: string;
    suggestions: string[];
    priority: 'high' | 'medium' | 'low';
  }>;
  detections: Detection[];
  overallHealth: number; // 0-100 score
}

export const YOLO_CONFIG = {
  modelPath: '/models/yolov7.onnx',
  inputSize: 640,
  confidenceThreshold: 0.3,
  nmsThreshold: 0.4,
  classes: [
    // Basic Skin Types
    'oily', 'dry', 'combination', 'normal', 'sensitive', 'mature',
    
    // Acne and Breakouts
    'acne', 'blackheads', 'whiteheads', 'pustules', 'papules', 'cysts',
    'hormonal_acne', 'fungal_acne', 'acne_scars', 'post_inflammatory_hyperpigmentation',
    
    // Aging Signs
    'wrinkles', 'fine_lines', 'crow_feet', 'forehead_lines', 'nasolabial_folds',
    'marionette_lines', 'volume_loss', 'skin_laxity', 'loss_of_elasticity',
    
    // Pigmentation
    'dark_spots', 'sun_spots', 'age_spots', 'freckles', 'melasma',
    'uneven_skin_tone', 'discoloration', 'post_inflammatory_erythema',
    
    // Eye Area
    'dark_circles', 'under_eye_bags', 'eye_puffiness', 'eye_wrinkles',
    'under_eye_darkness', 'eye_fatigue',
    
    // Inflammation and Sensitivity
    'redness', 'rosacea', 'dermatitis', 'allergic_reaction', 'hives',
    'rash', 'broken_capillaries', 'telangiectasia',
    
    // Texture Issues
    'rough_patches', 'scaly_skin', 'cracked_skin', 'bumps', 'clogged_pores',
    'congestion', 'milia', 'keratosis_pilaris',
    
    // Hydration and Barrier
    'dehydration', 'lack_of_radiance', 'sallow_skin', 'tired_looking_skin',
    'compromised_barrier', 'transepidermal_water_loss', 'sensitive_barrier',
    
    // Environmental Damage
    'uv_damage', 'blue_light_damage', 'environmental_stress', 'pollution_damage',
    'free_radical_damage', 'oxidative_stress',
    
    // Specific Conditions
    'psoriasis', 'seborrheic_dermatitis', 'perioral_dermatitis', 'eczema',
    'acne_scars', 'ice_pick_scars', 'boxcar_scars', 'rolling_scars',
    
    // Oil and Pores
    'excess_oil', 'sebum_overproduction', 'shiny_skin', 'oily_t_zone',
    'greasy_skin', 'enlarged_pores', 'clogged_pores', 'stretched_pores',
    'visible_pores', 'deep_pores'
  ]
};

class YOLOService {
  private model: any = null;
  private isModelLoading: boolean = false;
  private modelLoadPromise: Promise<void> | null = null;

  async loadModel() {
    if (this.model) return;
    if (this.isModelLoading) {
      await this.modelLoadPromise;
      return;
    }

    this.isModelLoading = true;
    this.modelLoadPromise = new Promise(async (resolve, reject) => {
      try {
        this.model = await cv.dnn.readNetFromONNX(YOLO_CONFIG.modelPath);
        console.log('YOLOv7 model loaded successfully');
        resolve();
      } catch (err) {
        console.error('Failed to load YOLOv7 model:', err);
        reject(err);
      } finally {
        this.isModelLoading = false;
      }
    });

    return this.modelLoadPromise;
  }

  async detectObjects(imageData: string): Promise<Detection[]> {
    if (!this.model) {
      await this.loadModel();
    }

    const img = new Image();
    img.src = imageData;
    await new Promise((resolve) => {
      img.onload = resolve;
    });

    const canvas = document.createElement('canvas');
    const ctx = canvas.getContext('2d');
    if (!ctx) throw new Error('Failed to get canvas context');

    canvas.width = YOLO_CONFIG.inputSize;
    canvas.height = YOLO_CONFIG.inputSize;
    ctx.drawImage(img, 0, 0, canvas.width, canvas.height);

    const src = cv.imread(canvas);
    const blob = cv.blobFromImage(src, 1/255.0, new cv.Size(YOLO_CONFIG.inputSize, YOLO_CONFIG.inputSize));

    this.model.setInput(blob);
    const output = this.model.forward();

    const detections = this.processOutput(output, img.width, img.height);
    const filteredDetections = this.applyNMS(detections);

    src.delete();
    blob.delete();
    output.delete();

    return filteredDetections;
  }

  private processOutput(output: any, originalWidth: number, originalHeight: number): Detection[] {
    const detections: Detection[] = [];
    const outputData = output.data;
    
    for (let i = 0; i < outputData.length; i += 6) {
      const confidence = outputData[i + 4];
      if (confidence > YOLO_CONFIG.confidenceThreshold) {
        const x = outputData[i] * originalWidth;
        const y = outputData[i + 1] * originalHeight;
        const w = outputData[i + 2] * originalWidth;
        const h = outputData[i + 3] * originalHeight;
        const classId = Math.round(outputData[i + 5]);

        // Determine severity based on confidence and area
        const severity = this.determineSeverity(confidence, w * h, originalWidth * originalHeight);

        detections.push({
          x, y, w, h,
          confidence,
          classId,
          className: YOLO_CONFIG.classes[classId],
          severity
        });
      }
    }

    return detections;
  }

  private determineSeverity(confidence: number, area: number, totalArea: number): 'mild' | 'moderate' | 'severe' {
    const areaRatio = area / totalArea;
    const severityScore = (confidence * 0.7) + (areaRatio * 0.3);

    if (severityScore > 0.7) return 'severe';
    if (severityScore > 0.4) return 'moderate';
    return 'mild';
  }

  private applyNMS(detections: Detection[]): Detection[] {
    detections.sort((a, b) => b.confidence - a.confidence);

    const filteredDetections: Detection[] = [];
    const used = new Set<number>();

    for (let i = 0; i < detections.length; i++) {
      if (used.has(i)) continue;

      const detection = detections[i];
      filteredDetections.push(detection);
      used.add(i);

      for (let j = i + 1; j < detections.length; j++) {
        if (used.has(j)) continue;

        const other = detections[j];
        const iou = this.calculateIOU(detection, other);

        if (iou > YOLO_CONFIG.nmsThreshold) {
          used.add(j);
        }
      }
    }

    return filteredDetections;
  }

  private calculateIOU(box1: Detection, box2: Detection): number {
    const x1 = Math.max(box1.x, box2.x);
    const y1 = Math.max(box1.y, box2.y);
    const x2 = Math.min(box1.x + box1.w, box2.x + box2.w);
    const y2 = Math.min(box1.y + box1.h, box2.y + box2.h);

    const intersection = Math.max(0, x2 - x1) * Math.max(0, y2 - y1);
    const area1 = box1.w * box1.h;
    const area2 = box2.w * box2.h;
    const union = area1 + area2 - intersection;

    return intersection / union;
  }

  analyzeSkin(detections: Detection[]): SkinAnalysis {
    const conditionCounts = new Map<string, { count: number; severity: 'mild' | 'moderate' | 'severe'; confidence: number }>();
    
    detections.forEach(detection => {
      const existing = conditionCounts.get(detection.className);
      if (existing) {
        conditionCounts.set(detection.className, {
          count: existing.count + 1,
          severity: this.getWorseSeverity(existing.severity, detection.severity),
          confidence: Math.max(existing.confidence, detection.confidence)
        });
      } else {
        conditionCounts.set(detection.className, {
          count: 1,
          severity: detection.severity,
          confidence: detection.confidence
        });
      }
    });

    // Determine skin type
    const skinType = this.determineSkinType(conditionCounts);

    // Process concerns
    const concerns = Array.from(conditionCounts.entries())
      .filter(([_, data]) => data.count > 0)
      .map(([condition, data]) => ({
        name: condition,
        severity: data.severity,
        confidence: data.confidence,
        description: this.getConcernDescription(condition)
      }));

    // Generate recommendations
    const recommendations = this.generateRecommendations(concerns, skinType);

    // Calculate overall skin health score
    const overallHealth = this.calculateOverallHealth(concerns);

    return {
      skinType,
      concerns,
      recommendations,
      detections,
      overallHealth
    };
  }

  private determineSkinType(conditionCounts: Map<string, { count: number; severity: string; confidence: number }>): string {
    const oilyScore = conditionCounts.get('oily')?.count || 0;
    const dryScore = conditionCounts.get('dry')?.count || 0;
    const sensitiveScore = conditionCounts.get('sensitive')?.count || 0;

    if (oilyScore > 0 && dryScore > 0) return 'Combination';
    if (oilyScore > 0) return 'Oily';
    if (dryScore > 0) return 'Dry';
    if (sensitiveScore > 0) return 'Sensitive';
    return 'Normal';
  }

  private getWorseSeverity(a: 'mild' | 'moderate' | 'severe', b: 'mild' | 'moderate' | 'severe'): 'mild' | 'moderate' | 'severe' {
    if (a === 'severe' || b === 'severe') return 'severe';
    if (a === 'moderate' || b === 'moderate') return 'moderate';
    return 'mild';
  }

  private getConcernDescription(concern: string): string {
    const descriptions: Record<string, string> = {
      // Basic Skin Types
      oily: "Skin that produces excess sebum, leading to shine and potential breakouts. Common in T-zone area.",
      dry: "Skin lacking moisture, often feeling tight or flaky. May show fine lines and rough texture.",
      combination: "Skin showing both oily and dry characteristics, typically with an oily T-zone and dry cheeks.",
      normal: "Well-balanced skin with no significant concerns. Good moisture levels and even texture.",
      sensitive: "Skin that reacts easily to products or environmental factors. May show redness or irritation.",
      mature: "Skin showing signs of aging, including reduced elasticity and increased fine lines.",
      
      // Acne and Breakouts
      acne: "Inflammatory skin condition characterized by pimples, blackheads, and whiteheads.",
      blackheads: "Open comedones caused by clogged pores with oxidized sebum.",
      whiteheads: "Closed comedones caused by trapped sebum and dead skin cells.",
      pustules: "Inflamed pimples filled with pus, often painful and red.",
      papules: "Small, raised bumps without pus, often precursors to pustules.",
      cysts: "Deep, painful, pus-filled lesions that can lead to scarring.",
      hormonal_acne: "Acne triggered by hormonal fluctuations, often around jawline and chin.",
      fungal_acne: "Acne-like condition caused by yeast overgrowth, often itchy and uniform in size.",
      acne_scars: "Permanent marks left after severe acne, including ice pick, boxcar, and rolling scars.",
      post_inflammatory_hyperpigmentation: "Dark spots left after acne or inflammation heals.",
      
      // Aging Signs
      wrinkles: "Lines and creases in the skin caused by aging and repeated facial expressions.",
      fine_lines: "Small, shallow wrinkles often first visible around eyes and mouth.",
      crow_feet: "Wrinkles radiating from the outer corners of the eyes.",
      forehead_lines: "Horizontal lines across the forehead from raising eyebrows.",
      nasolabial_folds: "Lines running from nose to mouth corners, deepening with age.",
      marionette_lines: "Lines running from mouth corners to chin, creating a sad expression.",
      volume_loss: "Loss of facial fat and collagen, creating hollows and sagging.",
      skin_laxity: "Loss of skin elasticity and firmness, leading to sagging.",
      loss_of_elasticity: "Reduced skin's ability to bounce back, a key sign of aging.",
      
      // Pigmentation
      dark_spots: "Areas of increased melanin production, often from sun exposure.",
      sun_spots: "Brown spots caused by UV damage, typically on sun-exposed areas.",
      age_spots: "Dark spots that develop with age, often on hands and face.",
      freckles: "Small, concentrated areas of melanin, often genetic or sun-induced.",
      melasma: "Patchy brown discoloration, often triggered by hormones or sun.",
      uneven_skin_tone: "Irregular distribution of melanin, creating patchy appearance.",
      discoloration: "Any variation from normal skin color, including redness or dark spots.",
      post_inflammatory_erythema: "Red marks left after acne or inflammation heals.",
      
      // Eye Area
      dark_circles: "Dark discoloration under eyes, often from genetics or lack of sleep.",
      under_eye_bags: "Swelling or puffiness under eyes, often from fluid retention.",
      eye_puffiness: "Swollen appearance around eyes, often from allergies or fatigue.",
      eye_wrinkles: "Fine lines around eyes, often from squinting or smiling.",
      under_eye_darkness: "Dark shadows under eyes, often from thin skin or poor circulation.",
      eye_fatigue: "Tired appearance around eyes, often from lack of sleep or stress.",
      
      // Inflammation and Sensitivity
      redness: "Increased blood flow to skin, often from irritation or inflammation.",
      rosacea: "Chronic condition causing facial redness and visible blood vessels.",
      dermatitis: "Inflammation of skin, often causing redness and itching.",
      allergic_reaction: "Skin response to allergens, causing redness and swelling.",
      hives: "Raised, itchy welts often from allergic reaction.",
      rash: "Area of irritated or swollen skin, often itchy or painful.",
      broken_capillaries: "Visible small blood vessels near skin surface.",
      telangiectasia: "Dilated blood vessels creating visible red lines or patterns.",
      
      // Texture Issues
      rough_patches: "Areas of uneven, coarse skin texture.",
      scaly_skin: "Skin with visible flaking or scaling.",
      cracked_skin: "Skin with visible fissures or breaks.",
      bumps: "Small raised areas on skin surface.",
      clogged_pores: "Pores blocked with oil and dead skin cells.",
      congestion: "Build-up of oil and dead skin in pores.",
      milia: "Small, white bumps of trapped keratin.",
      keratosis_pilaris: "Rough, bumpy skin often on arms or thighs.",
      
      // Hydration and Barrier
      dehydration: "Lack of water in skin, causing tightness and fine lines.",
      lack_of_radiance: "Dull, tired-looking skin without natural glow.",
      sallow_skin: "Yellowish or pale skin tone, often from poor health.",
      tired_looking_skin: "Dull, lackluster appearance often from fatigue.",
      compromised_barrier: "Damaged skin barrier allowing moisture loss and irritation.",
      transepidermal_water_loss: "Excessive water loss through skin barrier.",
      sensitive_barrier: "Easily irritated skin barrier requiring gentle care.",
      
      // Environmental Damage
      uv_damage: "Damage from sun exposure, including premature aging.",
      blue_light_damage: "Damage from digital device screens.",
      environmental_stress: "Damage from pollution and environmental factors.",
      pollution_damage: "Damage from air pollution and particulate matter.",
      free_radical_damage: "Damage from unstable molecules attacking skin cells.",
      oxidative_stress: "Imbalance between free radicals and antioxidants.",
      
      // Specific Conditions
      psoriasis: "Chronic condition causing thick, scaly patches.",
      seborrheic_dermatitis: "Condition causing red, scaly patches, often on scalp.",
      perioral_dermatitis: "Rash around mouth, often from topical steroids.",
      eczema: "Condition causing dry, itchy, inflamed skin.",
      
      // Scars
      acne_scars: "Marks left after severe acne heals.",
      ice_pick_scars: "Deep, narrow scars from severe acne.",
      boxcar_scars: "Wide, box-like scars from acne.",
      rolling_scars: "Wavy, uneven scars from acne.",
      
      // Oil and Pores
      excess_oil: "Overproduction of sebum, causing shine.",
      sebum_overproduction: "Excessive oil production by sebaceous glands.",
      shiny_skin: "Excess oil creating visible shine.",
      oily_t_zone: "Excess oil in forehead, nose, and chin area.",
      greasy_skin: "Excessive oil making skin feel slick.",
      enlarged_pores: "Pores that appear larger than normal.",
      clogged_pores: "Pores blocked with oil and dead skin.",
      stretched_pores: "Pores that have lost elasticity.",
      visible_pores: "Pores that are more noticeable than normal.",
      deep_pores: "Pores that extend deeper into skin."
    };

    return descriptions[concern] || "No specific description available.";
  }

  private generateRecommendations(concerns: SkinAnalysis['concerns'], skinType: string): SkinAnalysis['recommendations'] {
    const recommendations: SkinAnalysis['recommendations'] = [];

    // Add skin type specific recommendations
    recommendations.push({
      category: 'Daily Routine',
      priority: 'high',
      suggestions: this.getSkinTypeRecommendations(skinType)
    });

    // Add concern-specific recommendations
    concerns.forEach(concern => {
      if (concern.severity !== 'mild') {
        recommendations.push({
          category: `${concern.name.replace('_', ' ').toUpperCase()} Treatment`,
          priority: concern.severity === 'severe' ? 'high' : 'medium',
          suggestions: this.getConcernRecommendations(concern.name)
        });
      }
    });

    // Add general recommendations
    recommendations.push({
      category: 'General Care',
      priority: 'medium',
      suggestions: [
        'Use sunscreen daily',
        'Stay hydrated',
        'Get adequate sleep',
        'Maintain a healthy diet',
        'Exercise regularly'
      ]
    });

    return recommendations;
  }

  private getSkinTypeRecommendations(skinType: string): string[] {
    const recommendations: Record<string, string[]> = {
      Oily: [
        'Use oil-free cleanser',
        'Apply mattifying moisturizer',
        'Use clay masks weekly',
        'Choose non-comedogenic products',
        'Consider salicylic acid products',
        'Use oil-absorbing sheets as needed',
        'Apply lightweight, gel-based products',
        'Use a gentle exfoliant 2-3 times weekly'
      ],
      Dry: [
        'Use gentle, hydrating cleanser',
        'Apply rich moisturizer',
        'Use hyaluronic acid serum',
        'Avoid hot water when cleansing',
        'Consider facial oils',
        'Use occlusive products at night',
        'Apply moisturizer on damp skin',
        'Use a humidifier in dry environments'
      ],
      Combination: [
        'Use balanced cleanser',
        'Apply lightweight moisturizer',
        'Use different products for T-zone and cheeks',
        'Consider using a toner',
        'Use targeted treatments for different areas',
        'Apply oil-control products only in T-zone',
        'Use hydrating products on dry areas',
        'Consider multi-masking for different zones'
      ],
      Sensitive: [
        'Use fragrance-free products',
        'Patch test new products',
        'Avoid harsh exfoliants',
        'Use soothing ingredients',
        'Consider barrier repair products',
        'Use gentle, non-foaming cleansers',
        'Apply products with minimal ingredients',
        'Avoid products with potential irritants'
      ],
      Normal: [
        'Use gentle cleanser',
        'Apply daily moisturizer',
        'Use sunscreen daily',
        'Maintain consistent skincare routine',
        'Consider preventative treatments',
        'Use balanced, non-stripping products',
        'Apply antioxidants for protection',
        'Consider regular exfoliation'
      ],
      Mature: [
        'Use gentle, hydrating cleanser',
        'Apply rich, nourishing moisturizer',
        'Use retinol or peptides',
        'Apply sunscreen daily',
        'Use products with antioxidants',
        'Consider collagen-boosting ingredients',
        'Use products with hyaluronic acid',
        'Apply eye cream for delicate areas'
      ]
    };

    return recommendations[skinType] || recommendations.Normal;
  }

  private getConcernRecommendations(concern: string): string[] {
    const recommendations: Record<string, string[]> = {
      acne: [
        'Use salicylic acid treatment',
        'Avoid touching face',
        'Use non-comedogenic makeup',
        'Consider benzoyl peroxide spot treatment',
        'Use gentle exfoliation'
      ],
      wrinkles: [
        'Use retinol serum',
        'Apply sunscreen daily',
        'Use peptides in your routine',
        'Consider collagen-boosting products',
        'Use hyaluronic acid'
      ],
      dark_spots: [
        'Use vitamin C serum',
        'Apply brightening treatment',
        'Use niacinamide',
        'Consider chemical exfoliation',
        'Use sunscreen religiously'
      ],
      redness: [
        'Use calming serum',
        'Avoid harsh products',
        'Use green-tinted primer',
        'Consider aloe vera products',
        'Use cooling treatments'
      ],
      sensitivity: [
        'Use fragrance-free products',
        'Patch test new products',
        'Avoid harsh exfoliants',
        'Use soothing ingredients like centella',
        'Consider barrier repair products'
      ]
    };

    return recommendations[concern] || [
      'Consult with a dermatologist',
      'Use gentle products',
      'Monitor skin changes',
      'Maintain consistent routine',
      'Consider professional treatments'
    ];
  }

  private calculateOverallHealth(concerns: SkinAnalysis['concerns']): number {
    const severityWeights = {
      severe: 0.8,
      moderate: 0.5,
      mild: 0.2
    };

    const totalWeight = concerns.reduce((sum, concern) => {
      return sum + (severityWeights[concern.severity] * concern.confidence);
    }, 0);

    const maxPossibleWeight = concerns.length;
    const healthScore = 100 - (totalWeight / maxPossibleWeight) * 100;

    return Math.max(0, Math.min(100, healthScore));
  }
}

export const yoloService = new YOLOService(); 