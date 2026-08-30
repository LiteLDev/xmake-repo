#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/threading/SharedAsync.h"
#include "mc/network/services/signaling/player_messaging/NetworkID.h"

// auto generated forward declare list
// clang-format off
class SignalingConsumerRefCount;
class SignalingService;
class TaskGroup;
// clang-format on

class SignalingConsumerSignInOwner {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<SignalingService> const>    mSignalingService;
    ::ll::TypedStorage<8, 16, std::shared_ptr<SignalingConsumerRefCount>> mSignalingConsumerRefCount;
    ::ll::TypedStorage<8, 8, std::unique_ptr<TaskGroup> const>            mTaskGroup;
    ::ll::TypedStorage<8, 16, ::PlayerMessaging::NetworkID>               mId;
    ::ll::UntypedStorage<8, 16>                                           mPlayerMessagingIdAsync;
    // NOLINTEND

public:
    // prevent constructor by default
    SignalingConsumerSignInOwner();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SignalingConsumerSignInOwner(
        std::shared_ptr<SignalingService>,
        ::Bedrock::Threading::Async<std::optional<PlayerMessaging::NetworkID>>&&
    );

    MCNAPI ::Bedrock::Threading::Async<std::error_code> signin();

    MCNAPI ~SignalingConsumerSignInOwner();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(std::shared_ptr<SignalingService>, ::Bedrock::Threading::Async<std::optional<PlayerMessaging::NetworkID>>&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
