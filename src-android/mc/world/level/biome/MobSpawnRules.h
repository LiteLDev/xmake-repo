#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/Difficulty.h"
#include "mc/world/level/biome/MobSpawnHerdInfo.h"
#include "mc/world/level/biome/MobSpawnerPermutation.h"
#include "mc/world/level/block/BlockDescriptor.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class IRandom;
class Random;
class SpawnConditions;
struct ActorDefinitionIdentifier;
// clang-format on

class MobSpawnRules {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48>                                   mHardcodedCallbackRule;
    ::ll::TypedStorage<4, 4, int>                                 mMinBrightness;
    ::ll::TypedStorage<4, 4, int>                                 mMaxBrightness;
    ::ll::TypedStorage<4, 4, float>                               mMinMoonBrightness;
    ::ll::TypedStorage<4, 4, float>                               mMaxMoonBrightness;
    ::ll::TypedStorage<1, 1, bool>                                mAdjustForWeather;
    ::ll::TypedStorage<4, 4, int>                                 mMinHeight;
    ::ll::TypedStorage<4, 4, int>                                 mMaxHeight;
    ::ll::TypedStorage<4, 4, int>                                 mRarity;
    ::ll::TypedStorage<4, 4, int>                                 mSurfaceCap;
    ::ll::TypedStorage<4, 4, int>                                 mUndergroundCap;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::Difficulty>   mMinDifficulty;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::Difficulty>   mMaxDifficulty;
    ::ll::TypedStorage<4, 4, int>                                 mMinSpawnDistance;
    ::ll::TypedStorage<4, 4, int>                                 mMaxSpawnDistance;
    ::ll::TypedStorage<4, 4, int>                                 mSpawnDistanceCap;
    ::ll::TypedStorage<1, 1, bool>                                mSurfaceSpawner;
    ::ll::TypedStorage<1, 1, bool>                                mUndergroundSpawner;
    ::ll::TypedStorage<1, 1, bool>                                mWaterSpawner;
    ::ll::TypedStorage<1, 1, bool>                                mBubbleSpawner;
    ::ll::TypedStorage<1, 1, bool>                                mLavaSpawner;
    ::ll::TypedStorage<4, 4, uint>                                mPlayerInVillageDistance;
    ::ll::TypedStorage<4, 4, uint>                                mPlayerInVillageBorderTolerance;
    ::ll::TypedStorage<1, 1, bool>                                mExperimentalSpawner;
    ::ll::TypedStorage<8, 8, ulong>                               mMinWorldAge;
    ::ll::TypedStorage<8, 8, ulong>                               mMaxWorldAge;
    ::ll::TypedStorage<4, 4, int>                                 mMinDelay;
    ::ll::TypedStorage<4, 4, int>                                 mMaxDelay;
    ::ll::TypedStorage<8, 24, std::vector<MobSpawnHerdInfo>>      mHerdList;
    ::ll::TypedStorage<8, 24, std::vector<MobSpawnerPermutation>> mPermutationList;
    ::ll::TypedStorage<8, 24, std::string>                        mMobEventName;
    ::ll::TypedStorage<8, 24, std::vector<BlockDescriptor>>       mSpawnOnBlockList;
    ::ll::TypedStorage<8, 24, std::vector<BlockDescriptor>>       mSpawnAboveBlockList;
    ::ll::TypedStorage<8, 24, std::vector<BlockDescriptor>>       mSpawnOnBlockPreventedList;
    ::ll::TypedStorage<4, 4, int>                                 mAboveBlockDistance;
    ::ll::TypedStorage<8, 24, std::vector<MobSpawnerPermutation>> mGuaranteedList;
    ::ll::TypedStorage<8, 24, std::string>                        mMobToDelayId;
    ::ll::TypedStorage<4, 4, int>                                 mDelaySpawnChance;
    ::ll::UntypedStorage<1, 12>                                   mPersistence;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MobSpawnRules(::MobSpawnRules const&);

    MCNAPI MobSpawnRules(::MobSpawnRules&&);

    MCNAPI ::MobSpawnRules& addPermutation(int, int, ::ActorDefinitionIdentifier const&);

    MCNAPI bool canSpawnInConditions(::SpawnConditions const&, ::BlockSource&) const;

