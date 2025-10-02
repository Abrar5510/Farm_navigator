// Add to existing FarmingSim implementation:

void UFarmingSim::CompleteLearningObjective(const FString& ObjectiveName)
{
    if (EducationalManager)
    {
        EducationalManager->CompleteLearningObjective(ObjectiveName);
        
        // Grant rewards for completing educational objectives
        AddXP(100); // Educational XP bonus
        AddMoney(50); // Small monetary reward
    }
}

void UFarmingSim::ShowSustainabilityReport()
{
    if (EducationalManager)
    {
        // Calculate current sustainability score from all plots
        FSustainabilityScore OverallScore;
        // ... aggregate scores from all crop plots
        
        EducationalManager->ShowRealWorldComparison(OverallScore);
        EducationalManager->DisplayEnvironmentalImpactReport();
    }
}