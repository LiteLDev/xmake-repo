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
class ChunkPos;
class ChunkViewSource;
class CompoundTag;
class EndGatewayBlockActor;
class EnderCrystal;
class EnderDragon;
struct BuildMatch;
// clang-format on

class EndDragonFight {
public:
    // EndDragonFight inner types declare
    // clang-format off
    struct GateWayGenerator;
    // clang-format on

    // EndDragonFight inner types define
    enum class GatewayTask : uchar {
        GENERATE_PAIR = 0,
        VERIFY_PAIR   = 1,
        NO_TASK       = 2,
    };

    struct GateWayGenerator {
    public:
        // member variables
        // NOLINTBEGIN
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
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
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
    // NOLINTEND

public:
    // prevent constructor by default
    EndDragonFight();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool _canSpawnNewGateway(::ChunkViewSource*, ::BlockPos const&) const;

    MCNAPI void _createNewDragon();

    MCNAPI void _initializeDragon(::EnderDragon&);

    MCNAPI void _makeEndIslandFeature(::BlockSource&, ::BlockPos const);

    MCNAPI ::ActorSoundIdentifier _makeSoundIdentifier() const;

    MCNAPI bool
    _setEndGatewayBlockActorExitPosition(::BlockSource&, ::BlockSource&, ::BlockPos const&, ::BlockPos const&, bool);

    MCNAPI void _spawnExitPortal(bool);

    MCNAPI void _spawnNewGatewayChunksTask(
        std::tuple<EndDragonFight::GatewayTask, EndDragonFight::GateWayGenerator, EndDragonFight::GateWayGenerator>&
    );

    MCNAPI void _updateCrystalCount();

    MCNAPI void _verifyExitPositionsTask(
        std::tuple<EndDragonFight::GatewayTask, EndDragonFight::GateWayGenerator, EndDragonFight::GateWayGenerator>&
    );

    MCNAPI void loadData(::CompoundTag const&);

    MCNAPI void onCrystalDestroyed(::EnderCrystal const&, ::ActorDamageSource const&);

    MCNAPI void resetSpikeCrystals();

    MCNAPI void spawnNewGatewayChunks(::BlockPos const&, bool, bool);

    MCNAPI void tryRespawn();

    MCNAPI ~EndDragonFight();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static int const& ARENA_SIZE_CHUNKS();

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
    // NOLINTEND
};
