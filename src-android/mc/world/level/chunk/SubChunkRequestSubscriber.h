#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/SubChunkPacketPayload.h"

// auto generated forward declare list
// clang-format off
class SubChunkPos;
class SubChunkRequestManager;
struct DimensionType;
// clang-format on

class SubChunkRequestSubscriber {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mManager;
    ::ll::UntypedStorage<8, 48> mCallback;
    // NOLINTEND

public:
    // prevent constructor by default
    SubChunkRequestSubscriber& operator=(SubChunkRequestSubscriber const&);
    SubChunkRequestSubscriber(SubChunkRequestSubscriber const&);

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
};
