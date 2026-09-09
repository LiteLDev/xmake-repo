#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/application/AppPlatformListener.h"
#include "mc/deps/core/http/PersistentWebSocket.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/threading/AsyncPromise.h"
#include "mc/deps/core/threading/BasicLockbox.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/deps/nether_net/ESessionError.h"
#include "mc/deps/nether_net/ISignalingInterface.h"
#include "mc/deps/nether_net/StunRelayServer.h"
#include "mc/deps/nether_net/signaling/MessageReceived.h"
#include "mc/network/services/signaling/ISignalingJsonRpcInterop.h"
#include "mc/network/services/signaling/player_messaging/NetworkID.h"
#include "mc/platform/ErrorInfo.h"
#include "mc/platform/Result.h"
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
class IJsonRpcComponent;
class IMinecraftEventing;
class ISignalingServiceConfigProvider;
class ISignalingServiceTelemetry;
class MessageTracker;
class SignalingConsumerRefCount;
class TaskGroup;
namespace Bedrock::Http { class HeaderCollection; }
namespace Bedrock::Http { class RetryPolicy; }
namespace Bedrock::Http { struct Url; }
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
namespace Json { class Value; }
namespace JsonRpc { class JsonRpcProvider; }
namespace JsonRpc { class WebRtcComponent; }
namespace NetherNet { struct ISignalingEventHandler; }
namespace NetherNet { struct NetworkID; }
namespace PlayerMessaging { struct NetworkID; }
// clang-format on

