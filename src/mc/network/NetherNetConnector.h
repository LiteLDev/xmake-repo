#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/nether_net/ESendType.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/nether_net/ESessionError.h"
#include "mc/deps/nether_net/INetherNetTransportInterfaceCallbacks.h"
#include "mc/deps/nether_net/NetworkID.h"
#include "mc/network/Connector.h"
#include "mc/network/RemoteConnector.h"
#include "mc/network/TransportLayer.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/platform/threading/Mutex.h"
#endif // @header-generator platform
#include "mc/platform/threading/UniqueLock.h"

// auto generated forward declare list
// clang-format off
class NetherNetTransportFactory;
class NetworkIdentifier;
class PrivateKeyManager;
class WebRTCNetworkPeer;
struct ConnectionDefinition;
namespace Bedrock::Http { class LibHttpClientInstance; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Bedrock::PubSub { class Subscription; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Json { class Value; }
namespace NetherNet { class IIdentityAssertionGenerator; }
namespace NetherNet { class INetherNetTransportInterface; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace NetherNet { class ISignalingInterface; }
namespace NetherNet { struct ILanEventHandler; }
namespace NetherNet { struct SessionState; }
namespace NetherNet { struct StunRelayServer; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Social { class GameConnectionInfo; }
// clang-format on

struct NetherNetConnector : public ::RemoteConnector, public ::NetherNet::INetherNetTransportInterfaceCallbacks {
public:
    // NetherNetConnector inner types declare
    // clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct DisconnectEvent;
#endif // @header-generator platform
    struct NewIncomingConnectionEvent;
    struct NewOutgoingConnectionEvent;
#if defined(LL_PLAT_A) // @header-generator platform
    struct DisconnectEvent;
#else // @header-generator platform
#endif // @header-generator platform
    // clang-format on

    // NetherNetConnector inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct NewIncomingConnectionEvent {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 16, ::gsl::not_null<std::shared_ptr<WebRTCNetworkPeer>>> peer;
        // NOLINTEND

