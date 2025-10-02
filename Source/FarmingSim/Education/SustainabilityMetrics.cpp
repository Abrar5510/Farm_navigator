#include "SustainabilityMetrics.h"

void USustainabilityMetrics::InitializeRealWorldData()
{
    // Real-world water footprints (liters per kg)
    CropWaterFootprints.Add("Wheat", 1800.0f);
    CropWaterFootprints.Add("Corn", 900.0f);
    CropWaterFootprints.Add("Rice", 2500.0f);
    CropWaterFootprints.Add("Tomato", 180.0f);
    CropWaterFootprints.Add("Potato", 250.0f);

    // Carbon footprints (kg CO2 per kg)
    CropCarbonFootprints.Add("Wheat", 0.5f);
    CropCarbonFootprints.Add("Corn", 0.4f);
    CropCarbonFootprints.Add("Rice", 1.2f);
    CropCarbonFootprints.Add("Tomato", 0.3f);
    CropCarbonFootprints.Add("Potato", 0.2f);

    // Soil nutrient impact
    SoilNutrientDepletion.Add("Wheat", -0.1f); // Depletes soil
    SoilNutrientDepletion.Add("Corn", -0.15f);
    SoilNutrientDepletion.Add("Legumes", 0.05f); // Improves soil

    // Educational content for sustainable practices
    PracticeImpacts.Add(ESustainabilityPractice::CropRotation, {
        FRealWorldImpact("20-50%", "Yield increase with proper crop rotation", "FAO"),
        FRealWorldImpact("40%", "Reduction in pesticide use", "USDA"),
        FRealWorldImpact("30%", "Improvement in soil organic matter", "Rodale Institute")
    });

    PracticeImpacts.Add(ESustainabilityPractice::CoverCropping, {
        FRealWorldImpact("50%", "Reduction in soil erosion", "NRCS"),
        FRealWorldImpact("15%", "Increase in soil water retention", "University Research"),
        FRealWorldImpact("+0.5%", "Annual increase in soil organic carbon", "Climate Research")
    });

    PracticeImpacts.Add(ESustainabilityPractice::NoTillFarming, {
        FRealWorldImpact("60%", "Reduction in fuel consumption", "Sustainable Agriculture Research"),
        FRealWorldImpact("3x", "Increase in earthworm populations", "Soil Health Institute"),
        FRealWorldImpact("30%", "Reduction in water runoff", "Environmental Protection Agency")
    });
}