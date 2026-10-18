#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/common/SubClientId.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/platform/threading/SpinLockImpl.h"
#include "mc/world/level/ChunkPos.h"
#include "mc/world/level/chunk/ChunkViewOwner.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
class NetworkChunkPublisherUpdatePacket;
class NetworkIdentifier;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

class ChunkGenerationManager {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, ::SpinLockImpl>                                                   mGenerationRequestLock;
    ::ll::TypedStorage<8, 40, std::unordered_map<ChunkViewOwner, std::unordered_set<ChunkPos>>> mGenerationRequests;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void
    addServerChunksToPacket(::NetworkIdentifier const&, ::SubClientId, ::NetworkChunkPublisherUpdatePacket&);

    MCNAPI void clearAllGenerationRequests(::NetworkIdentifier const&, ::SubClientId);

    MCNAPI bool hasPendingGenerationRequests(::NetworkIdentifier const&, ::SubClientId) const;

    MCNAPI void queueChunkGenerationRequest(::NetworkIdentifier const&, ::SubClientId, ::ChunkPos const&);
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::SpinLockImpl> mGenerationRequestLock;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::ChunkViewOwner, ::std::unordered_set<::ChunkPos>>>
        mGenerationRequests;
#endif // @header-generator platform
    // NOLINTEND
};
