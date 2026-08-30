#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/utility/BinaryStream.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Connector.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#include "mc/network/DevConnectionQuality.h"
#include "mc/network/NetworkEnableDisableListener.h"
#include "mc/network/NetworkSettingOptions.h"
#include "mc/network/PacketCompressionAlgorithm.h"
#include "mc/network/PacketGroupDefinition.h"
#include "mc/network/RakNetConnector.h"
#include "mc/network/RakPeerHelper.h"
#include "mc/network/TransportLayer.h"
#include "mc/network/connection/DisconnectFailReason.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
class CompressedNetworkPeer;
class EncryptedNetworkPeer;
class IPacketObserver;
class IPacketSecurityController;
class IPacketSerializationController;
class LocalConnector;
class NetEventCallback;
class NetworkConnection;
class NetworkIdentifier;
class NetworkPacketRecorder;
class NetworkPeer;
class NetworkSessionOwner;
class NetworkStatistics;
class Packet;
class RemoteConnector;
class Scheduler;
class ServerLocator;
class TaskGroup;
class WeakEntityRef;
struct NetworkIdentifierWithSubId;
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
namespace Json { class Value; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class NetworkSystem : public ::RakNetConnector::ConnectionCallbacks,
                      public ::RakPeerHelper::IPSupportInterface,
                      public ::NetworkEnableDisableListener {
public:
    // NetworkSystem inner types declare
    // clang-format off
    struct IncomingPacketQueue;
    struct Dependencies;
    // clang-format on

    // NetworkSystem inner types define
    struct IncomingPacketQueue {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::NetEventCallback&> mCallbacksObj;
        // NOLINTEND

    public:
        // prevent constructor by default
        IncomingPacketQueue& operator=(IncomingPacketQueue const&);
        IncomingPacketQueue(IncomingPacketQueue const&);
        IncomingPacketQueue();
    };

    struct Dependencies {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, std::reference_wrapper<Scheduler>>               receiveThread;
        ::ll::TypedStorage<8, 8, std::unique_ptr<RemoteConnector>>                remoteConnector;
        ::ll::TypedStorage<8, 8, std::unique_ptr<ServerLocator>>                  serverLocator;
        ::ll::UntypedStorage<8, 24>                                               appPlatform;
        ::ll::UntypedStorage<8, 24>                                               networkSessionOwner;
        ::ll::TypedStorage<4, 20, ::NetworkSettingOptions>                        networkSettingOptions;
        ::ll::TypedStorage<8, 8, std::unique_ptr<IPacketSerializationController>> serializationController;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~Dependencies();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    using IncomingPacketQueueArray = std::unique_ptr<NetworkSystem::IncomingPacketQueue>[4];

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::UntypedStorage<8, 24> mNetworkSessionOwner;
    ::ll::TypedStorage<4, 40, std::recursive_mutex> mConnectionsMutex;
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<NetworkConnection>>> mConnections;
    ::ll::TypedStorage<8, 16, std::shared_ptr<LocalConnector>> mLocalConnector;
    ::ll::UntypedStorage<8, 16> mPacketGroupBuilder;
    ::ll::TypedStorage<8, 8, std::unique_ptr<RemoteConnector>> mRemoteConnector;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ServerLocator>> mServerLocator;
    ::ll::TypedStorage<8, 8, ulong> mCurrentConnection;
    ::ll::UntypedStorage<8, 16> mReceiveTask;
    ::ll::TypedStorage<8, 8, std::unique_ptr<TaskGroup>> mReceiveTaskGroup;
    ::ll::UntypedStorage<8, 24> mPacketObserver;
    ::ll::TypedStorage<8, 8, ::Scheduler&> mMainThread;
    ::ll::TypedStorage<8, 24, std::string> mReceiveBuffer;
    ::ll::TypedStorage<8, 24, std::string> mSendBuffer;
    ::ll::TypedStorage<8, 72, ::BinaryStream> mSendStream;
    ::ll::TypedStorage<8, 32, std::unique_ptr<NetworkSystem::IncomingPacketQueue>[4]> mIncomingPackets;
    ::ll::TypedStorage<1, 1, bool> mUseIPv6Only;
    ::ll::TypedStorage<2, 2, ushort> mDefaultGamePort;
    ::ll::TypedStorage<2, 2, ushort> mDefaultGamePortv6;
    ::ll::TypedStorage<1, 1, bool> mIsLanDiscoveryEnabled;
    ::ll::TypedStorage<8, 8, std::unique_ptr<NetworkStatistics>> mNetworkStatistics;
    ::ll::TypedStorage<1, 1, bool> mWebsocketsEnabled;
    ::ll::TypedStorage<4, 20, ::NetworkSettingOptions> mNetworkSettingOptions;
    ::ll::TypedStorage<1, 1, bool> mRawRecordingEnabled;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<cereal::ReflectionCtx>>> mReflectionCtx;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<IPacketSerializationController>>> mPacketOverrides;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<Bedrock::PubSub::Publisher<void (const Json::Value&), Bedrock::PubSub::ThreadModel::MultiThreaded, (Bedrock::PubSub::ReturnPolicyType)0>>>> mSessionSummaryPublisher;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    NetworkSystem& operator=(NetworkSystem const&);
    NetworkSystem(NetworkSystem const&);
    NetworkSystem();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~NetworkSystem();

    virtual bool onNewIncomingConnection(::NetworkIdentifier const&, std::shared_ptr<NetworkPeer>&&);

    virtual bool onNewOutgoingConnection(::NetworkIdentifier const&, std::shared_ptr<NetworkPeer>&&);

    virtual void onConnectionClosed(::NetworkIdentifier const&, ::Connection::DisconnectFailReason const, std::string const&, std::string const&, bool, ::Json::Value const&);

    virtual void onAllConnectionsClosed(::Connection::DisconnectFailReason, bool);

    virtual void onAllRemoteConnectionsClosed(::Connection::DisconnectFailReason, bool);

    virtual void onOutgoingConnectionFailed(::Connection::DisconnectFailReason);

    virtual void onWebsocketRequest(std::string const&, std::string const&, std::function<void ()>);

    virtual bool useIPv4Only() const;

    virtual bool useIPv6Only() const;

    virtual ushort getDefaultGamePort() const;

    virtual ushort getDefaultGamePortv6() const;

    virtual void _onDisable();

    virtual void _onEnable();
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit NetworkSystem(::NetworkSystem::Dependencies&&);

    MCNAPI ::TransportLayer _getTransportLayer() const;

    MCNAPI void _initNetworkStatistics(std::unique_ptr<NetworkStatistics>&&);

    MCNAPI bool _isUsingNetherNetTransportLayer() const;

    MCNAPI void _sendInternal(::NetworkIdentifier const&, ::Packet const&, std::string const&);

    MCNAPI void _setDisableLanSignaling(bool);

    MCNAPI void
    closeConnection(::NetworkIdentifier const&, ::Connection::DisconnectFailReason const, std::string const&);

    MCNAPI void disconnect();

    MCNAPI void enableAsyncFlush(::NetworkIdentifier const&);

    MCNAPI void flush(::NetworkIdentifier const&, std::function<void()>&&);

    MCNAPI std::weak_ptr<CompressedNetworkPeer> getCompressedPeerForUser(::NetworkIdentifier const&);

    MCNAPI std::vector<std::unique_ptr<NetworkConnection>> const& getConnections() const;

    MCNAPI std::weak_ptr<EncryptedNetworkPeer> getEncryptedPeerForUser(::NetworkIdentifier const&);

    MCNAPI ::NetworkPeer* getPeerForUser(::NetworkIdentifier const&);

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<RemoteConnector>> getRemoteConnector();

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<const RemoteConnector>> getRemoteConnector() const;

    MCNAPI ::ServerLocator& getServerLocator();

    MCNAPI ::Bedrock::PubSub::Connector<void(const Json::Value&)>& getSessionSummaryCallback();

    MCNAPI bool hasNetworkSession() const;

    MCNAPI bool isServer() const;

    MCNAPI void registerClientInstance(::NetEventCallback&, ::SubClientId);

    MCNAPI void registerServerInstance(::NetEventCallback&);

    MCNAPI void runEvents(bool);

    MCNAPI void send(::NetworkIdentifier const&, ::Packet const&, ::SubClientId const);

    MCNAPI void sendToMultiple(std::vector<NetworkIdentifierWithSubId> const&, ::Packet const&);

    MCNAPI void setCloseConnection(::NetworkIdentifier const&, ::Connection::DisconnectFailReason);

    MCNAPI void setConnectionChannelPaused(::NetworkIdentifier const&, uint, bool);

    MCNAPI void setDefaultGamePort(ushort);

    MCNAPI void setDefaultGamePortv6(ushort);

    MCNAPI void setDevConnectionQuality(::DevConnectionQuality);

    MCNAPI void setUseIPv6Only(bool);

    MCNAPI void unregisterClientOrServerInstance(::SubClientId const&);

    MCNAPI void update(std::vector<WeakEntityRef> const*);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::NetworkSystem::Dependencies&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $onNewIncomingConnection(::NetworkIdentifier const&, std::shared_ptr<NetworkPeer>&&);

    MCNAPI bool $onNewOutgoingConnection(::NetworkIdentifier const&, std::shared_ptr<NetworkPeer>&&);

    MCNAPI void $onConnectionClosed(
        ::NetworkIdentifier const&,
        ::Connection::DisconnectFailReason const,
        std::string const&,
        std::string const&,
        bool,
        ::Json::Value const&
    );

    MCNAPI void $onAllConnectionsClosed(::Connection::DisconnectFailReason, bool);

    MCNAPI void $onAllRemoteConnectionsClosed(::Connection::DisconnectFailReason, bool);

    MCNAPI void $onOutgoingConnectionFailed(::Connection::DisconnectFailReason);

    MCNAPI void $onWebsocketRequest(std::string const&, std::string const&, std::function<void()>);

    MCNAPI bool $useIPv4Only() const;

    MCNAPI bool $useIPv6Only() const;

    MCNAPI ushort $getDefaultGamePort() const;

    MCNAPI ushort $getDefaultGamePortv6() const;

    MCNAPI void $_onDisable();

    MCNAPI void $_onEnable();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
