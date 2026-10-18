#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/threading/SharedAsync.h"
#include "mc/network/services/signaling/player_messaging/NetworkID.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class SignalingConsumerRefCount;
#else // @header-generator platform
#endif // @header-generator platform
class SignalingService;
#if defined(LL_PLAT_A) // @header-generator platform
class TaskGroup;
#else // @header-generator platform
namespace PlayerMessaging { struct NetworkID; }
#endif // @header-generator platform
// clang-format on

class SignalingConsumerSignInOwner {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, std::shared_ptr<SignalingService> const>    mSignalingService;
    ::ll::TypedStorage<8, 16, std::shared_ptr<SignalingConsumerRefCount>> mSignalingConsumerRefCount;
    ::ll::TypedStorage<8, 8, std::unique_ptr<TaskGroup> const>            mTaskGroup;
    ::ll::TypedStorage<8, 16, ::PlayerMessaging::NetworkID>               mId;
    ::ll::UntypedStorage<8, 16>                                           mPlayerMessagingIdAsync;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 16> mUnk87492c;
    ::ll::UntypedStorage<8, 16> mUnk162295;
    ::ll::UntypedStorage<8, 8>  mUnk348f01;
    ::ll::UntypedStorage<8, 16> mUnkf57375;
    ::ll::UntypedStorage<8, 16> mUnk251788;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    SignalingConsumerSignInOwner& operator=(SignalingConsumerSignInOwner const&);
    SignalingConsumerSignInOwner(SignalingConsumerSignInOwner const&);
#endif // @header-generator platform
    SignalingConsumerSignInOwner();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI SignalingConsumerSignInOwner(
        std::shared_ptr<SignalingService>,
        ::Bedrock::Threading::Async<std::optional<PlayerMessaging::NetworkID>>&&
    );

    MCNAPI ::Bedrock::Threading::Async<std::error_code> signin();

    MCNAPI ~SignalingConsumerSignInOwner();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI SignalingConsumerSignInOwner(
        ::std::shared_ptr<::SignalingService>                                        signalingService,
        ::Bedrock::Threading::Async<::std::optional<::PlayerMessaging::NetworkID>>&& playerMessagingId
    );

    MCNAPI ::Bedrock::Threading::Async<::std::error_code> signin();

    MCNAPI ~SignalingConsumerSignInOwner();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void*
    $ctor(std::shared_ptr<SignalingService>, ::Bedrock::Threading::Async<std::optional<PlayerMessaging::NetworkID>>&&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(
        ::std::shared_ptr<::SignalingService>                                        signalingService,
        ::Bedrock::Threading::Async<::std::optional<::PlayerMessaging::NetworkID>>&& playerMessagingId
    );
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
#endif // @header-generator platform
    // NOLINTEND
};