    public:
        // prevent constructor by default
        NewIncomingConnectionEvent& operator=(NewIncomingConnectionEvent const&);
        NewIncomingConnectionEvent();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~NewIncomingConnectionEvent();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct NewOutgoingConnectionEvent {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 16, ::gsl::not_null<std::shared_ptr<WebRTCNetworkPeer>>> peer;
        // NOLINTEND

    public:
        // prevent constructor by default
        NewOutgoingConnectionEvent& operator=(NewOutgoingConnectionEvent const&);
        NewOutgoingConnectionEvent();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~NewOutgoingConnectionEvent();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

#else // @header-generator platform
#endif // @header-generator platform
    struct DisconnectEvent {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 24, ::NetherNet::NetworkID>    remoteId;
        ::ll::TypedStorage<8, 8, unsigned long long>         sessionId;
        ::ll::TypedStorage<4, 4, ::NetherNet::ESessionError> error;
        ::ll::UntypedStorage<8, 16>                          summary;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 24> mUnk7dfb60;
        ::ll::UntypedStorage<8, 8>  mUnk3ff588;
        ::ll::UntypedStorage<4, 4>  mUnkabfbdc;
        ::ll::UntypedStorage<8, 16> mUnkb65022;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // prevent constructor by default
        DisconnectEvent& operator=(DisconnectEvent const&);
        DisconnectEvent(DisconnectEvent const&);
        DisconnectEvent();
    };

#if defined(LL_PLAT_A) // @header-generator platform
    using BroadcastRequestCallback = std::function<bool(void*, int*)>;
#else // @header-generator platform
    struct NewIncomingConnectionEvent {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16> mUnk7e0875;
        // NOLINTEND
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    using BroadcastResponseCallback = std::function<void(const NetherNet::NetworkID&, const void*, int)>;
#else // @header-generator platform
    public:
        // prevent constructor by default
        NewIncomingConnectionEvent& operator=(NewIncomingConnectionEvent const&);
        NewIncomingConnectionEvent(NewIncomingConnectionEvent const&);
        NewIncomingConnectionEvent();
    };
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    using UniqueLock = ::Bedrock::Threading::UniqueLock<std::recursive_mutex>;
#else // @header-generator platform
    struct NewOutgoingConnectionEvent {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16> mUnk7af0fc;
        // NOLINTEND

    public:
        // prevent constructor by default
        NewOutgoingConnectionEvent& operator=(NewOutgoingConnectionEvent const&);
        NewOutgoingConnectionEvent(NewOutgoingConnectionEvent const&);
        NewOutgoingConnectionEvent();
    };

    using BroadcastRequestCallback = ::std::function<bool(void*, int*)>;

    using BroadcastResponseCallback = ::std::function<void(::NetherNet::NetworkID const&, void const*, int)>;

    using Event = ::std::variant<
        ::NetherNetConnector::NewIncomingConnectionEvent,
        ::NetherNetConnector::NewOutgoingConnectionEvent,
        ::NetherNetConnector::DisconnectEvent>;

    using UniqueLock = ::Bedrock::Threading::UniqueLock<::std::recursive_mutex>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 16, std::shared_ptr<Bedrock::Http::LibHttpClientInstance> const> mHttpLibrary;
    ::ll::TypedStorage<8, 24, ::NetherNet::NetworkID const> mNetworkID;
    ::ll::UntypedStorage<8, 64> mTransport;
    ::ll::UntypedStorage<4, 48> mBroadcastCallbackMutex;
    ::ll::UntypedStorage<8, 48> mBroadcastRequestCallback;
    ::ll::UntypedStorage<8, 48> mBroadcastResponseCallback;
    ::ll::TypedStorage<4, 40, std::recursive_mutex> mEventsMutex;
    ::ll::TypedStorage<8, 8, std::unique_ptr<std::vector<std::variant<NetherNetConnector::NewIncomingConnectionEvent, NetherNetConnector::NewOutgoingConnectionEvent, NetherNetConnector::DisconnectEvent>>>> mEvents;
    ::ll::UntypedStorage<8, 32> mPeers;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Bedrock::Http::LibHttpClientInstance> const> mHttpLibrary;
    ::ll::TypedStorage<8, 24, ::NetherNet::NetworkID const>                                    mNetworkID;
    ::ll::TypedStorage<
        8,
        72,
        ::std::unique_ptr<
            ::NetherNet::INetherNetTransportInterface,
            ::std::function<void(::NetherNet::INetherNetTransportInterface*)>>>
                                                                  mTransport;
    ::ll::TypedStorage<8, 80, ::Bedrock::Threading::Mutex>        mBroadcastCallbackMutex;
    ::ll::TypedStorage<8, 64, ::std::function<bool(void*, int*)>> mBroadcastRequestCallback;
    ::ll::TypedStorage<8, 64, ::std::function<void(::NetherNet::NetworkID const&, void const*, int)>>
                                                      mBroadcastResponseCallback;
    ::ll::TypedStorage<8, 80, ::std::recursive_mutex> mEventsMutex;
    ::ll::TypedStorage<
        8,
        8,
        ::std::unique_ptr<::std::vector<::std::variant<
            ::NetherNetConnector::NewIncomingConnectionEvent,
            ::NetherNetConnector::NewOutgoingConnectionEvent,
            ::NetherNetConnector::DisconnectEvent>>>>
                                                                                   mEvents;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::weak_ptr<::WebRTCNetworkPeer>>> mPeers;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    NetherNetConnector();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~NetherNetConnector();
#else // @header-generator platform
    virtual ~NetherNetConnector() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::TransportLayer getNetworkType() const;
#else // @header-generator platform
    virtual bool closeSessionWithUser(::NetherNet::NetworkID remoteId, uint64 sessionId);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool host(::ConnectionDefinition const&, ::PrivateKeyManager const&);
#else // @header-generator platform
    virtual void setDisableLanSignaling(bool disableLanSignaling) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool connect(::Social::GameConnectionInfo const&, ::Social::GameConnectionInfo const&, std::shared_ptr<NetherNet::IIdentityAssertionGenerator>);
#else // @header-generator platform
    virtual bool host(::ConnectionDefinition const& definition, ::PrivateKeyManager const& keys) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void tick();
#else // @header-generator platform
#ifdef LL_PLAT_S
    virtual bool connect(
        ::Social::GameConnectionInfo const&,
        ::Social::GameConnectionInfo const&,
        ::std::shared_ptr<::NetherNet::IIdentityAssertionGenerator>
    ) /*override*/;
#else // LL_PLAT_C
    virtual bool connect(
        ::Social::GameConnectionInfo const&                         primaryConnection,
        ::Social::GameConnectionInfo const&                         backupConnection,
        ::std::shared_ptr<::NetherNet::IIdentityAssertionGenerator> identityGenerator
    ) /*override*/;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void runEvents();
#else // @header-generator platform
    virtual void tick() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void closeNetworkConnection(::NetworkIdentifier const&);
#else // @header-generator platform
    virtual void runEvents() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::NetworkIdentifier getNetworkIdentifier() const;
#else // @header-generator platform
    virtual ::NetworkIdentifier getNetworkIdentifier() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool setApplicationHandshakeCompleted(::NetworkIdentifier const&);
#else // @header-generator platform
    virtual void closeNetworkConnection(::NetworkIdentifier const&) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setDisableLanSignaling(bool);
#else // @header-generator platform
    virtual bool setApplicationHandshakeCompleted(::NetworkIdentifier const&) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool closeSessionWithUser(::NetherNet::NetworkID, unsigned long long);
#else // @header-generator platform
    virtual ::TransportLayer getNetworkType() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void _onDisable();
#else // @header-generator platform
    virtual void _onDisable() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void _onEnable();
#else // @header-generator platform
    virtual void _onEnable() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void OnSpopViolation();
#else // @header-generator platform
    virtual void OnSpopViolation() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void OnSessionClose(::NetherNet::NetworkID, unsigned long long, ::NetherNet::ESessionError, ::Json::Value);
#else // @header-generator platform
    virtual void OnSessionClose(
        ::NetherNet::NetworkID     networkID,
        uint64                     sessionId,
        ::NetherNet::ESessionError sessionError,
        ::Json::Value              summary
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void OnBroadcastResponseReceived(::NetherNet::NetworkID, void const*, int);
#else // @header-generator platform
    virtual void
    OnBroadcastResponseReceived(::NetherNet::NetworkID networkID, void const* pApplicationData, int size) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool OnBroadcastDiscoveryRequestReceivedGetResponse(void*, int*);
#else // @header-generator platform
    virtual bool OnBroadcastDiscoveryRequestReceivedGetResponse(void* pApplicationData, int* pSize) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void OnSessionGetConnectionFlags(::NetherNet::NetworkID, uint*);
    // clang-format on
#else // @header-generator platform
    virtual void OnSessionGetConnectionFlags(::NetherNet::NetworkID, uint* flags) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI NetherNetConnector(
        ::NetherNetTransportFactory const&,
        ::Connector::ConnectionCallbacks&,
        std::optional<NetherNet::NetworkID>
#else // @header-generator platform
    MCAPI NetherNetConnector(
        ::NetherNetTransportFactory const&      factory,
        ::Connector::ConnectionCallbacks&       callbacks,
        ::std::optional<::NetherNet::NetworkID> networkId
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _createEventQueue();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void _createEventQueue();

    MCAPI ::gsl::not_null<::std::shared_ptr<::WebRTCNetworkPeer>> _getOrCreatePeer(
        ::NetherNet::NetworkID const& remoteId,
        uint64                        sessionId,
        bool                          isLan,
        ::Bedrock::Threading::UniqueLock<::std::recursive_mutex> const&
    );
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::gsl::not_null<std::shared_ptr<WebRTCNetworkPeer>> _getOrCreatePeer(
        ::NetherNet::NetworkID const&,
        ulong,
        bool,
        ::Bedrock::Threading::UniqueLock<std::recursive_mutex> const&
    );
#else // @header-generator platform
    MCAPI void setBroadcastRequestCallback(::std::function<bool(void*, int*)>&& broadcastRequestCallback);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _queueIncomingConnectionEvent(::NetherNet::NetworkID, unsigned long long, bool);

    MCNAPI void _queueOutgoingConnectionEvent(::NetherNet::NetworkID, unsigned long long, bool);

    MCNAPI void _resetEventQueue();

    MCNAPI ::NetherNet::NetworkID const& getNetworkID() const;

    MCNAPI bool getSessionState(::NetherNet::NetworkID, unsigned long long, ::NetherNet::SessionState*) const;

    MCNAPI bool isPacketAvailable(::NetherNet::NetworkID, unsigned long long, uint*) const;

    MCNAPI bool readPacket(::NetherNet::NetworkID, unsigned long long, void*, uint, uint*) const;

    MCNAPI ::Bedrock::PubSub::Subscription registerLanEventHandler(::NetherNet::ILanEventHandler*) const;

    MCNAPI bool
    sendPacket(::NetherNet::NetworkID, unsigned long long, std::string const&, ::NetherNet::ESendType) const;

    MCNAPI void setRelayConfig(std::vector<NetherNet::StunRelayServer> const&) const;

    MCNAPI void setSignalingInterface(std::shared_ptr<NetherNet::ISignalingInterface>&&) const;
#else // @header-generator platform
    MCAPI void setBroadcastResponseCallback(
        ::std::function<void(::NetherNet::NetworkID const&, void const*, int)>&& broadcastResponseCallback
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void*
    $ctor(::NetherNetTransportFactory const&, ::Connector::ConnectionCallbacks&, std::optional<NetherNet::NetworkID>);
#else // @header-generator platform
    MCAPI void* $ctor(
        ::NetherNetTransportFactory const&      factory,
        ::Connector::ConnectionCallbacks&       callbacks,
        ::std::optional<::NetherNet::NetworkID> networkId
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::TransportLayer $getNetworkType() const;
#else // @header-generator platform
    MCAPI bool $closeSessionWithUser(::NetherNet::NetworkID remoteId, uint64 sessionId);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $host(::ConnectionDefinition const&, ::PrivateKeyManager const&);
#else // @header-generator platform
    MCAPI void $setDisableLanSignaling(bool disableLanSignaling);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $connect(
        ::Social::GameConnectionInfo const&,
        ::Social::GameConnectionInfo const&,
        std::shared_ptr<NetherNet::IIdentityAssertionGenerator>
#else // @header-generator platform
    MCFOLD bool $host(::ConnectionDefinition const& definition, ::PrivateKeyManager const& keys);

#ifdef LL_PLAT_S
    MCAPI bool $connect(
        ::Social::GameConnectionInfo const&,
        ::Social::GameConnectionInfo const&,
        ::std::shared_ptr<::NetherNet::IIdentityAssertionGenerator>
    );
#else // LL_PLAT_C
    MCAPI bool $connect(
        ::Social::GameConnectionInfo const&                         primaryConnection,
        ::Social::GameConnectionInfo const&                         backupConnection,
        ::std::shared_ptr<::NetherNet::IIdentityAssertionGenerator> identityGenerator
    );
#endif

    MCFOLD void $tick();

    MCAPI void $runEvents();

    MCAPI ::NetworkIdentifier $getNetworkIdentifier() const;

    MCFOLD void $closeNetworkConnection(::NetworkIdentifier const&);

    MCFOLD bool $setApplicationHandshakeCompleted(::NetworkIdentifier const&);

    MCFOLD ::TransportLayer $getNetworkType() const;

    MCFOLD void $_onDisable();

    MCFOLD void $_onEnable();

    MCFOLD void $OnSpopViolation();

    MCAPI void $OnSessionClose(
        ::NetherNet::NetworkID     networkID,
        uint64                     sessionId,
        ::NetherNet::ESessionError sessionError,
        ::Json::Value              summary
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $tick();
#else // @header-generator platform
    MCAPI void $OnBroadcastResponseReceived(::NetherNet::NetworkID networkID, void const* pApplicationData, int size);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $runEvents();
#else // @header-generator platform
    MCAPI bool $OnBroadcastDiscoveryRequestReceivedGetResponse(void* pApplicationData, int* pSize);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $closeNetworkConnection(::NetworkIdentifier const&);
#else // @header-generator platform
    MCAPI void $OnSessionGetConnectionFlags(::NetherNet::NetworkID, uint* flags);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::NetworkIdentifier $getNetworkIdentifier() const;
#else // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $setApplicationHandshakeCompleted(::NetworkIdentifier const&);

    MCNAPI void $setDisableLanSignaling(bool);

    MCNAPI bool $closeSessionWithUser(::NetherNet::NetworkID, unsigned long long);

    MCNAPI void $_onDisable();

    MCNAPI void $_onEnable();

    MCNAPI void $OnSpopViolation();

    MCNAPI void $OnSessionClose(::NetherNet::NetworkID, unsigned long long, ::NetherNet::ESessionError, ::Json::Value);

    MCNAPI void $OnBroadcastResponseReceived(::NetherNet::NetworkID, void const*, int);

    MCNAPI bool $OnBroadcastDiscoveryRequestReceivedGetResponse(void*, int*);

    MCNAPI void $OnSessionGetConnectionFlags(::NetherNet::NetworkID, uint*);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND
};