class SignalingService : public ::Bedrock::EnableNonOwnerReferences,
                         public ::std::enable_shared_from_this<SignalingService> {
public:
    // SignalingService inner types declare
    // clang-format off
    class Connection;
    class Channel;
    class JsonRpcInterop;
    // clang-format on

    // SignalingService inner types define
    enum class ConnectionStatus : uchar {
        Connected    = 0,
        Disconnected = 1,
    };

    enum class SignInError : int {
        Ok                       = 0,
        EmptyAuthFromDiscovery   = 100,
        EmptyUrlFromDiscovery    = 101,
        ExpiredAuthFromDiscovery = 102,
    };

    class Connection : public ::Bedrock::Http::PersistentWebSocket, public ::AppPlatformListener {
    public:
        // member variables
        // NOLINTBEGIN
        // clang-format off
        ::ll::UntypedStorage<8, 88> onSignalingEvent;
        ::ll::UntypedStorage<8, 88> onStatusChanged;
        ::ll::TypedStorage<8, 16, ::PlayerMessaging::NetworkID const> mId;
        ::ll::UntypedStorage<8, 24> mServiceConfigProvider;
        ::ll::TypedStorage<8, 16, ::gsl::not_null<std::shared_ptr<ISignalingServiceTelemetry>> const> mTelemetry;
        ::ll::TypedStorage<8, 16, ::gsl::not_null<std::shared_ptr<MessageTracker>> const> mTracker;
        ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<TaskGroup>> const> mTaskGroup;
        ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mPingTime;
        ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1>>> mPingInterval;
        ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mTurnCredentialExpiration;
        ::ll::TypedStorage<8, 16, std::weak_ptr<JsonRpc::JsonRpcProvider>> mJsonRpcProvider;
        ::ll::TypedStorage<8, 16, std::weak_ptr<JsonRpc::WebRtcComponent>> mWebRtcComponent;
        ::ll::UntypedStorage<8, 48> mPendingRelayConfig;
        ::ll::UntypedStorage<4, 44> mSuspended;
        // clang-format on
        // NOLINTEND

    public:
        // prevent constructor by default
        Connection();

    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ~Connection();

        virtual void onMessage(std::string_view);

        virtual bool shouldReconnect() const;

        virtual ::Bedrock::Threading::Async<Bedrock::Http::Url> getUrl();

        virtual ::Bedrock::Threading::Async<Bedrock::Http::HeaderCollection> getHeaders();

        virtual ::Bedrock::Http::RetryPolicy getReconnectPolicy();

        virtual void onConnect();

        virtual void onDisconnect(bool, uint);

        virtual void _requestTurnConfig() const;

        virtual void _sendPing() const;

        virtual void onAppSuspended();

        virtual void onAppResumed();
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI Connection(
            ::PlayerMessaging::NetworkID,
            ::gsl::not_null<Bedrock::NonOwnerPointer<ISignalingServiceConfigProvider>>,
            ::gsl::not_null<Bedrock::NonOwnerPointer<IMinecraftEventing>>,
            std::weak_ptr<JsonRpc::JsonRpcProvider>,
            std::weak_ptr<JsonRpc::WebRtcComponent>,
            std::chrono::duration<long long, std::ratio<1, 1>> const&
        );

        MCNAPI void
        _sendTurnConfigTelemetry(::NetherNet::ESessionError, std::vector<NetherNet::StunRelayServer> const&);

        MCNAPI ::Bedrock::Threading::Async<std::error_code> connect();

        MCNAPI void onTurnConfigFailure(::Bedrock::ErrorInfo<NetherNet::ESessionError> const&);

        MCNAPI void update();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(
            ::PlayerMessaging::NetworkID,
            ::gsl::not_null<Bedrock::NonOwnerPointer<ISignalingServiceConfigProvider>>,
            ::gsl::not_null<Bedrock::NonOwnerPointer<IMinecraftEventing>>,
            std::weak_ptr<JsonRpc::JsonRpcProvider>,
            std::weak_ptr<JsonRpc::WebRtcComponent>,
            std::chrono::duration<long long, std::ratio<1, 1>> const&
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
        MCNAPI void $onMessage(std::string_view);

        MCNAPI bool $shouldReconnect() const;

        MCNAPI ::Bedrock::Threading::Async<Bedrock::Http::Url> $getUrl();

        MCNAPI ::Bedrock::Threading::Async<Bedrock::Http::HeaderCollection> $getHeaders();

        MCNAPI ::Bedrock::Http::RetryPolicy $getReconnectPolicy();

        MCNAPI void $onConnect();

        MCNAPI void $onDisconnect(bool, uint);

        MCNAPI void $_requestTurnConfig() const;

        MCNAPI void $_sendPing() const;

        MCNAPI void $onAppSuspended();

        MCNAPI void $onAppResumed();
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };

    class Channel : public ::NetherNet::ISignalingInterface {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 16, std::weak_ptr<SignalingService::Connection> const> mConnection;
        ::ll::TypedStorage<8, 16, std::weak_ptr<JsonRpc::WebRtcComponent> const>     mJsonRpcWebRtcComponent;
        // NOLINTEND

    public:
        // prevent constructor by default
        Channel();

    public:
        // virtual functions
        // NOLINTBEGIN
        // clang-format off
        virtual ~Channel();
    
        virtual void SendSignal(::NetherNet::NetworkID, ::NetherNet::NetworkID, std::string const&, std::function<void (NetherNet::ESessionError)>&&);
    
        virtual ::Bedrock::PubSub::Subscription RegisterEventHandler(::NetherNet::ISignalingEventHandler*);
        // clang-format on
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCNAPI void $SendSignal(
            ::NetherNet::NetworkID,
            ::NetherNet::NetworkID,
            std::string const&,
            std::function<void(NetherNet::ESessionError)>&&
        );

        MCNAPI ::Bedrock::PubSub::Subscription $RegisterEventHandler(::NetherNet::ISignalingEventHandler*);
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };

    class JsonRpcInterop : public ::ISignalingJsonRpcInterop {
    public:
        // JsonRpcInterop inner types define
        using GetConnection = std::function<std::shared_ptr<SignalingService::Connection>()>;

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 64> mGetConnection;
        // NOLINTEND

    public:
        // prevent constructor by default
        JsonRpcInterop();

    public:
        // virtual functions
        // NOLINTBEGIN
        // clang-format off
        virtual ~JsonRpcInterop();
    
        virtual ::Bedrock::Threading::Async<Bedrock::Result<void, NetherNet::ESessionError>> sendJsonRpcTo(::PlayerMessaging::NetworkID, std::optional<std::string> const&, std::string const&) const;
    
        virtual ::Bedrock::Threading::Async<Bedrock::Result<void, NetherNet::ESessionError>> sendJsonRpc(std::optional<std::string> const&, std::string const&) const;
    
        virtual std::shared_ptr<MessageTracker> getMessageTracker();
    
        virtual void parseSignal(::NetherNet::NetworkID, std::string, std::string);
    
        virtual void parseTurnConfig(::Json::Value const&);
    
        virtual void setTurnConfig(std::vector<NetherNet::StunRelayServer>&&, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>);
    
        virtual void onTurnConfigFailure(::Bedrock::ErrorInfo<NetherNet::ESessionError> const&);
        // clang-format on
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCNAPI ::Bedrock::Threading::Async<Bedrock::Result<void, NetherNet::ESessionError>>
        $sendJsonRpcTo(::PlayerMessaging::NetworkID, std::optional<std::string> const&, std::string const&) const;

        MCNAPI ::Bedrock::Threading::Async<Bedrock::Result<void, NetherNet::ESessionError>>
        $sendJsonRpc(std::optional<std::string> const&, std::string const&) const;

        MCNAPI std::shared_ptr<MessageTracker> $getMessageTracker();

        MCNAPI void $parseSignal(::NetherNet::NetworkID, std::string, std::string);

        MCNAPI void $parseTurnConfig(::Json::Value const&);

        MCNAPI void $setTurnConfig(
            std::vector<NetherNet::StunRelayServer>&&,
            std::chrono::
                time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>
        );

        MCNAPI void $onTurnConfigFailure(::Bedrock::ErrorInfo<NetherNet::ESessionError> const&);
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::UntypedStorage<8, 24> mEventing;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Bedrock::PubSub::Publisher<void (PlayerMessaging::NetworkID, SignalingService::ConnectionStatus), Bedrock::PubSub::ThreadModel::MultiThreaded, (Bedrock::PubSub::ReturnPolicyType)0>> const> mConnectionChanged;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ISignalingServiceConfigProvider>> mServiceConfigProvider;
    ::ll::TypedStorage<8, 16, std::shared_ptr<SignalingService::Connection>> mConnection;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mConnectionStatus;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1>>> mPingInterval;
    ::ll::TypedStorage<8, 16, std::shared_ptr<JsonRpc::JsonRpcProvider>> mJsonRpcProvider;
    ::ll::TypedStorage<8, 16, std::shared_ptr<JsonRpc::WebRtcComponent>> mWebRtcComponent;
    ::ll::TypedStorage<8, 16, std::weak_ptr<SignalingConsumerRefCount>> mSignalingConsumerRefCount;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    SignalingService();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SignalingService();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SignalingService(
        ::gsl::not_null<Bedrock::NonOwnerPointer<IMinecraftEventing>>,
        std::vector<std::shared_ptr<IJsonRpcComponent>>
    );

    MCNAPI std::shared_ptr<SignalingService::Connection> _makeConnection(::PlayerMessaging::NetworkID);

    MCNAPI void addNetworkIdMapping(::NetherNet::NetworkID, ::PlayerMessaging::NetworkID);

    MCNAPI void initialize(std::unique_ptr<ISignalingServiceConfigProvider>);

    MCNAPI bool isSignedIn() const;

    MCNAPI ::Bedrock::PubSub::Subscription
    registerOnConnectionChanged(std::function<void(PlayerMessaging::NetworkID, SignalingService::ConnectionStatus)>&&);

    MCNAPI void update();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::gsl::not_null<Bedrock::NonOwnerPointer<IMinecraftEventing>>,
        std::vector<std::shared_ptr<IJsonRpcComponent>>
    );
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
