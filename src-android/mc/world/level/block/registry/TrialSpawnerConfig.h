#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/SpawnData.h"
#include "mc/world/level/block/registry/TrialSpawnerWeightedLootTable.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
// clang-format on

struct TrialSpawnerConfig {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                                       mTotalMobs;
    ::ll::TypedStorage<4, 4, float>                                       mSimultaneousMobs;
    ::ll::TypedStorage<4, 4, float>                                       mTotalMobsAddedPerPlayer;
    ::ll::TypedStorage<4, 4, float>                                       mSimultaneousMobsAddedPerPlayer;
    ::ll::TypedStorage<8, 8, ulong>                                       mTargetCooldownLength;
    ::ll::TypedStorage<4, 4, int>                                         mSpawnRange;
    ::ll::TypedStorage<4, 4, int>                                         mTicksBetweenSpawns;
    ::ll::TypedStorage<8, 24, std::vector<SpawnData>>                     mSpawnPotentials;
    ::ll::TypedStorage<8, 24, std::vector<TrialSpawnerWeightedLootTable>> mLootTables;
    ::ll::TypedStorage<8, 24, std::string>                                mItemsToDropWhenOminous;
    ::ll::TypedStorage<8, 24, std::string>                                mRegistryKey;
    // NOLINTEND

public:
    // prevent constructor by default
    TrialSpawnerConfig(TrialSpawnerConfig const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI TrialSpawnerConfig();

    MCNAPI std::unique_ptr<CompoundTag> asInlineConfig() const;

    MCNAPI bool hasRegistryKey() const;

    MCNAPI void loadConfig(::CompoundTag const*);

    MCNAPI ~TrialSpawnerConfig();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
