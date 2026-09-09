#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nether_net/ESendType.h"
#include "mc/deps/nether_net/ESessionError.h"
#include "mc/deps/nether_net/INetherNetTransportInterfaceCallbacks.h"
#include "mc/deps/nether_net/NetworkID.h"
#include "mc/network/Connector.h"
#include "mc/network/RemoteConnector.h"
#include "mc/network/TransportLayer.h"
#include "mc/platform/threading/UniqueLock.h"

// auto generated forward declare list
// clang-format off
class NetherNetTransportFactory;
class NetworkIdentifier;
class PrivateKeyManager;
class WebRTCNetworkPeer;
struct ConnectionDefinition;
namespace Bedrock::Http { class LibHttpClientInstance; }
namespace Bedrock::PubSub { class Subscription; }
namespace Json { class Value; }
namespace NetherNet { class IIdentityAssertionGenerator; }
namespace NetherNet { class INetherNetTransportInterface; }
namespace NetherNet { class ISignalingInterface; }
namespace NetherNet { struct ILanEventHandler; }
namespace NetherNet { struct SessionState; }
namespace NetherNet { struct StunRelayServer; }
namespace Social { class GameConnectionInfo; }
// clang-format on

struct NetherNetConnector : public ::RemoteConnector, public ::NetherNet::INetherNetTransportInterfaceCallbacks {
public:
    // NetherNetConnector inner types declare
    // clang-format off
    struct NewIncomingConnectionEvent;
    struct NewOutgoingConnectionEvent;
    struct DisconnectEvent;
    // clang-format on

    // NetherNetConnector inner types define
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

    struct DisconnectEvent {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, ::NetherNet::NetworkID>    remoteId;
        ::ll::TypedStorage<8, 8, unsigned long long>         sessionId;
        ::ll::TypedStorage<4, 4, ::NetherNet::ESessionError> error;
        ::ll::UntypedStorage<8, 16>                          summary;
        // NOLINTEND

    public:
        // prevent constructor by default
        DisconnectEvent& operator=(DisconnectEvent const&);
        DisconnectEvent(DisconnectEvent const&);
        DisconnectEvent();
    };

    using BroadcastRequestCallback = std::function<bool(void*, int*)>;

    using BroadcastResponseCallback = std::function<void(const NetherNet::NetworkID&, const void*, int)>;

    using UniqueLock = ::Bedrock::Threading::UniqueLock<std::recursive_mutex>;

public:
    // member variables
    // NOLINTBEGIN
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
    // NOLINTEND

public:
    // prevent constructor by default
    NetherNetConnector();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~NetherNetConnector();

    virtual ::TransportLayer getNetworkType() const;

    virtual bool host(::ConnectionDefinition const&, ::PrivateKeyManager const&);

    virtual bool connect(::Social::GameConnectionInfo const&, ::Social::GameConnectionInfo const&, std::shared_ptr<NetherNet::IIdentityAssertionGenerator>);

    virtual void tick();

    virtual void runEvents();

    virtual void closeNetworkConnection(::NetworkIdentifier const&);

    virtual ::NetworkIdentifier getNetworkIdentifier() const;

    virtual bool setApplicationHandshakeCompleted(::NetworkIdentifier const&);

    virtual void setDisableLanSignaling(bool);

    virtual bool closeSessionWithUser(::NetherNet::NetworkID, unsigned long long);

    virtual void _onDisable();

    virtual void _onEnable();

    virtual void OnSpopViolation();

    virtual void OnSessionClose(::NetherNet::NetworkID, unsigned long long, ::NetherNet::ESessionError, ::Json::Value);

    virtual void OnBroadcastResponseReceived(::NetherNet::NetworkID, void const*, int);

    virtual bool OnBroadcastDiscoveryRequestReceivedGetResponse(void*, int*);

    virtual void OnSessionGetConnectionFlags(::NetherNet::NetworkID, uint*);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI NetherNetConnector(
        ::NetherNetTransportFactory const&,
        ::Connector::ConnectionCallbacks&,
        std::optional<NetherNet::NetworkID>
    );

    MCNAPI void _createEventQueue();

    MCNAPI ::gsl::not_null<std::shared_ptr<WebRTCNetworkPeer>> _getOrCreatePeer(
        ::NetherNet::NetworkID const&,
        ulong,
        bool,
        ::Bedrock::Threading::UniqueLock<std::recursive_mutex> const&
    );

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
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(::NetherNetTransportFactory const&, ::Connector::ConnectionCallbacks&, std::optional<NetherNet::NetworkID>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::TransportLayer $getNetworkType() const;

    MCNAPI bool $host(::ConnectionDefinition const&, ::PrivateKeyManager const&);

    MCNAPI bool $connect(
        ::Social::GameConnectionInfo const&,
        ::Social::GameConnectionInfo const&,
        std::shared_ptr<NetherNet::IIdentityAssertionGenerator>
    );

    MCNAPI void $tick();

    MCNAPI void $runEvents();

    MCNAPI void $closeNetworkConnection(::NetworkIdentifier const&);

    MCNAPI ::NetworkIdentifier $getNetworkIdentifier() const;

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
    // NOLINTEND
};
