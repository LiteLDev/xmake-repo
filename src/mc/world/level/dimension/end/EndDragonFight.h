#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/dimension/end/EndDragonFightVersion.h"
#include "mc/world/level/dimension/end/RespawnAnimation.h"

// auto generated forward declare list
// clang-format off
class ActorDamageSource;
class ActorSoundIdentifier;
class BlockPatternMatcher;
class BlockSource;
#if defined(LL_PLAT_A) // @header-generator platform
class ChunkPos;
#else // @header-generator platform
#endif // @header-generator platform
class ChunkViewSource;
#if defined(LL_PLAT_A) // @header-generator platform
class CompoundTag;
class EndGatewayBlockActor;
#else // @header-generator platform
#endif // @header-generator platform
class EnderCrystal;
class EnderDragon;
#if defined(LL_PLAT_A) // @header-generator platform
struct BuildMatch;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class EndDragonFight {
public:
    // EndDragonFight inner types declare
    // clang-format off
    struct GateWayGenerator;
    // clang-format on

    // EndDragonFight inner types define
    enum class GatewayTask : uchar {
#if defined(LL_PLAT_A) // @header-generator platform
        GENERATE_PAIR = 0,
        VERIFY_PAIR   = 1,
        NO_TASK       = 2,
#else // @header-generator platform
        GeneratePair = 0,
        VerifyPair   = 1,
        NoTask       = 2,
#endif // @header-generator platform
    };

    struct GateWayGenerator {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<1, 1, bool>                             mPlaceNewBlocks;
        ::ll::TypedStorage<8, 8, std::unique_ptr<ChunkViewSource>> mSource;
        ::ll::TypedStorage<4, 12, ::BlockPos>                      mPosition;
        // NOLINTEND

    public:
        // prevent constructor by default
        GateWayGenerator& operator=(GateWayGenerator const&);

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~GateWayGenerator();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
#else // @header-generator platform
        ::ll::TypedStorage<1, 1, bool>                                 mPlaceNewBlocks;
        ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ChunkViewSource>> mSource;
        ::ll::TypedStorage<4, 12, ::BlockPos>                          mPosition;
#endif // @header-generator platform
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 8, ::BlockSource*> mRegion;
    ::ll::TypedStorage<8, 24, std::vector<int>> mGateways;
    ::ll::TypedStorage<8, 8, std::unique_ptr<const BlockPatternMatcher>> mExitPortalPattern;
    ::ll::TypedStorage<4, 4, int> mNumCrystalsAlive;
    ::ll::TypedStorage<4, 4, int> mTicksSinceCrystalsScanned;
    ::ll::TypedStorage<4, 4, int> mTicksSincePortalScanned;
    ::ll::TypedStorage<4, 4, int> mTicksSinceLastPlayerScan;
    ::ll::TypedStorage<1, 1, bool> mDragonKilled;
    ::ll::TypedStorage<1, 1, bool> mPreviouslyKilled;
    ::ll::TypedStorage<1, 1, bool> mDragonSpawned;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID> mDragonUUID;
    ::ll::TypedStorage<4, 12, ::BlockPos> mPortalLocation;
    ::ll::TypedStorage<4, 12, ::BlockPos const> mDragonSpawnPos;
    ::ll::TypedStorage<4, 4, ::RespawnAnimation> mRespawnStage;
    ::ll::TypedStorage<4, 4, int> mRespawnTime;
    ::ll::TypedStorage<8, 24, std::vector<ActorUniqueID>> mRespawnCrystals;
    ::ll::TypedStorage<1, 1, ::EndDragonFightVersion> mFightVersion;
    ::ll::TypedStorage<8, 32, ::EndDragonFight::GateWayGenerator> mEntryGenerator;
    ::ll::TypedStorage<8, 32, ::EndDragonFight::GateWayGenerator> mExitGenerator;
    ::ll::TypedStorage<1, 1, ::EndDragonFight::GatewayTask> mBuildingOrVerifyingEndGatewayPair;
    ::ll::TypedStorage<8, 48, std::deque<std::tuple<EndDragonFight::GatewayTask, EndDragonFight::GateWayGenerator, EndDragonFight::GateWayGenerator>>> mGatewayTasks;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::BlockSource*>                                 mRegion;
    ::ll::TypedStorage<8, 24, ::std::vector<int>>                            mGateways;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::BlockPatternMatcher const>> mExitPortalPattern;
    ::ll::TypedStorage<4, 4, int>                                            mNumCrystalsAlive;
    ::ll::TypedStorage<4, 4, int>                                            mTicksSinceCrystalsScanned;
    ::ll::TypedStorage<4, 4, int>                                            mTicksSincePortalScanned;
    ::ll::TypedStorage<4, 4, int>                                            mTicksSinceLastPlayerScan;
    ::ll::TypedStorage<1, 1, bool>                                           mDragonKilled;
    ::ll::TypedStorage<1, 1, bool>                                           mPreviouslyKilled;
    ::ll::TypedStorage<1, 1, bool>                                           mDragonSpawned;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                                mDragonUUID;
    ::ll::TypedStorage<4, 12, ::BlockPos>                                    mPortalLocation;
    ::ll::TypedStorage<4, 12, ::BlockPos const>                              mDragonSpawnPos;
    ::ll::TypedStorage<4, 4, ::RespawnAnimation>                             mRespawnStage;
    ::ll::TypedStorage<4, 4, int>                                            mRespawnTime;
    ::ll::TypedStorage<8, 24, ::std::vector<::ActorUniqueID>>                mRespawnCrystals;
    ::ll::TypedStorage<1, 1, ::EndDragonFightVersion>                        mFightVersion;
    ::ll::TypedStorage<8, 32, ::EndDragonFight::GateWayGenerator>            mEntryGenerator;
    ::ll::TypedStorage<8, 32, ::EndDragonFight::GateWayGenerator>            mExitGenerator;
    ::ll::TypedStorage<1, 1, ::EndDragonFight::GatewayTask>                  mBuildingOrVerifyingEndGatewayPair;
    ::ll::TypedStorage<
        8,
        40,
        ::std::deque<::std::tuple<
            ::EndDragonFight::GatewayTask,
            ::EndDragonFight::GateWayGenerator,
            ::EndDragonFight::GateWayGenerator>>>
        mGatewayTasks;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    EndDragonFight();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _canSpawnNewGateway(::ChunkViewSource*, ::BlockPos const&) const;
#else // @header-generator platform
    MCAPI void _createNewDragon();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _createNewDragon();
#else // @header-generator platform
    MCAPI void _initializeDragon(::EnderDragon& enderDragon);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _initializeDragon(::EnderDragon&);
#else // @header-generator platform
    MCAPI void _makeEndIslandFeature(::BlockSource& region, ::BlockPos const position);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _makeEndIslandFeature(::BlockSource&, ::BlockPos const);
#else // @header-generator platform
    MCAPI ::ActorSoundIdentifier _makeSoundIdentifier() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ActorSoundIdentifier _makeSoundIdentifier() const;
#else // @header-generator platform
    MCAPI void _spawnExitPortal(bool activated);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool
    _setEndGatewayBlockActorExitPosition(::BlockSource&, ::BlockSource&, ::BlockPos const&, ::BlockPos const&, bool);

