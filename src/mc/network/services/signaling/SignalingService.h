#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/application/AppPlatformListener.h"
#include "mc/deps/core/http/PersistentWebSocket.h"
#include "mc/deps/core/threading/Async.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/threading/AsyncPromise.h"
#include "mc/deps/core/threading/BasicLockbox.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/nether_net/ESessionError.h"
#include "mc/deps/nether_net/ISignalingInterface.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/nether_net/StunRelayServer.h"
#include "mc/deps/nether_net/signaling/MessageReceived.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/network/services/signaling/ISignalingJsonRpcInterop.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/network/services/signaling/player_messaging/NetworkID.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/platform/ErrorInfo.h"
#include "mc/platform/Result.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/platform/brstd/move_only_function.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class IJsonRpcComponent;
class IMinecraftEventing;
#if defined(LL_PLAT_A) // @header-generator platform
class ISignalingServiceConfigProvider;
#else // @header-generator platform
#endif // @header-generator platform
class ISignalingServiceTelemetry;
class MessageTracker;
#if defined(LL_PLAT_A) // @header-generator platform
class SignalingConsumerRefCount;
class TaskGroup;
#else // @header-generator platform
#endif // @header-generator platform
namespace Bedrock::Http { class HeaderCollection; }
namespace Bedrock::Http { class RetryPolicy; }
namespace Bedrock::Http { struct Url; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
#else // @header-generator platform
namespace Bedrock::PubSub { class Subscription; }
#endif // @header-generator platform
namespace Json { class Value; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace JsonRpc { class JsonRpcProvider; }
namespace JsonRpc { class WebRtcComponent; }
#else // @header-generator platform
#endif // @header-generator platform
namespace NetherNet { struct ISignalingEventHandler; }
namespace NetherNet { struct NetworkID; }
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace NetherNet { struct StunRelayServer; }
#endif // @header-generator platform
namespace PlayerMessaging { struct NetworkID; }
// clang-format on

class SignalingService : public ::Bedrock::EnableNonOwnerReferences,
#if defined(LL_PLAT_A) // @header-generator platform
                         public ::std::enable_shared_from_this<SignalingService> {
#else // @header-generator platform
                         public ::std::enable_shared_from_this<::SignalingService> {
#endif // @header-generator platform
public:
    // SignalingService inner types declare
    // clang-format off
    class Connection;
    class Channel;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    class ConnectionSpy;
    class SignalingServiceSpy;
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
        ::ll::UntypedStorage<8, 128> mUnk306a7e;
        ::ll::UntypedStorage<8, 128> mUnkfff716;
        ::ll::UntypedStorage<8, 16>  mUnk4d866b;
        ::ll::UntypedStorage<8, 24>  mUnk57d1b0;
        ::ll::UntypedStorage<8, 16>  mUnkdf0ed3;
        ::ll::UntypedStorage<8, 16>  mUnk6cd7b9;
        ::ll::UntypedStorage<8, 8>   mUnk8dbb48;
        ::ll::UntypedStorage<8, 8>   mUnkffd797;
        ::ll::UntypedStorage<8, 8>   mUnkfce3b0;
        ::ll::UntypedStorage<8, 8>   mUnkf492c0;
        ::ll::UntypedStorage<8, 16>  mUnk8388e9;
        ::ll::UntypedStorage<8, 16>  mUnk282280;
        ::ll::UntypedStorage<8, 48>  mUnk615ddf;
        ::ll::UntypedStorage<8, 88>  mUnk2cd884;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
        Connection& operator=(Connection const&);
        Connection(Connection const&);
#endif // @header-generator platform
        Connection();

    public:
        // virtual functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        virtual ~Connection();
#else // @header-generator platform
        virtual ~Connection() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        virtual void onMessage(std::string_view);
#else // @header-generator platform
        virtual void onConnect() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        virtual bool shouldReconnect() const;
#else // @header-generator platform
        virtual void onMessage(::std::string_view incomingMessage) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        virtual ::Bedrock::Threading::Async<Bedrock::Http::Url> getUrl();
#else // @header-generator platform
        virtual bool shouldReconnect() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        virtual ::Bedrock::Threading::Async<Bedrock::Http::HeaderCollection> getHeaders();
#else // @header-generator platform
        virtual ::Bedrock::Threading::Async<::Bedrock::Http::Url> getUrl() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        virtual ::Bedrock::Http::RetryPolicy getReconnectPolicy();
#else // @header-generator platform
        virtual ::Bedrock::Threading::Async<::Bedrock::Http::HeaderCollection> getHeaders() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        virtual void onConnect();
#else // @header-generator platform
        virtual ::Bedrock::Http::RetryPolicy getReconnectPolicy() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        virtual void onDisconnect(bool, uint);
#else // @header-generator platform
        virtual void onDisconnect(bool, uint closeStatus) /*override*/;
#endif // @header-generator platform

        virtual void _requestTurnConfig() const;

        virtual void _sendPing() const;

#if defined(LL_PLAT_A) // @header-generator platform
        virtual void onAppSuspended();
#else // @header-generator platform
        virtual void onAppSuspended() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        virtual void onAppResumed();
#else // @header-generator platform
        virtual void onAppResumed() /*override*/;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI Connection(
            ::PlayerMessaging::NetworkID,
            ::gsl::not_null<Bedrock::NonOwnerPointer<ISignalingServiceConfigProvider>>,
            ::gsl::not_null<Bedrock::NonOwnerPointer<IMinecraftEventing>>,
            std::weak_ptr<JsonRpc::JsonRpcProvider>,
            std::weak_ptr<JsonRpc::WebRtcComponent>,
            std::chrono::duration<long long, std::ratio<1, 1>> const&
#else // @header-generator platform
        MCNAPI void _sendTurnConfigTelemetry(
            ::NetherNet::ESessionError                         result,
            ::std::vector<::NetherNet::StunRelayServer> const& config
#endif // @header-generator platform
        );

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI void
        _sendTurnConfigTelemetry(::NetherNet::ESessionError, std::vector<NetherNet::StunRelayServer> const&);

        MCNAPI ::Bedrock::Threading::Async<std::error_code> connect();

        MCNAPI void onTurnConfigFailure(::Bedrock::ErrorInfo<NetherNet::ESessionError> const&);
#else // @header-generator platform
        MCNAPI ::Bedrock::Threading::Async<::std::error_code> connect();
#endif // @header-generator platform

        MCNAPI void update();
        // NOLINTEND

    public:
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#endif // @header-generator platform
        // virtual function thunks
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI void $onMessage(std::string_view);
#else // @header-generator platform
        MCNAPI void $onConnect();

        MCNAPI void $onMessage(::std::string_view incomingMessage);
#endif // @header-generator platform

        MCNAPI bool $shouldReconnect() const;

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI ::Bedrock::Threading::Async<Bedrock::Http::Url> $getUrl();
#else // @header-generator platform
        MCNAPI ::Bedrock::Threading::Async<::Bedrock::Http::Url> $getUrl();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI ::Bedrock::Threading::Async<Bedrock::Http::HeaderCollection> $getHeaders();
#else // @header-generator platform
        MCNAPI ::Bedrock::Threading::Async<::Bedrock::Http::HeaderCollection> $getHeaders();
#endif // @header-generator platform

        MCNAPI ::Bedrock::Http::RetryPolicy $getReconnectPolicy();

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI void $onConnect();

        MCNAPI void $onDisconnect(bool, uint);
#else // @header-generator platform
        MCNAPI void $onDisconnect(bool, uint closeStatus);
#endif // @header-generator platform

        MCNAPI void $_requestTurnConfig() const;

        MCNAPI void $_sendPing() const;

        MCNAPI void $onAppSuspended();

        MCNAPI void $onAppResumed();
#if defined(LL_PLAT_A) // @header-generator platform
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

    class Channel : public ::NetherNet::ISignalingInterface {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 16, std::weak_ptr<SignalingService::Connection> const> mConnection;
        ::ll::TypedStorage<8, 16, std::weak_ptr<JsonRpc::WebRtcComponent> const>     mJsonRpcWebRtcComponent;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 16> mUnk4edbb4;
        ::ll::UntypedStorage<8, 16> mUnkb6642a;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
        Channel& operator=(Channel const&);
        Channel(Channel const&);
#endif // @header-generator platform
        Channel();

    public:
        // virtual functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        // clang-format off
        virtual ~Channel();
    
        virtual void SendSignal(::NetherNet::NetworkID, ::NetherNet::NetworkID, std::string const&, std::function<void (NetherNet::ESessionError)>&&);
    
        virtual ::Bedrock::PubSub::Subscription RegisterEventHandler(::NetherNet::ISignalingEventHandler*);
        // clang-format on
        // NOLINTEND
#else // @header-generator platform
        virtual ~Channel() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
#else // @header-generator platform
        virtual void SendSignal(
            ::NetherNet::NetworkID                              from,
            ::NetherNet::NetworkID                              to,
            ::std::string const&                                message,
            ::std::function<void(::NetherNet::ESessionError)>&& onComplete
        ) /*override*/;

        virtual ::Bedrock::PubSub::Subscription
        RegisterEventHandler(::NetherNet::ISignalingEventHandler* handler) /*override*/;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCNAPI void $SendSignal(
#if defined(LL_PLAT_A) // @header-generator platform
            ::NetherNet::NetworkID,
            ::NetherNet::NetworkID,
            std::string const&,
            std::function<void(NetherNet::ESessionError)>&&
#else // @header-generator platform
            ::NetherNet::NetworkID                              from,
            ::NetherNet::NetworkID                              to,
            ::std::string const&                                message,
            ::std::function<void(::NetherNet::ESessionError)>&& onComplete
#endif // @header-generator platform
        );

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI ::Bedrock::PubSub::Subscription $RegisterEventHandler(::NetherNet::ISignalingEventHandler*);
        // NOLINTEND
#else // @header-generator platform
        MCNAPI ::Bedrock::PubSub::Subscription $RegisterEventHandler(::NetherNet::ISignalingEventHandler* handler);
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

#if defined(LL_PLAT_A) // @header-generator platform
    class JsonRpcInterop : public ::ISignalingJsonRpcInterop {
    public:
        // JsonRpcInterop inner types define
        using GetConnection = std::function<std::shared_ptr<SignalingService::Connection>()>;
#else // @header-generator platform
    class ConnectionSpy {};
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    class SignalingServiceSpy {};

    class JsonRpcInterop : public ::ISignalingJsonRpcInterop {
#endif // @header-generator platform
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::UntypedStorage<8, 64> mGetConnection;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 64> mUnk4b3ca3;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
        JsonRpcInterop& operator=(JsonRpcInterop const&);
        JsonRpcInterop(JsonRpcInterop const&);
#endif // @header-generator platform
        JsonRpcInterop();

    public:
        // virtual functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
        virtual ~JsonRpcInterop() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
#else // @header-generator platform
        virtual ::Bedrock::Threading::Async<::Bedrock::Result<void, ::NetherNet::ESessionError>> sendJsonRpcTo(
            ::PlayerMessaging::NetworkID          networkIdTo,
            ::std::optional<::std::string> const& messageId,
            ::std::string const&                  message
        ) const /*override*/;

        virtual ::Bedrock::Threading::Async<::Bedrock::Result<void, ::NetherNet::ESessionError>>
        sendJsonRpc(::std::optional<::std::string> const& messageId, ::std::string const& message) const /*override*/;

        virtual ::std::shared_ptr<::MessageTracker> getMessageTracker() /*override*/;

        virtual void
        parseSignal(::NetherNet::NetworkID fromNetworkID, ::std::string message, ::std::string messageId) /*override*/;

        virtual void parseTurnConfig(::Json::Value const& config) /*override*/;

        virtual void setTurnConfig(
            ::std::vector<::NetherNet::StunRelayServer>&& config,
            ::std::chrono::steady_clock::time_point       expiration
        ) /*override*/;

        virtual void onTurnConfigFailure(::Bedrock::ErrorInfo<::NetherNet::ESessionError> const& error) /*override*/;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI ::Bedrock::Threading::Async<Bedrock::Result<void, NetherNet::ESessionError>>
        $sendJsonRpcTo(::PlayerMessaging::NetworkID, std::optional<std::string> const&, std::string const&) const;
#else // @header-generator platform
        MCNAPI ::Bedrock::Threading::Async<::Bedrock::Result<void, ::NetherNet::ESessionError>> $sendJsonRpcTo(
            ::PlayerMessaging::NetworkID          networkIdTo,
            ::std::optional<::std::string> const& messageId,
            ::std::string const&                  message
        ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI ::Bedrock::Threading::Async<Bedrock::Result<void, NetherNet::ESessionError>>
        $sendJsonRpc(std::optional<std::string> const&, std::string const&) const;
#else // @header-generator platform
        MCNAPI ::Bedrock::Threading::Async<::Bedrock::Result<void, ::NetherNet::ESessionError>>
        $sendJsonRpc(::std::optional<::std::string> const& messageId, ::std::string const& message) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI std::shared_ptr<MessageTracker> $getMessageTracker();
#else // @header-generator platform
        MCNAPI ::std::shared_ptr<::MessageTracker> $getMessageTracker();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI void $parseSignal(::NetherNet::NetworkID, std::string, std::string);
#else // @header-generator platform
        MCNAPI void $parseSignal(::NetherNet::NetworkID fromNetworkID, ::std::string message, ::std::string messageId);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI void $parseTurnConfig(::Json::Value const&);
#else // @header-generator platform
        MCNAPI void $parseTurnConfig(::Json::Value const& config);
#endif // @header-generator platform

        MCNAPI void $setTurnConfig(
#if defined(LL_PLAT_A) // @header-generator platform
            std::vector<NetherNet::StunRelayServer>&&,
            std::chrono::
                time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>
#else // @header-generator platform
            ::std::vector<::NetherNet::StunRelayServer>&& config,
            ::std::chrono::steady_clock::time_point       expiration
#endif // @header-generator platform
        );

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI void $onTurnConfigFailure(::Bedrock::ErrorInfo<NetherNet::ESessionError> const&);
        // NOLINTEND
#else // @header-generator platform
        MCNAPI void $onTurnConfigFailure(::Bedrock::ErrorInfo<::NetherNet::ESessionError> const& error);
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

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::UntypedStorage<8, 24> mUnk189d42;
    ::ll::UntypedStorage<8, 8>  mUnk9bd0b9;
    ::ll::UntypedStorage<8, 8>  mUnka6149a;
    ::ll::UntypedStorage<8, 16> mUnk4684f9;
    ::ll::UntypedStorage<8, 16> mUnk66d5f0;
    ::ll::UntypedStorage<8, 8>  mUnkb4662a;
    ::ll::UntypedStorage<8, 16> mUnk8ed84c;
    ::ll::UntypedStorage<8, 16> mUnk6ee143;
    ::ll::UntypedStorage<8, 16> mUnkf22bbd;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    SignalingService& operator=(SignalingService const&);
    SignalingService(SignalingService const&);
#endif // @header-generator platform
    SignalingService();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~SignalingService();
#else // @header-generator platform
    virtual ~SignalingService() /*override*/ = default;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SignalingService(
#if defined(LL_PLAT_A) // @header-generator platform
        ::gsl::not_null<Bedrock::NonOwnerPointer<IMinecraftEventing>>,
        std::vector<std::shared_ptr<IJsonRpcComponent>>
#else // @header-generator platform
        ::Bedrock::NotNullNonOwnerPtr<::IMinecraftEventing>   eventing,
        ::std::vector<::std::shared_ptr<::IJsonRpcComponent>> additionalJsonRpcComponents
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::shared_ptr<SignalingService::Connection> _makeConnection(::PlayerMessaging::NetworkID);
#else // @header-generator platform
    MCNAPI ::std::shared_ptr<::SignalingService::Connection> _makeConnection(::PlayerMessaging::NetworkID id);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addNetworkIdMapping(::NetherNet::NetworkID, ::PlayerMessaging::NetworkID);

    MCNAPI void initialize(std::unique_ptr<ISignalingServiceConfigProvider>);

    MCNAPI bool isSignedIn() const;

    MCNAPI ::Bedrock::PubSub::Subscription
    registerOnConnectionChanged(std::function<void(PlayerMessaging::NetworkID, SignalingService::ConnectionStatus)>&&);

    MCNAPI void update();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void addNetworkIdMapping(::NetherNet::NetworkID nethernetId, ::PlayerMessaging::NetworkID playerMessagingId);

    MCNAPI ::std::shared_ptr<::ISignalingServiceTelemetry const> getTelemetry() const;
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
#if defined(LL_PLAT_A) // @header-generator platform
        ::gsl::not_null<Bedrock::NonOwnerPointer<IMinecraftEventing>>,
        std::vector<std::shared_ptr<IJsonRpcComponent>>
#else // @header-generator platform
        ::Bedrock::NotNullNonOwnerPtr<::IMinecraftEventing>   eventing,
        ::std::vector<::std::shared_ptr<::IJsonRpcComponent>> additionalJsonRpcComponents
#endif // @header-generator platform
    );
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

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
#else // @header-generator platform
#endif // @header-generator platform
};
