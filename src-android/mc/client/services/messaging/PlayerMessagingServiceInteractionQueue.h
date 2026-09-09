#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/RetryDelay.h"

// auto generated forward declare list
// clang-format off
class PlayerMessagingService;
struct MessageServiceInteraction;
namespace Json { class Value; }
// clang-format on

class PlayerMessagingServiceInteractionQueue
: public ::std::enable_shared_from_this<PlayerMessagingServiceInteractionQueue> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 20, ::RetryDelay>                                            mInteractionReportTimer;
    ::ll::TypedStorage<1, 1, std::atomic<bool>>                                        mReportingEvents;
    ::ll::TypedStorage<8, 8, ::PlayerMessagingService&>                                mOwner;
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<MessageServiceInteraction>>> mInteractions;
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<MessageServiceInteraction>>> mInteractionsInProgress;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerMessagingServiceInteractionQueue& operator=(PlayerMessagingServiceInteractionQueue const&);
    PlayerMessagingServiceInteractionQueue(PlayerMessagingServiceInteractionQueue const&);
    PlayerMessagingServiceInteractionQueue();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit PlayerMessagingServiceInteractionQueue(::PlayerMessagingService&);

    MCNAPI void _sendInteractionQueue();

    MCNAPI void _trySendInteractionQueue();

    MCNAPI bool hasInteractions() const;

    MCNAPI void reportInteraction(std::unique_ptr<MessageServiceInteraction>);

    MCNAPI void update();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::PlayerMessagingService&);
    // NOLINTEND
};
