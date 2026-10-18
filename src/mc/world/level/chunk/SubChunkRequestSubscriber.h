#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/SubChunkPacketPayload.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class SubChunkPos;
#else // @header-generator platform
#endif // @header-generator platform
class SubChunkRequestManager;
#if defined(LL_PLAT_A) // @header-generator platform
struct DimensionType;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class SubChunkRequestSubscriber {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 16> mManager;
    ::ll::UntypedStorage<8, 48> mCallback;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::SubChunkRequestManager&>                                              mManager;
    ::ll::TypedStorage<8, 64, ::std::function<void(::SubChunkPacketPayload::SubChunkRequestResult)>> mCallback;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    SubChunkRequestSubscriber& operator=(SubChunkRequestSubscriber const&);
    SubChunkRequestSubscriber(SubChunkRequestSubscriber const&);
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SubChunkRequestSubscriber(
        ::SubChunkRequestManager&,
        std::function<void(SubChunkPacketPayload::SubChunkRequestResult)>
    );

    MCNAPI bool managerHasQueuedRequests();

    MCNAPI void queueRequiredSubChunk(::DimensionType const&, ::SubChunkPos const&);

    MCNAPI ~SubChunkRequestSubscriber();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SubChunkRequestManager&, std::function<void(SubChunkPacketPayload::SubChunkRequestResult)>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
    SubChunkRequestSubscriber();
#endif // @header-generator platform
};
