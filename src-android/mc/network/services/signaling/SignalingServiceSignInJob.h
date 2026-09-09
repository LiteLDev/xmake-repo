#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/threading/AsyncPromise.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/deps/nether_net/ILanEventHandler.h"
#include "mc/network/services/signaling/SignalServiceConnectStage.h"
#include "mc/network/services/signaling/SignalingConsumerSignInOwner.h"

// auto generated forward declare list
// clang-format off
class SignalingService;
class TaskGroup;
struct NetherNetConnector;
namespace Json { class Value; }
namespace NetherNet { struct NetworkID; }
namespace NetherNet { struct StunRelayServer; }
namespace NetherNet::LanEvents { struct MessageReceived; }
namespace NetherNet::LanEvents { struct MessageSent; }
namespace PlayerMessaging { struct NetworkID; }
// clang-format on

class SignalingServiceSignInJob : public ::NetherNet::ILanEventHandler,
                                  public ::std::enable_shared_from_this<SignalingServiceSignInJob> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                                        mNetherNetConnector;
    ::ll::TypedStorage<8, 16, std::shared_ptr<SignalingService> const> mSignalingService;
    ::ll::TypedStorage<8, 72, ::SignalingConsumerSignInOwner>          mSignalingConsumerSignInOwner;
    ::ll::TypedStorage<8, 8, std::unique_ptr<TaskGroup> const>         mTaskGroup;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>         mLanEvents;
    // NOLINTEND

public:
    // prevent constructor by default
    SignalingServiceSignInJob();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SignalingServiceSignInJob();

    virtual void OnLanEvent(::NetherNet::LanEvents::MessageReceived const&);

    virtual void OnLanEvent(::NetherNet::LanEvents::MessageSent const&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SignalingServiceSignInJob(
        ::gsl::not_null<Bedrock::NonOwnerPointer<NetherNetConnector>>&&,
        std::shared_ptr<SignalingService>,
        ::Bedrock::Threading::Async<std::optional<PlayerMessaging::NetworkID>>&&
    );

    MCNAPI void _fireEventSignalServiceConnect(::SignalServiceConnectStage, ::Json::Value const&) const;

    MCNAPI void _handleRelayConfig(
        std::vector<NetherNet::StunRelayServer> const&,
        ::Bedrock::Threading::AsyncPromise<std::error_code>&&
    ) const;

    MCNAPI ::PlayerMessaging::NetworkID getId() const;

    MCNAPI bool isSignedIn() const;

    MCNAPI ::Bedrock::Threading::Async<std::error_code> signin(bool);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
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
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $OnLanEvent(::NetherNet::LanEvents::MessageReceived const&);

    MCNAPI void $OnLanEvent(::NetherNet::LanEvents::MessageSent const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
