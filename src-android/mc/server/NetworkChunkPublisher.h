#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/network/NetworkIdentifier.h"
#include "mc/server/ChunkPositionAndDimension.h"
#include "mc/server/ClientGenerationRequestHandler.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class ChunkPos;
class ChunkSource;
class ChunkViewSource;
class ILevel;
class LevelChunk;
class LevelChunkPacket;
class ServerNetworkSystem;
class VarIntDataOutput;
class Vec3;
namespace ClientBlobCache::Server { class ActiveTransfersManager; }
namespace ClientBlobCache::Server { class TransferBuilder; }
// clang-format on

class NetworkChunkPublisher {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 8, ::ILevel&> mLevel;
    ::ll::TypedStorage<8, 8, ::ServerNetworkSystem*> mNetwork;
    ::ll::TypedStorage<8, 176, ::NetworkIdentifier> mOwner;
    ::ll::TypedStorage<8, 8, ::ClientBlobCache::Server::ActiveTransfersManager*> mClientCache;
    ::ll::TypedStorage<1, 1, ::SubClientId> mSubClientId;
    ::ll::TypedStorage<4, 12, ::BlockPos> mLastChunkUpdatePosition;
    ::ll::TypedStorage<4, 4, uint> mLastChunkUpdateRadius;
    ::ll::TypedStorage<4, 4, uint> mHandleForChunkBuildOrderUpdates;
    ::ll::TypedStorage<4, 4, int> mChunksSentSinceStart;
    ::ll::TypedStorage<8, 16, std::shared_ptr<ChunkViewSource>> mSource;
    ::ll::TypedStorage<8, 16, std::shared_ptr<ChunkSource>> mNetworkChunkSource;
    ::ll::UntypedStorage<8, 48> mAddCallback;
    ::ll::TypedStorage<8, 24, std::string> mCacheSerializeBuffer;
    ::ll::TypedStorage<8, 40, std::unordered_map<ChunkPositionAndDimension, std::weak_ptr<LevelChunk>>> mQueuedChunks;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mLastGenerationRequestQueued;
    ::ll::TypedStorage<1, 1, bool> mWaitingForServerChunks;
    ::ll::TypedStorage<1, 1, bool> mInitialSpawnDone;
    ::ll::TypedStorage<8, 48, std::queue<ClientGenerationRequestHandler, std::deque<ClientGenerationRequestHandler>>> mGenerationRequests;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    NetworkChunkPublisher& operator=(NetworkChunkPublisher const&);
    NetworkChunkPublisher(NetworkChunkPublisher const&);
    NetworkChunkPublisher();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~NetworkChunkPublisher();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI NetworkChunkPublisher(::ILevel&, ::NetworkIdentifier const&, ::SubClientId);

    MCNAPI bool _sendQueuedChunk(::ChunkPositionAndDimension const&, ::ClientBlobCache::Server::TransferBuilder*);

    MCNAPI void _serializeAndCache(
        ::LevelChunkPacket&,
        ::ClientBlobCache::Server::TransferBuilder&,
        std::function<void(VarIntDataOutput&)>&&
    );

    MCNAPI void addChunksToQueue(std::vector<ChunkPos> const&);

    MCNAPI void clearRegion();

    MCNAPI void destroyRegion();

    MCNAPI int getChunksSentSinceStart() const;

    MCNAPI void handleGenerationRequests();

    MCNAPI bool is2DPositionRelevant(::BlockPos const&) const;

    MCNAPI void moveRegion(::BlockPos const&, uint, ::Vec3 const&, float);

    MCNAPI void prepareRegion(::ChunkSource&, ::ChunkPos const&);

    MCNAPI void queueChunkGenerationRequests(::ChunkPos const, int const, ::Vec3 const&, std::vector<ChunkPos> const&);

    MCNAPI void resetInitialSpawn();

    MCNAPI void sendQueuedChunks();

    MCNAPI void setClientsNetworkChunkSource(std::shared_ptr<ChunkSource>);

    MCNAPI void setPlayerNetworkId(::NetworkIdentifier const&);

    MCNAPI void setServerSettings(::ServerNetworkSystem&, ::ClientBlobCache::Server::ActiveTransfersManager&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ILevel&, ::NetworkIdentifier const&, ::SubClientId);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
