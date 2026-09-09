#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorUniqueID.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class BlockSource;
class Level;
// clang-format on

class WanderingTraderScheduler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Level&>        mLevel;
    ::ll::TypedStorage<8, 8, ulong>           mTickToCheckIfSpawning;
    ::ll::TypedStorage<1, 1, bool>            mSpawnWanderingTrader;
    ::ll::TypedStorage<4, 4, int>             mDaysSinceLastSpawn;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID> mWanderingTraderUUID;
    // NOLINTEND

public:
    // prevent constructor by default
    WanderingTraderScheduler& operator=(WanderingTraderScheduler const&);
    WanderingTraderScheduler(WanderingTraderScheduler const&);
    WanderingTraderScheduler();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI std::optional<BlockPos> _findValidSpawnPosUnder(::BlockPos const&, ::BlockSource&) const;

    MCNAPI void readSaveData();

    MCNAPI void tick();

    MCNAPI void writeSaveData() const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static float const& CHANCE_TO_SPAWN_IN_WILDERNESS();

    MCNAPI static std::vector<float> const& CHANCE_TO_SPAWN_PER_DAY();

    MCNAPI static int const& DISTANCE_IN_BLOCKS_FROM_MEETING_AREA();

    MCNAPI static int const& DISTANCE_IN_BLOCKS_FROM_PLAYER();

    MCNAPI static int const& DISTANCE_IN_BLOCKS_FROM_PLAYER_SQUARE();

    MCNAPI static int const& LENGTH_OF_DAY_IN_TICKS();
    // NOLINTEND
};
