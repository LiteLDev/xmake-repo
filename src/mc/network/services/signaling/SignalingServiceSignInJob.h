#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/threading/AsyncPromise.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/nether_net/ILanEventHandler.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/network/services/signaling/SignalServiceConnectStage.h"
#include "mc/network/services/signaling/SignalingConsumerSignInOwner.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class SignalingService;
#if defined(LL_PLAT_A) // @header-generator platform
class TaskGroup;
#else // @header-generator platform
#endif // @header-generator platform
struct NetherNetConnector;
#if defined(LL_PLAT_A) // @header-generator platform
namespace Json { class Value; }
namespace NetherNet { struct NetworkID; }
#else // @header-generator platform
#endif // @header-generator platform
namespace NetherNet { struct StunRelayServer; }
namespace NetherNet::LanEvents { struct MessageReceived; }
namespace NetherNet::LanEvents { struct MessageSent; }
namespace PlayerMessaging { struct NetworkID; }
// clang-format on

class SignalingServiceSignInJob : public ::NetherNet::ILanEventHandler,
#if defined(LL_PLAT_A) // @header-generator platform
                                  public ::std::enable_shared_from_this<SignalingServiceSignInJob> {
#else // @header-generator platform
                                  public ::std::enable_shared_from_this<::SignalingServiceSignInJob> {
#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 24>                                        mNetherNetConnector;
    ::ll::TypedStorage<8, 16, std::shared_ptr<SignalingService> const> mSignalingService;
    ::ll::TypedStorage<8, 72, ::SignalingConsumerSignInOwner>          mSignalingConsumerSignInOwner;
    ::ll::TypedStorage<8, 8, std::unique_ptr<TaskGroup> const>         mTaskGroup;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>         mLanEvents;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 24> mUnk5e1ef6;
    ::ll::UntypedStorage<8, 16> mUnk503029;
    ::ll::UntypedStorage<8, 72> mUnk7fb513;
    ::ll::UntypedStorage<8, 8>  mUnk83278f;
    ::ll::UntypedStorage<8, 16> mUnk3ab861;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    SignalingServiceSignInJob& operator=(SignalingServiceSignInJob const&);
    SignalingServiceSignInJob(SignalingServiceSignInJob const&);
#endif // @header-generator platform
    SignalingServiceSignInJob();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~SignalingServiceSignInJob();
#else // @header-generator platform
    virtual ~SignalingServiceSignInJob() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void OnLanEvent(::NetherNet::LanEvents::MessageReceived const&);
#else // @header-generator platform
    virtual void OnLanEvent(::NetherNet::LanEvents::MessageSent const& event) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void OnLanEvent(::NetherNet::LanEvents::MessageSent const&);
#else // @header-generator platform
    virtual void OnLanEvent(::NetherNet::LanEvents::MessageReceived const& event) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI SignalingServiceSignInJob(
        ::gsl::not_null<Bedrock::NonOwnerPointer<NetherNetConnector>>&&,
        std::shared_ptr<SignalingService>,
        ::Bedrock::Threading::Async<std::optional<PlayerMessaging::NetworkID>>&&
    );

    MCNAPI void _fireEventSignalServiceConnect(::SignalServiceConnectStage, ::Json::Value const&) const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI SignalingServiceSignInJob(
        ::Bedrock::NotNullNonOwnerPtr<::NetherNetConnector>&&                        netherNetConnector,
        ::std::shared_ptr<::SignalingService>                                        signalingService,
        ::Bedrock::Threading::Async<::std::optional<::PlayerMessaging::NetworkID>>&& playerMessagingId
    );
#endif
#endif // @header-generator platform

    MCNAPI void _handleRelayConfig(
#if defined(LL_PLAT_A) // @header-generator platform
        std::vector<NetherNet::StunRelayServer> const&,
        ::Bedrock::Threading::AsyncPromise<std::error_code>&&
#else // @header-generator platform
        ::std::vector<::NetherNet::StunRelayServer> const&      config,
        ::Bedrock::Threading::AsyncPromise<::std::error_code>&& signInPromise
#endif // @header-generator platform
    ) const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::PlayerMessaging::NetworkID getId() const;

    MCNAPI bool isSignedIn() const;

    MCNAPI ::Bedrock::Threading::Async<std::error_code> signin(bool);
#else // @header-generator platform
    MCNAPI ::Bedrock::Threading::Async<::std::error_code> signin(bool fetchRelayConfig);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(
        ::gsl::not_null<Bedrock::NonOwnerPointer<NetherNetConnector>>&&,
        std::shared_ptr<SignalingService>,
        ::Bedrock::Threading::Async<std::optional<PlayerMessaging::NetworkID>>&&
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::NetherNetConnector>&&                        netherNetConnector,
        ::std::shared_ptr<::SignalingService>                                        signalingService,
        ::Bedrock::Threading::Async<::std::optional<::PlayerMessaging::NetworkID>>&& playerMessagingId
    );
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $OnLanEvent(::NetherNet::LanEvents::MessageReceived const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void $OnLanEvent(::NetherNet::LanEvents::MessageSent const& event);

    MCNAPI void $OnLanEvent(::NetherNet::LanEvents::MessageReceived const& event);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $OnLanEvent(::NetherNet::LanEvents::MessageSent const&);
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND
};