    MCNAPI int getAboveBlockDistance() const;

    MCNAPI std::pair<int, int> const getDelayRange() const;

    MCNAPI int getDelaySpawnChance() const;

    MCNAPI std::vector<MobSpawnerPermutation> const& getGuaranteedPermutations() const;

    MCNAPI std::vector<MobSpawnHerdInfo>& getHerdListMutable();

    MCNAPI std::string const getMobToDelayId() const;

    MCNAPI std::vector<MobSpawnerPermutation> const& getPermutations() const;

    MCNAPI bool getPersistence() const;

    MCNAPI int getPopulationCap(::SpawnConditions const&) const;

    MCNAPI std::vector<BlockDescriptor> const& getSpawnAboveBlockList() const;

    MCNAPI std::vector<BlockDescriptor>& getSpawnAboveBlockListMutable();

    MCNAPI int getSpawnCount(::SpawnConditions const&, ::BlockSource&, ::Random&, ::MobSpawnHerdInfo const&) const;

    MCNAPI std::vector<BlockDescriptor> const& getSpawnOnBlockList() const;

    MCNAPI std::vector<BlockDescriptor>& getSpawnOnBlockListMutable();

    MCNAPI std::vector<BlockDescriptor> const& getSpawnOnBlockPreventedList() const;

    MCNAPI std::vector<BlockDescriptor>& getSpawnOnBlockPreventedListMutable();

    MCNAPI bool isLavaSpawner() const;

    MCNAPI bool isUnderwaterSpawner() const;

    MCNAPI ::MobSpawnRules& operator=(::MobSpawnRules&&);

    MCNAPI ::MobSpawnRules& operator=(::MobSpawnRules const&);

    MCNAPI ::MobSpawnHerdInfo const& selectRandomHerd(::IRandom&) const;

    MCNAPI ::MobSpawnRules& setAboveBlockDistance(int);

    MCNAPI ::MobSpawnRules& setBrightnessRange(int, int, bool);

    MCNAPI ::MobSpawnRules& setBubbleSpawner(bool);

    MCNAPI ::MobSpawnRules& setDelayRange(int, int, std::string const&);

    MCNAPI ::MobSpawnRules& setDelaySpawnChance(int);

    MCNAPI ::MobSpawnRules& setDifficultyRange(::SharedTypes::Legacy::Difficulty, ::SharedTypes::Legacy::Difficulty);

    MCNAPI ::MobSpawnRules& setExperimentalGameplay();

    MCNAPI ::MobSpawnRules& setHardcodedSpawnRuleCallback(std::function<bool(const SpawnConditions&, BlockSource&)>);

    MCNAPI ::MobSpawnRules& setHeightRange(int, int);

    MCNAPI ::MobSpawnRules& setLavaSpawner();

    MCNAPI ::MobSpawnRules& setMobEventType(std::string const&);

    MCNAPI ::MobSpawnRules& setPersistence(bool);

    MCNAPI ::MobSpawnRules& setPlayerInVillageBorderTolerance(uint const);

    MCNAPI ::MobSpawnRules& setPlayerInVillageDistance(uint const);

    MCNAPI ::MobSpawnRules& setPopulationCap(int, int);

    MCNAPI ::MobSpawnRules& setRarity(int);

    MCNAPI ::MobSpawnRules& setSpawnDistanceCap(int);

    MCNAPI ::MobSpawnRules& setSpawnDistances(int, int);

    MCNAPI ::MobSpawnRules& setSurfaceSpawner();

    MCNAPI ::MobSpawnRules& setUndergroundSpawner();

    MCNAPI ::MobSpawnRules& setUnderwaterSpawner();

    MCNAPI ::MobSpawnRules& setWorldAgeRange(ulong, ulong);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static int const& LOW_END_MAX_SPAWN_DISTANCE();

    MCNAPI static int const& MAX_DEFAULT_SPAWN_DISTANCE();

    MCNAPI static ulong const& MAX_WORLD_AGE();

    MCNAPI static int const& MIN_DEFAULT_SPAWN_DISTANCE();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::MobSpawnRules const&);

    MCNAPI void* $ctor(::MobSpawnRules&&);
    // NOLINTEND
};