    MCNAPI void _spawnExitPortal(bool);

    MCNAPI void _spawnNewGatewayChunksTask(
        std::tuple<EndDragonFight::GatewayTask, EndDragonFight::GateWayGenerator, EndDragonFight::GateWayGenerator>&
#else // @header-generator platform
    MCAPI void _spawnNewGatewayChunksTask(
        ::std::tuple<
            ::EndDragonFight::GatewayTask,
            ::EndDragonFight::GateWayGenerator,
            ::EndDragonFight::GateWayGenerator>& task
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _updateCrystalCount();
#else // @header-generator platform
    MCAPI void _updateCrystalCount();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _verifyExitPositionsTask(
        std::tuple<EndDragonFight::GatewayTask, EndDragonFight::GateWayGenerator, EndDragonFight::GateWayGenerator>&
#else // @header-generator platform
    MCAPI void _verifyExitPositionsTask(
        ::std::tuple<
            ::EndDragonFight::GatewayTask,
            ::EndDragonFight::GateWayGenerator,
            ::EndDragonFight::GateWayGenerator>& task
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void loadData(::CompoundTag const&);
#else // @header-generator platform
    MCAPI void onCrystalDestroyed(::EnderCrystal const& crystal, ::ActorDamageSource const& source);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void onCrystalDestroyed(::EnderCrystal const&, ::ActorDamageSource const&);
#else // @header-generator platform
    MCAPI void resetSpikeCrystals();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void resetSpikeCrystals();
#else // @header-generator platform
    MCAPI void spawnNewGatewayChunks(::BlockPos const& pos, bool placeEntryBlocks, bool placeExitBlocks);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void spawnNewGatewayChunks(::BlockPos const&, bool, bool);

    MCNAPI void tryRespawn();

    MCNAPI ~EndDragonFight();
#else // @header-generator platform
    MCAPI void tryRespawn();
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // static variables
#else // @header-generator platform
    // static functions
#endif // @header-generator platform
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static int const& ARENA_SIZE_CHUNKS();
#else // @header-generator platform
    MCAPI static bool _canSpawnNewGateway(::ChunkViewSource* source, ::BlockPos const& pos);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::BlockPos const& DEFAULT_PORTAL_LOCATION();

    MCNAPI static int const& GATEWAY_CHUNK_RADIUS();

    MCNAPI static int const& GATEWAY_COUNT();

    MCNAPI static int const& GATEWAY_DISTANCE();

    MCNAPI static int const& GATEWAY_HEIGHT();

    MCNAPI static int const& TIME_BETWEEN_CRYSTAL_SCANS();

    MCNAPI static int const& TIME_BETWEEN_PLAYER_SCANS();

    MCNAPI static int const& TIME_BETWEEN_PORTAL_SCANS();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI static bool _setEndGatewayBlockActorExitPosition(
        ::BlockSource&    entrySource,
        ::BlockSource&    exitSource,
        ::BlockPos const& endGatewayActorPos,
        ::BlockPos const& destinationPos,
        bool              lookForGateway
    );
#endif // @header-generator platform
    // NOLINTEND
};
