#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorUniqueID.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class Actor;
#else // @header-generator platform
#endif // @header-generator platform
class BlockPos;
class BlockSource;
class Level;
// clang-format on

class WanderingTraderScheduler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Level&>        mLevel;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ulong>           mTickToCheckIfSpawning;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, uint64>          mTickToCheckIfSpawning;
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<BlockPos> _findValidSpawnPosUnder(::BlockPos const&, ::BlockSource&) const;
#else // @header-generator platform
    MCAPI ::std::optional<::BlockPos> _findValidSpawnPosUnder(::BlockPos const& pos, ::BlockSource& region) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void readSaveData();
#else // @header-generator platform
    MCAPI void tick();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void tick();

    MCNAPI void writeSaveData() const;
#else // @header-generator platform
    MCAPI void writeSaveData() const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static float const& CHANCE_TO_SPAWN_IN_WILDERNESS();

    MCNAPI static std::vector<float> const& CHANCE_TO_SPAWN_PER_DAY();

    MCNAPI static int const& DISTANCE_IN_BLOCKS_FROM_MEETING_AREA();

    MCNAPI static int const& DISTANCE_IN_BLOCKS_FROM_PLAYER();

    MCNAPI static int const& DISTANCE_IN_BLOCKS_FROM_PLAYER_SQUARE();

    MCNAPI static int const& LENGTH_OF_DAY_IN_TICKS();
#else // @header-generator platform
    MCAPI static ::std::vector<float> const& CHANCE_TO_SPAWN_PER_DAY();
#endif // @header-generator platform
    // NOLINTEND
};
