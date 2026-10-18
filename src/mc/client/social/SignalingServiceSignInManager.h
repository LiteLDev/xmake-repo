#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class ClientNetworkSystem;
class ServerNetworkSystem;
class SignalingConsumerSignInOwner;
class SignalingService;
class SignalingServiceSignInJob;
namespace Bedrock::Services { class ISessionAuthService; }
namespace PlayerMessaging { struct NetworkID; }
namespace flighting { class ConfigurationToggles; }
// clang-format on

class SignalingServiceSignInManager : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<SignalingService>> mSignalingService;
    ::ll::UntypedStorage<8, 16>                                  mAuthService;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>   mLoadTestSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    SignalingServiceSignInManager();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SignalingServiceSignInManager();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit SignalingServiceSignInManager(std::shared_ptr<SignalingService>);

    MCNAPI void registerConfigurationToggles(::flighting::ConfigurationToggles&);

    MCNAPI ::Bedrock::Threading::Async<std::error_code>
    signIntoSignalingService(std::shared_ptr<SignalingConsumerSignInOwner>&);

    MCNAPI ::Bedrock::Threading::Async<std::error_code>
    signIntoSignalingServiceAsClient(std::shared_ptr<SignalingServiceSignInJob>&, ::ClientNetworkSystem&, bool);

    MCNAPI ::Bedrock::Threading::Async<std::error_code>
    signIntoSignalingServiceAsServer(std::shared_ptr<SignalingServiceSignInJob>&, ::ServerNetworkSystem&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<SignalingService>);
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
#else // @header-generator platform
class SignalingServiceSignInManager {};
#endif // @header-generator platform
