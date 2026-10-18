#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/world/level/SpawnData.h"
#include "mc/world/level/block/registry/TrialSpawnerWeightedLootTable.h"

#else // @header-generator platform
#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
class CompoundTag;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class SpawnData;
struct TrialSpawnerWeightedLootTable;
#endif // @header-generator platform
// clang-format on

struct TrialSpawnerConfig {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, float>                                           mTotalMobs;
    ::ll::TypedStorage<4, 4, float>                                           mSimultaneousMobs;
    ::ll::TypedStorage<4, 4, float>                                           mTotalMobsAddedPerPlayer;
    ::ll::TypedStorage<4, 4, float>                                           mSimultaneousMobsAddedPerPlayer;
    ::ll::TypedStorage<8, 8, uint64>                                          mTargetCooldownLength;
    ::ll::TypedStorage<4, 4, int>                                             mSpawnRange;
    ::ll::TypedStorage<4, 4, int>                                             mTicksBetweenSpawns;
    ::ll::TypedStorage<8, 24, ::std::vector<::SpawnData>>                     mSpawnPotentials;
    ::ll::TypedStorage<8, 24, ::std::vector<::TrialSpawnerWeightedLootTable>> mLootTables;
    ::ll::TypedStorage<8, 32, ::std::string>                                  mItemsToDropWhenOminous;
    ::ll::TypedStorage<8, 32, ::std::string>                                  mRegistryKey;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    TrialSpawnerConfig(TrialSpawnerConfig const&);

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI TrialSpawnerConfig();
#else // @header-generator platform
    MCAPI TrialSpawnerConfig();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<CompoundTag> asInlineConfig() const;
#else // @header-generator platform
    MCAPI ::std::unique_ptr<::CompoundTag> asInlineConfig() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool hasRegistryKey() const;
#else // @header-generator platform
    MCAPI void loadConfig(::CompoundTag const* data);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void loadConfig(::CompoundTag const*);
#else // @header-generator platform
    MCAPI ::TrialSpawnerConfig& operator=(::TrialSpawnerConfig const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~TrialSpawnerConfig();
#else // @header-generator platform
    MCAPI ~TrialSpawnerConfig();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor();
#else // @header-generator platform
    MCAPI void* $ctor();
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
