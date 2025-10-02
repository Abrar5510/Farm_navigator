#include "FarmingPlayerState.h"

AFarmingPlayerState::AFarmingPlayerState()
{
    PlayerLevel = 1;
    CurrentXP = 0;
    AvailableSkillPoints = 0;

    // Initialize default level table
    LevelTable.Add({1, 0, 0});
    LevelTable.Add({2, 100, 1});
    LevelTable.Add({3, 300, 1});
    LevelTable.Add({4, 600, 1});
    LevelTable.Add({5, 1000, 2});
    // Add more levels as needed

    InitializeSkills();
}

void AFarmingPlayerState::BeginPlay()
{
    Super::BeginPlay();
}

void AFarmingPlayerState::InitializeSkills()
{
    PlayerSkills.Add(EFarmingSkill::Farming, FSkillData("Farming", 0, 1.0f));
    PlayerSkills.Add(EFarmingSkill::Gardening, FSkillData("Gardening", 0, 1.0f));
    PlayerSkills.Add(EFarmingSkill::Irrigation, FSkillData("Irrigation", 0, 1.0f));
    PlayerSkills.Add(EFarmingSkill::Luck, FSkillData("Luck", 0, 1.0f));
}

void AFarmingPlayerState::AddXP(int32 XPAmount)
{
    // Apply luck bonus to XP gain
    float LuckBonus = GetSkillBonus(EFarmingSkill::Luck);
    int32 FinalXP = XPAmount * (1.0f + (LuckBonus * 0.1f)); // 10% bonus per luck level
    
    CurrentXP += FinalXP;

    // Check for level up
    int32 NextLevelXP = GetXPForNextLevel();
    if (NextLevelXP > 0 && CurrentXP >= NextLevelXP)
    {
        LevelUp();
    }
}

void AFarmingPlayerState::LevelUp()
{
    PlayerLevel++;
    AvailableSkillPoints += LevelTable[PlayerLevel - 1].SkillPointsRewarded;
    
    // Optional: Trigger level up effects
    OnLevelUp(PlayerLevel);
}

bool AFarmingPlayerState::UpgradeSkill(EFarmingSkill Skill)
{
    if (AvailableSkillPoints > 0 && PlayerSkills.Contains(Skill))
    {
        FSkillData& SkillData = PlayerSkills[Skill];
        if (SkillData.Level < SkillData.MaxLevel)
        {
            SkillData.Level++;
            AvailableSkillPoints--;
            
            // Recalculate bonus based on new level
            SkillData.BonusMultiplier = 1.0f + (SkillData.Level * 0.1f); // 10% bonus per level
            
            return true;
        }
    }
    return false;
}

int32 AFarmingPlayerState::GetXPForNextLevel() const
{
    if (LevelTable.IsValidIndex(PlayerLevel))
    {
        return LevelTable[PlayerLevel].XPRequired;
    }
    return -1; // Max level reached
}

float AFarmingPlayerState::GetXPProgressPercentage() const
{
    int32 NextLevelXP = GetXPForNextLevel();
    if (NextLevelXP <= 0) return 1.0f;

    int32 PreviousLevelXP = LevelTable[PlayerLevel - 1].XPRequired;
    int32 XPForThisLevel = NextLevelXP - PreviousLevelXP;
    int32 XPInThisLevel = CurrentXP - PreviousLevelXP;

    return FMath::Clamp((float)XPInThisLevel / XPForThisLevel, 0.0f, 1.0f);
}

float AFarmingPlayerState::GetSkillBonus(EFarmingSkill Skill) const
{
    if (PlayerSkills.Contains(Skill))
    {
        return PlayerSkills[Skill].BonusMultiplier;
    }
    return 1.0f;
}