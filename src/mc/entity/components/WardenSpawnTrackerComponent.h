#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class BlockSource;
class CompoundTag;
class DataLoadHelper;
// clang-format on

class WardenSpawnTrackerComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mThreatLevel;
    ::ll::TypedStorage<4, 4, int> mThreatLevelIncreaseCooldown;
    ::ll::TypedStorage<4, 4, int> mThreatLevelDecreaseTimer;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI WardenSpawnTrackerComponent();
#else // @header-generator platform
    MCAPI void addAdditionalSaveData(::CompoundTag& tag) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addAdditionalSaveData(::CompoundTag&) const;

    MCNAPI bool canIncreaseThreatLevel() const;

    MCNAPI void copyDataFrom(::WardenSpawnTrackerComponent const&);

    MCNAPI void readAdditionalSaveData(::Actor&, ::CompoundTag const&, ::DataLoadHelper&);

    MCNAPI void tick();

    MCNAPI int tryIncreaseThreatLevel();
#else // @header-generator platform
    MCAPI void readAdditionalSaveData(::Actor&, ::CompoundTag const& tag, ::DataLoadHelper&);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::optional<SharedTypes::Legacy::LevelSoundEvent> getSoundEventForThreatLevel(int);

    MCNAPI static bool hasNearbyWarden(::BlockSource&, ::BlockPos const&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static int const& MAX_THREAT_LEVEL();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
#else // @header-generator platform
    MCAPI static bool hasNearbyWarden(::BlockSource& region, ::BlockPos const& pos);
#endif // @header-generator platform
    // NOLINTEND
};
