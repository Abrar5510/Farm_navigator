#include "FloodDisaster.h"
#include "CropPlot.h"
#include "SoilHealthComponent.h"
#include "Engine/StaticMeshActor.h"
#include "Components/DecalComponent.h"
#include "Particles/ParticleSystemComponent.h"

AFloodDisaster::AFloodDisaster()
{
    DisasterName = FText::FromString("Major Flood");
    DisasterDescription = FText::FromString("Heavy flooding has submerged your fields! Crops are at risk of water damage and soil erosion.");
    
    CropDamageRate = 10.0f; // 10% damage per hour
    GrowthSlowdownMultiplier = 0.3f; // 70% growth reduction
    SoilNutrientLossRate = 5.0f; // 5% nutrient loss per hour

    // Educational content
    FloodPreventionTips = FText::FromString(
        "Flood Prevention Tips:\n"
        "• Implement contour plowing to reduce runoff\n"
        "• Maintain buffer strips along waterways\n"
        "• Use cover crops to improve soil water absorption\n"
        "• Create water retention basins"
    );

    RealWorldFloodImpact = FText::FromString(
        "Real World Impact:\n"
        "• Floods cause $8 billion in crop damage annually in the US\n"
        "• Soil erosion from floods can remove 2-5 cm of topsoil\n"
        "• Flood-affected fields may take years to recover productivity\n"
        "• Sustainable practices can reduce flood damage by up to 40%"
    );
}

void AFloodDisaster::OnDisasterStart_Implementation()
{
    Super::OnDisasterStart_Implementation();

    // Visual and audio effects for flood
    CreateFloodVisualEffects();
    
    // Find all crop plots in the world
    UWorld* World = GetWorld();
    if (World)
    {
        for (TActorIterator<ACropPlot> It(World); It; ++It)
        {
            AffectedCrops.Add(*It);
        }
    }

    // Play flood sounds (rain, water flow)
    // Spawn water particle systems
    
    UE_LOG(LogTemp, Warning, TEXT("Flood disaster started! Educational tip: %s"), *FloodPreventionTips.ToString());
}

void AFloodDisaster::OnDisasterEnd_Implementation()
{
    Super::OnDisasterEnd_Implementation();

    RemoveFloodVisualEffects();
    AffectedCrops.Empty();

    // Educational feedback
    UE_LOG(LogTemp, Warning, TEXT("Flood disaster ended. %s"), *RealWorldFloodImpact.ToString());
}

void AFloodDisaster::ApplyDisasterEffects_Implementation()
{
    ApplyDamageToCrops();
    SimulateSoilErosion();
}

FString AFloodDisaster::GetFloodEducationalContent() const
{
    FString Content;
    Content += "FLOOD IMPACTS ON AGRICULTURE\n\n";
    Content += "Immediate Effects:\n";
    Content += "• Crop submersion and oxygen deprivation\n";
    Content += "• Soil nutrient leaching and erosion\n";
    Content += "• Equipment and infrastructure damage\n\n";
    
    Content += "Long-term Consequences:\n";
    Content += "• Reduced soil fertility and structure\n";
    Content += "• Increased pest and disease pressure\n";
    Content += "• Contamination from floodwaters\n\n";
    
    Content += "Climate Resilience Strategies:\n";
    Content += "• Implement drainage systems\n";
    Content += "• Use flood-tolerant crop varieties\n";
    Content += "• Maintain soil organic matter for better water management\n";
    
    return Content;
}

void AFloodDisaster::CreateFloodVisualEffects()
{
    UWorld* World = GetWorld();
    if (!World) return;

    // Spawn water decals on the ground
    UMaterialInterface* WaterMaterial = LoadObject<UMaterialInterface>(nullptr, TEXT("/Game/Materials/WaterDecal"));
    if (WaterMaterial)
    {
        for (AActor* Crop : AffectedCrops)
        {
            FVector Location = Crop->GetActorLocation();
            Location.Z += 5.0f; // Slightly above ground

            UDecalComponent* WaterDecal = NewObject<UDecalComponent>(this);
            if (WaterDecal)
            {
                WaterDecal->SetDecalMaterial(WaterMaterial);
                WaterDecal->DecalSize = FVector(200.0f, 200.0f, 50.0f);
                WaterDecal->SetWorldLocation(Location);
                WaterDecal->RegisterComponent();
            }
        }
    }

    // Spawn rain particle system
    UParticleSystem* RainParticles = LoadObject<UParticleSystem>(nullptr, TEXT("/Game/Particles/Rain"));
    if (RainParticles)
    {
        UParticleSystemComponent* RainComponent = UGameplayStatics::SpawnEmitterAtLocation(
            World, RainParticles, GetActorLocation(), FRotator::ZeroRotator, true);
    }
}

void AFloodDisaster::RemoveFloodVisualEffects()
{
    // Clean up all visual effects
    TArray<UActorComponent*> DecalComponents = GetComponentsByClass(UDecalComponent::StaticClass());
    for (UActorComponent* Component : DecalComponents)
    {
        Component->DestroyComponent();
    }

    // Stop particle systems
    TArray<UActorComponent*> ParticleComponents = GetComponentsByClass(UParticleSystemComponent::StaticClass());
    for (UActorComponent* Component : ParticleComponents)
    {
        Component->DestroyComponent();
    }
}

void AFloodDisaster::ApplyDamageToCrops()
{
    for (AActor* Actor : AffectedCrops)
    {
        ACropPlot* CropPlot = Cast<ACropPlot>(Actor);
        if (CropPlot && CropPlot->HasCrop())
        {
            // Apply growth slowdown
            // In a real implementation, you'd modify the crop's growth rate
            
            // Apply random damage based on damage rate
            float DamageChance = (CropDamageRate / 100.0f) * GetWorld()->GetDeltaSeconds();
            if (FMath::FRand() < DamageChance)
            {
                // Damage the crop - in real implementation, reduce health or destroy
                UE_LOG(LogTemp, Warning, TEXT("Crop damaged by flooding at location: %s"), 
                       *CropPlot->GetActorLocation().ToString());
            }
        }
    }
}

void AFloodDisaster::SimulateSoilErosion()
{
    for (AActor* Actor : AffectedCrops)
    {
        ACropPlot* CropPlot = Cast<ACropPlot>(Actor);
        if (CropPlot && CropPlot->SoilHealthComponent)
        {
            // Reduce soil nutrients due to leaching
            float CurrentNutrients = CropPlot->SoilHealthComponent->CurrentSoilState.NutrientLevel;
            CropPlot->SoilHealthComponent->CurrentSoilState.NutrientLevel = 
                FMath::Max(0.0f, CurrentNutrients - (SoilNutrientLossRate * GetWorld()->GetDeltaSeconds()));
            
            // Increase erosion
            CropPlot->SoilHealthComponent->CurrentSoilState.ErosionResistance -= 2.0f * GetWorld()->GetDeltaSeconds();
            CropPlot->SoilHealthComponent->CurrentSoilState.ErosionResistance = 
                FMath::Max(0.0f, CropPlot->SoilHealthComponent->CurrentSoilState.ErosionResistance);
        }
    }
}