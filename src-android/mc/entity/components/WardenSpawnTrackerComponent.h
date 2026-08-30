#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"

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
    MCNAPI WardenSpawnTrackerComponent();

    MCNAPI void addAdditionalSaveData(::CompoundTag&) const;

    MCNAPI bool canIncreaseThreatLevel() const;

    MCNAPI void copyDataFrom(::WardenSpawnTrackerComponent const&);

    MCNAPI void readAdditionalSaveData(::Actor&, ::CompoundTag const&, ::DataLoadHelper&);

    MCNAPI void tick();

    MCNAPI int tryIncreaseThreatLevel();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
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
    // NOLINTEND
};
