#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/utility/BinaryStream.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/utility/pub_sub/Connector.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#include "mc/network/DevConnectionQuality.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/network/NetworkEnableDisableListener.h"
#include "mc/network/NetworkSettingOptions.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/network/PacketCompressionAlgorithm.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/network/PacketGroupDefinition.h"
#include "mc/network/RakNetConnector.h"
#include "mc/network/RakPeerHelper.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/network/TransportLayer.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/network/connection/DisconnectFailReason.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
#if defined(LL_PLAT_A) // @header-generator platform
class CompressedNetworkPeer;
class EncryptedNetworkPeer;
#else // @header-generator platform
#endif // @header-generator platform
class IPacketObserver;
class IPacketSecurityController;
class IPacketSerializationController;
class LocalConnector;
class NetEventCallback;
class NetworkConnection;
class NetworkIdentifier;
#if defined(LL_PLAT_A) // @header-generator platform
class NetworkPacketRecorder;
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
    struct IncomingPacketQueue;
#else // @header-generator platform
#endif // @header-generator platform
    struct Dependencies;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct IncomingPacketQueue;
#endif // @header-generator platform
    // clang-format on

    // NetworkSystem inner types define
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct Dependencies {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::std::reference_wrapper<::Scheduler>>                 receiveThread;
        ::ll::TypedStorage<8, 8, ::std::unique_ptr<::RemoteConnector>>                  remoteConnector;
        ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ServerLocator>>                    serverLocator;
        ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::AppPlatform>>            appPlatform;
        ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::NetworkSessionOwner>> networkSessionOwner;
        ::ll::TypedStorage<4, 20, ::NetworkSettingOptions>                              networkSettingOptions;
        ::ll::TypedStorage<8, 8, ::std::unique_ptr<::IPacketSerializationController>>   serializationController;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~Dependencies();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

#endif // @header-generator platform
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

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    using IncomingPacketQueueArray = ::std::unique_ptr<::NetworkSystem::IncomingPacketQueue>[4];
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::NetworkSessionOwner>>           mNetworkSessionOwner;
    ::ll::TypedStorage<8, 80, ::std::recursive_mutex>                                         mConnectionsMutex;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::NetworkConnection>>>          mConnections;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::LocalConnector>>                            mLocalConnector;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::PacketGroupDefinition::PacketGroupBuilder>> mPacketGroupBuilder;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::RemoteConnector>>                            mRemoteConnector;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ServerLocator>>                              mServerLocator;
    ::ll::TypedStorage<8, 8, uint64>                                                          mCurrentConnection;
    ::ll::TypedStorage<8, 16, ::Bedrock::Threading::Async<void>>                              mReceiveTask;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::TaskGroup>>                                  mReceiveTaskGroup;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::IPacketObserver>>                  mPacketObserver;
    ::ll::TypedStorage<8, 8, ::Scheduler&>                                                    mMainThread;
    ::ll::TypedStorage<8, 32, ::std::string>                                                  mReceiveBuffer;
    ::ll::TypedStorage<8, 32, ::std::string>                                                  mSendBuffer;
    ::ll::TypedStorage<8, 80, ::BinaryStream>                                                 mSendStream;
    ::ll::TypedStorage<8, 32, ::std::unique_ptr<::NetworkSystem::IncomingPacketQueue>[4]>     mIncomingPackets;
    ::ll::TypedStorage<1, 1, bool>                                                            mUseIPv6Only;
    ::ll::TypedStorage<2, 2, ushort>                                                          mDefaultGamePort;
    ::ll::TypedStorage<2, 2, ushort>                                                          mDefaultGamePortv6;
    ::ll::TypedStorage<1, 1, bool>                                                            mIsLanDiscoveryEnabled;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::NetworkStatistics>>                          mNetworkStatistics;
    ::ll::TypedStorage<1, 1, bool>                                                            mWebsocketsEnabled;
    ::ll::TypedStorage<4, 20, ::NetworkSettingOptions>                                        mNetworkSettingOptions;
    ::ll::TypedStorage<1, 1, bool>                                                            mRawRecordingEnabled;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::cereal::ReflectionCtx>>>     mReflectionCtx;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::IPacketSerializationController>>> mPacketOverrides;
    ::ll::TypedStorage<
        8,
        8,
        ::gsl::not_null<::std::unique_ptr<
            ::Bedrock::PubSub::
                Publisher<void(::Json::Value const&), ::Bedrock::PubSub::ThreadModel::MultiThreaded, 0>>>>
        mSessionSummaryPublisher;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    NetworkSystem& operator=(NetworkSystem const&);
    NetworkSystem(NetworkSystem const&);
    NetworkSystem();

public:
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    LLNDAPI NetworkConnection* getConnectionFromId(NetworkIdentifier const& id);

public:
#endif // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~NetworkSystem();
#else // @header-generator platform
    virtual bool useIPv4Only() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool onNewIncomingConnection(::NetworkIdentifier const&, std::shared_ptr<NetworkPeer>&&);
#else // @header-generator platform
    virtual bool useIPv6Only() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool onNewOutgoingConnection(::NetworkIdentifier const&, std::shared_ptr<NetworkPeer>&&);
#else // @header-generator platform
    virtual ushort getDefaultGamePort() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onConnectionClosed(::NetworkIdentifier const&, ::Connection::DisconnectFailReason const, std::string const&, std::string const&, bool, ::Json::Value const&);
#else // @header-generator platform
    virtual ushort getDefaultGamePortv6() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onAllConnectionsClosed(::Connection::DisconnectFailReason, bool);
#else // @header-generator platform
    virtual ~NetworkSystem() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onAllRemoteConnectionsClosed(::Connection::DisconnectFailReason, bool);
#else // @header-generator platform
    virtual void _onDisable() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onOutgoingConnectionFailed(::Connection::DisconnectFailReason);
#else // @header-generator platform
    virtual void _onEnable() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onWebsocketRequest(std::string const&, std::string const&, std::function<void ()>);
#else // @header-generator platform
    virtual bool
    onNewIncomingConnection(::NetworkIdentifier const& id, ::std::shared_ptr<::NetworkPeer>&& peer) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool useIPv4Only() const;
#else // @header-generator platform
    virtual bool
    onNewOutgoingConnection(::NetworkIdentifier const& id, ::std::shared_ptr<::NetworkPeer>&& peer) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool useIPv6Only() const;
#else // @header-generator platform
    virtual void onConnectionClosed(
        ::NetworkIdentifier const&               id,
        ::Connection::DisconnectFailReason const discoReason,
        ::std::string const&                     messageFromServer,
        ::std::string const&                     messageBodyOverride,
        bool                                     skipDisconnectMessage,
        ::Json::Value const&                     sessionSummary
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ushort getDefaultGamePort() const;
#else // @header-generator platform
    virtual void
    onAllConnectionsClosed(::Connection::DisconnectFailReason discoReason, bool skipDisconnectMessage) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ushort getDefaultGamePortv6() const;
#else // @header-generator platform
    virtual void onAllRemoteConnectionsClosed(
        ::Connection::DisconnectFailReason discoReason,
        bool                               skipDisconnectMessage
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void _onDisable();
#else // @header-generator platform
    virtual void onOutgoingConnectionFailed(::Connection::DisconnectFailReason discoReason) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void _onEnable();
    // clang-format on
#else // @header-generator platform
    virtual void onWebsocketRequest(
        ::std::string const&    serverAddress,
        ::std::string const&    payload,
        ::std::function<void()> errorCallback
    ) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit NetworkSystem(::NetworkSystem::Dependencies&&);
#else // @header-generator platform
    MCAPI explicit NetworkSystem(::NetworkSystem::Dependencies&& deps);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::TransportLayer _getTransportLayer() const;
#else // @header-generator platform
    MCAPI ::std::shared_ptr<::IPacketSecurityController> _createPacketSecurityController(::NetworkIdentifier const& id);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _initNetworkStatistics(std::unique_ptr<NetworkStatistics>&&);
#else // @header-generator platform
    MCAPI bool _isUsingNetherNetTransportLayer() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _isUsingNetherNetTransportLayer() const;
#else // @header-generator platform
    MCAPI void _sendInternal(::NetworkIdentifier const& id, ::Packet const& packet, ::std::string const& data);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _sendInternal(::NetworkIdentifier const&, ::Packet const&, std::string const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void closeConnection(
        ::NetworkIdentifier const&         id,
        ::Connection::DisconnectFailReason discoReason,
        ::std::string const&               messageFromServer
    );
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _setDisableLanSignaling(bool);
#else // @header-generator platform
    MCAPI void disconnect();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void
    closeConnection(::NetworkIdentifier const&, ::Connection::DisconnectFailReason const, std::string const&);
#else // @header-generator platform
    MCAPI void enableAsyncFlush(::NetworkIdentifier const& id);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void disconnect();
#else // @header-generator platform
    MCAPI ::NetworkPeer* getPeerForUser(::NetworkIdentifier const& id);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void enableAsyncFlush(::NetworkIdentifier const&);
#else // @header-generator platform
    MCAPI bool isServer() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void flush(::NetworkIdentifier const&, std::function<void()>&&);
#else // @header-generator platform
    MCAPI void runEvents(bool networkIsCritical);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::weak_ptr<CompressedNetworkPeer> getCompressedPeerForUser(::NetworkIdentifier const&);
#else // @header-generator platform
    MCAPI void send(::NetworkIdentifier const& id, ::Packet const& packet, ::SubClientId recipientSubId);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<std::unique_ptr<NetworkConnection>> const& getConnections() const;
#else // @header-generator platform
    MCAPI void sendToMultiple(::std::vector<::NetworkIdentifierWithSubId> const& ids, ::Packet const& packet);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::weak_ptr<EncryptedNetworkPeer> getEncryptedPeerForUser(::NetworkIdentifier const&);
#else // @header-generator platform
    MCAPI void
    setCloseConnection(::NetworkIdentifier const& id, ::Connection::DisconnectFailReason closeConnectionReason);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI void update(::std::vector<::WeakEntityRef> const* userList);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::NetworkSystem::Dependencies&&);
#else // @header-generator platform
    MCAPI void* $ctor(::NetworkSystem::Dependencies&& deps);
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
    MCNAPI bool $onNewIncomingConnection(::NetworkIdentifier const&, std::shared_ptr<NetworkPeer>&&);
#else // @header-generator platform
    MCFOLD bool $useIPv4Only() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $onNewOutgoingConnection(::NetworkIdentifier const&, std::shared_ptr<NetworkPeer>&&);
#else // @header-generator platform
    MCAPI bool $useIPv6Only() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onConnectionClosed(
        ::NetworkIdentifier const&,
        ::Connection::DisconnectFailReason const,
        std::string const&,
        std::string const&,
        bool,
        ::Json::Value const&
#else // @header-generator platform
    MCAPI ushort $getDefaultGamePort() const;

    MCAPI ushort $getDefaultGamePortv6() const;

    MCAPI void $_onDisable();

    MCAPI void $_onEnable();

    MCAPI bool $onNewIncomingConnection(::NetworkIdentifier const& id, ::std::shared_ptr<::NetworkPeer>&& peer);

    MCAPI bool $onNewOutgoingConnection(::NetworkIdentifier const& id, ::std::shared_ptr<::NetworkPeer>&& peer);

    MCAPI void $onConnectionClosed(
        ::NetworkIdentifier const&               id,
        ::Connection::DisconnectFailReason const discoReason,
        ::std::string const&                     messageFromServer,
        ::std::string const&                     messageBodyOverride,
        bool                                     skipDisconnectMessage,
        ::Json::Value const&                     sessionSummary
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onAllConnectionsClosed(::Connection::DisconnectFailReason, bool);
#else // @header-generator platform
    MCAPI void $onAllConnectionsClosed(::Connection::DisconnectFailReason discoReason, bool skipDisconnectMessage);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onAllRemoteConnectionsClosed(::Connection::DisconnectFailReason, bool);
#else // @header-generator platform
    MCAPI void
    $onAllRemoteConnectionsClosed(::Connection::DisconnectFailReason discoReason, bool skipDisconnectMessage);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onOutgoingConnectionFailed(::Connection::DisconnectFailReason);
#else // @header-generator platform
    MCAPI void $onOutgoingConnectionFailed(::Connection::DisconnectFailReason discoReason);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onWebsocketRequest(std::string const&, std::string const&, std::function<void()>);
#else // @header-generator platform
    MCAPI void $onWebsocketRequest(
        ::std::string const&    serverAddress,
        ::std::string const&    payload,
        ::std::function<void()> errorCallback
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $useIPv4Only() const;
#else // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND
};
