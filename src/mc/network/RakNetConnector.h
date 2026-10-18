#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/MPMCQueue.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/raknet/PacketReliability.h"
#include "mc/deps/raknet/StartupResult.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/network/Compressibility.h"
#include "mc/network/ConnectionDefinition.h"
#include "mc/network/Connector.h"
#include "mc/network/GameConnectionInfo.h"
#include "mc/network/NetworkIdentifier.h"
#include "mc/network/NetworkPeer.h"
#include "mc/network/RakPeerHelper.h"
#include "mc/network/RemoteConnector.h"
#include "mc/network/TransportLayer.h"
#include "mc/network/connection/DisconnectFailReason.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
class PrivateKeyManager;
namespace NetherNet { class IIdentityAssertionGenerator; }
namespace RakNet { class RakPeerInterface; }
namespace RakNet { struct RakNetStatistics; }
namespace RakNet { struct RakPeerConfiguration; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace RakNet { struct SystemAddress; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Social { struct ResolvedExperienceInfo; }
// clang-format on

class RakNetConnector : public ::RemoteConnector {
public:
    // RakNetConnector inner types declare
    // clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
    class RakNetNetworkPeer;
    struct PingCallbackData;
#else // @header-generator platform
#endif // @header-generator platform
    struct ConnectionCallbacks;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct PingCallbackData;
    class RakNetNetworkPeer;
#endif // @header-generator platform
    // clang-format on

    // RakNetConnector inner types define
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct ConnectionCallbacks : public ::Connector::ConnectionCallbacks {
    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ~ConnectionCallbacks() /*override*/ = default;

        virtual void
        onAllConnectionsClosed(::Connection::DisconnectFailReason discoReason, bool skipDisconnectMessage) = 0;

        virtual void
        onAllRemoteConnectionsClosed(::Connection::DisconnectFailReason discoReason, bool skipDisconnectMessage) = 0;

        virtual void onOutgoingConnectionFailed(::Connection::DisconnectFailReason discoReason) = 0;

        virtual void onWebsocketRequest(
            ::std::string const&    serverAddress,
            ::std::string const&    payload,
            ::std::function<void()> errorCallback
        ) = 0;
        // NOLINTEND
    };

    struct PingCallbackData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string>               mAddress;
        ::ll::TypedStorage<8, 64, ::std::function<void(uint)>> mAction;
        // NOLINTEND
    };

#endif // @header-generator platform
    class RakNetNetworkPeer : public ::NetworkPeer {
    public:
        // RakNetNetworkPeer inner types declare
        // clang-format off
        struct ReadBufferData;
        // clang-format on

        // RakNetNetworkPeer inner types define
        struct ReadBufferData {
        public:
            // member variables
            // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
            // clang-format off
            ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mTimepoint;
            ::ll::TypedStorage<8, 24, std::string> mReadBuffer;
            // clang-format on
#else // @header-generator platform
            ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point> mTimepoint;
            ::ll::TypedStorage<8, 32, ::std::string>                          mReadBuffer;
#endif // @header-generator platform
            // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

        public:
            // prevent constructor by default
            ReadBufferData& operator=(ReadBufferData const&);
            ReadBufferData(ReadBufferData const&);
            ReadBufferData();
#else // @header-generator platform
#endif // @header-generator platform
        };

    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 8, ::RakNet::RakPeerInterface&>                                      mRakPeer;
        ::ll::TypedStorage<8, 176, ::NetworkIdentifier>                                            mId;
        ::ll::TypedStorage<8, 24, std::string>                                                     mSendBuffer;
        ::ll::TypedStorage<8, 24, std::vector<RakNetConnector::RakNetNetworkPeer::ReadBufferData>> mReadBufferDatas;
        ::ll::TypedStorage<4, 4, int>                                                              mApproximateMaxBps;
        ::ll::TypedStorage<4, 4, int>                                                              mLastPing;
        ::ll::TypedStorage<4, 4, int>                                                              mAveragePing;
#else // @header-generator platform
        ::RakNet::RakPeerInterface&   mRakPeer;
        ::NetworkIdentifier           mId;
        ::std::string                 mSendBuffer;
        ::std::vector<ReadBufferData> mReadBufferDatas;
        int                           mApproximateMaxBps;
        int                           mLastPing;
        int                           mAveragePing;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // prevent constructor by default
        RakNetNetworkPeer& operator=(RakNetNetworkPeer const&);
        RakNetNetworkPeer(RakNetNetworkPeer const&);
        RakNetNetworkPeer();

    public:
        // virtual functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        // clang-format off
        virtual ~RakNetNetworkPeer();
    
        virtual void sendPacket(std::string const&, ::NetworkPeer::Reliability, ::Compressibility);
    
        virtual ::NetworkPeer::NetworkStatus getNetworkStatus() const;
    
        virtual void update();
    
        virtual bool isLocal() const;
    
        virtual bool isEncrypted() const;
    
        virtual ::NetworkPeer::DataStatus _receivePacket(std::string&, std::shared_ptr<std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> const&);
        // clang-format on
        // NOLINTEND
#else // @header-generator platform
        virtual void
        sendPacket(::std::string const& data, ::NetworkPeer::Reliability reliability, ::Compressibility) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
#else // @header-generator platform
        virtual ::NetworkPeer::DataStatus _receivePacket(
            ::std::string&                                                    outData,
            ::std::shared_ptr<::std::chrono::steady_clock::time_point> const& timepointPtr
        ) /*override*/;

        virtual ::NetworkPeer::NetworkStatus getNetworkStatus() const /*override*/;

        virtual void update() /*override*/;

        virtual bool isLocal() const /*override*/;

        virtual bool isEncrypted() const /*override*/;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI void $sendPacket(std::string const&, ::NetworkPeer::Reliability, ::Compressibility);
#else // @header-generator platform
        MCAPI void $sendPacket(::std::string const& data, ::NetworkPeer::Reliability reliability, ::Compressibility);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI ::NetworkPeer::NetworkStatus $getNetworkStatus() const;

        MCNAPI void $update();

        MCNAPI bool $isLocal() const;

        MCNAPI bool $isEncrypted() const;

        MCNAPI ::NetworkPeer::DataStatus $_receivePacket(
            std::string&,
            std::shared_ptr<std::chrono::time_point<
                std::chrono::steady_clock,
                std::chrono::duration<long long, std::ratio<1, 1000000000>>>> const&
#else // @header-generator platform
        MCAPI ::NetworkPeer::DataStatus $_receivePacket(
            ::std::string&                                                    outData,
            ::std::shared_ptr<::std::chrono::steady_clock::time_point> const& timepointPtr
#endif // @header-generator platform
        );
#if defined(LL_PLAT_A) // @header-generator platform
        // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };
#else // @header-generator platform
        MCAPI ::NetworkPeer::NetworkStatus $getNetworkStatus() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    struct PingCallbackData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mAddress;
        ::ll::UntypedStorage<8, 48> mAction;
        // NOLINTEND
#else // @header-generator platform
        MCAPI void $update();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    public:
        // prevent constructor by default
        PingCallbackData& operator=(PingCallbackData const&);
        PingCallbackData(PingCallbackData const&);
        PingCallbackData();
#else // @header-generator platform
        MCFOLD bool $isLocal() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~PingCallbackData();
        // NOLINTEND
#else // @header-generator platform
        MCFOLD bool $isEncrypted() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };
#else // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    struct ConnectionCallbacks : public ::Connector::ConnectionCallbacks {
    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ~ConnectionCallbacks();

        virtual void onAllConnectionsClosed(::Connection::DisconnectFailReason, bool) = 0;

        virtual void onAllRemoteConnectionsClosed(::Connection::DisconnectFailReason, bool) = 0;

        virtual void onOutgoingConnectionFailed(::Connection::DisconnectFailReason) = 0;

        virtual void onWebsocketRequest(std::string const&, std::string const&, std::function<void()>) = 0;
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
#else // @header-generator platform
#endif // @header-generator platform
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 176, ::NetworkIdentifier> mNATPunchServerId;
    ::ll::TypedStorage<8, 640, ::Social::GameConnectionInfo> mBackupGameConnection;
    ::ll::TypedStorage<1, 1, bool> mTryBackupConnection;
    ::ll::TypedStorage<8, 16, std::unique_ptr<RakNet::RakPeerInterface, void (*)(RakNet::RakPeerInterface*)>> mRakPeer;
    ::ll::TypedStorage<8, 176, ::NetworkIdentifier> mServerId;
    ::ll::TypedStorage<8, 24, ::RakPeerHelper> mPeerHelper;
    ::ll::UntypedStorage<8, 8> mIPSupportInterface;
    ::ll::TypedStorage<1, 1, bool> mIsAwaitingNatClient;
    ::ll::TypedStorage<1, 1, bool> mIsServer;
    ::ll::TypedStorage<1, 1, bool> mIsDisconnecting;
    ::ll::TypedStorage<1, 1, bool> mConnectingToClient;
    ::ll::TypedStorage<8, 640, ::Social::GameConnectionInfo> mConnectedGameInfo;
    ::ll::TypedStorage<8, 40, std::unordered_map<NetworkIdentifier, std::weak_ptr<RakNetConnector::RakNetNetworkPeer>>> mPeers;
    ::ll::TypedStorage<1, 1, bool> mWasHostWhenSuspended;
    ::ll::TypedStorage<4, 20, ::ConnectionDefinition> mPreviousConnectionDefinition;
    ::ll::TypedStorage<8, 24, std::string> mResolvedIP;
    ::ll::TypedStorage<8, 24, std::vector<RakNetConnector::PingCallbackData>> mPingTimeCallbacks;
    ::ll::TypedStorage<8, 8, std::unique_ptr<MPMCQueue<std::function<void ()>>>> mOwnedThreadWork;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<8, 176, ::NetworkIdentifier>          mNATPunchServerId;
    ::ll::TypedStorage<8, 784, ::Social::GameConnectionInfo> mBackupGameConnection;
    ::ll::TypedStorage<1, 1, bool>                           mTryBackupConnection;
    ::ll::TypedStorage<8, 16, ::std::unique_ptr<::RakNet::RakPeerInterface, void (*)(::RakNet::RakPeerInterface*)>>
                                                                   mRakPeer;
    ::ll::TypedStorage<8, 176, ::NetworkIdentifier>                mServerId;
    ::ll::TypedStorage<8, 24, ::RakPeerHelper>                     mPeerHelper;
    ::ll::TypedStorage<8, 8, ::RakPeerHelper::IPSupportInterface&> mIPSupportInterface;
    ::ll::TypedStorage<1, 1, bool>                                 mIsAwaitingNatClient;
    ::ll::TypedStorage<1, 1, bool>                                 mIsServer;
    ::ll::TypedStorage<1, 1, bool>                                 mIsDisconnecting;
    ::ll::TypedStorage<1, 1, bool>                                 mConnectingToClient;
    ::ll::TypedStorage<8, 784, ::Social::GameConnectionInfo>       mConnectedGameInfo;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<::NetworkIdentifier, ::std::weak_ptr<::RakNetConnector::RakNetNetworkPeer>>>
                                                                                      mPeers;
    ::ll::TypedStorage<1, 1, bool>                                                    mWasHostWhenSuspended;
    ::ll::TypedStorage<4, 20, ::ConnectionDefinition>                                 mPreviousConnectionDefinition;
    ::ll::TypedStorage<8, 32, ::std::string>                                          mResolvedIP;
    ::ll::TypedStorage<8, 24, ::std::vector<::RakNetConnector::PingCallbackData>>     mPingTimeCallbacks;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::MPMCQueue<::std::function<void()>>>> mOwnedThreadWork;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    RakNetConnector& operator=(RakNetConnector const&);
    RakNetConnector(RakNetConnector const&);
    RakNetConnector();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~RakNetConnector();
#else // @header-generator platform
    virtual ~RakNetConnector() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string getLocalIp();
#else // @header-generator platform
    virtual bool host(::ConnectionDefinition const& definition, ::PrivateKeyManager const&) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ushort getPort() const;
#else // @header-generator platform
    virtual bool connect(
        ::Social::GameConnectionInfo const& primaryConnection,
        ::Social::GameConnectionInfo const& backupConnection,
        ::std::shared_ptr<::NetherNet::IIdentityAssertionGenerator>
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Social::GameConnectionInfo const& getConnectedGameInfo() const;
#else // @header-generator platform
    virtual void disconnect() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setConnectedResolvedExperienceInfo(std::optional<Social::ResolvedExperienceInfo> const&);
#else // @header-generator platform
    virtual void tick() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isIPv4Supported() const;
#else // @header-generator platform
    virtual void runEvents() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isIPv6Supported() const;
#else // @header-generator platform
    virtual void closeNetworkConnection(::NetworkIdentifier const& id) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ushort getIPv4Port() const;
#else // @header-generator platform
    virtual bool setApplicationHandshakeCompleted(::NetworkIdentifier const& id) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ushort getIPv6Port() const;
#else // @header-generator platform
    virtual bool isServer() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::TransportLayer getNetworkType() const;
#else // @header-generator platform
    virtual ::std::string getLocalIp() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool host(::ConnectionDefinition const&, ::PrivateKeyManager const&);
#else // @header-generator platform
    virtual ushort getPort() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool connect(::Social::GameConnectionInfo const&, ::Social::GameConnectionInfo const&, std::shared_ptr<NetherNet::IIdentityAssertionGenerator>);
#else // @header-generator platform
    virtual ::Social::GameConnectionInfo const& getConnectedGameInfo() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void disconnect();
#else // @header-generator platform
    virtual void setConnectedResolvedExperienceInfo(
        ::std::optional<::Social::ResolvedExperienceInfo> const& resolvedExperienceInfo
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void tick();
#else // @header-generator platform
    virtual bool isIPv4Supported() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void runEvents();
#else // @header-generator platform
    virtual bool isIPv6Supported() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isServer() const;
#else // @header-generator platform
    virtual ushort getIPv4Port() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void closeNetworkConnection(::NetworkIdentifier const&);
#else // @header-generator platform
    virtual ushort getIPv6Port() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::NetworkIdentifier getNetworkIdentifier() const;

    virtual bool setApplicationHandshakeCompleted(::NetworkIdentifier const&);

    virtual void setDisableLanSignaling(bool);

    virtual ::RakNet::RakPeerInterface const* getPeer() const;
#else // @header-generator platform
    virtual ::NetworkIdentifier getNetworkIdentifier() const /*override*/;
#endif // @header-generator platform

    virtual ::RakNet::RakPeerInterface* getPeer();

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void _onDisable();
#else // @header-generator platform
    virtual ::RakNet::RakPeerInterface const* getPeer() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void _onEnable();
    // clang-format on
#else // @header-generator platform
    virtual ::TransportLayer getNetworkType() const /*override*/;

    virtual void setDisableLanSignaling(bool) /*override*/;

    virtual void _onDisable() /*override*/;

    virtual void _onEnable() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI RakNetConnector(
        ::RakNetConnector::ConnectionCallbacks&,
        ::RakPeerHelper::IPSupportInterface&,
        ::Bedrock::NonOwnerPointer<AppPlatform> const&,
        ::RakNet::RakPeerConfiguration const&
#else // @header-generator platform
    MCAPI RakNetConnector(
        ::RakNetConnector::ConnectionCallbacks&          callbacks,
        ::RakPeerHelper::IPSupportInterface&             ipInterface,
        ::Bedrock::NonOwnerPointer<::AppPlatform> const& appPlatform,
        ::RakNet::RakPeerConfiguration const&            rakPeerConfig
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void getPingTimeForConnection(std::string const&, int, std::function<void(uint)>);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void
    getPingTimeForConnection(::std::string const& address, int port, ::std::function<void(uint)> pingTimeCallback);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool getStatistics(::RakNet::RakNetStatistics&);
#else // @header-generator platform
    MCAPI bool getStatistics(::RakNet::RakNetStatistics& rns);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(
        ::RakNetConnector::ConnectionCallbacks&,
        ::RakPeerHelper::IPSupportInterface&,
        ::Bedrock::NonOwnerPointer<AppPlatform> const&,
        ::RakNet::RakPeerConfiguration const&
#else // @header-generator platform
    MCAPI void* $ctor(
        ::RakNetConnector::ConnectionCallbacks&          callbacks,
        ::RakPeerHelper::IPSupportInterface&             ipInterface,
        ::Bedrock::NonOwnerPointer<::AppPlatform> const& appPlatform,
        ::RakNet::RakPeerConfiguration const&            rakPeerConfig
#endif // @header-generator platform
    );
#if defined(LL_PLAT_A) // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string $getLocalIp();
#else // @header-generator platform
    MCAPI bool $host(::ConnectionDefinition const& definition, ::PrivateKeyManager const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ushort $getPort() const;

    MCNAPI ::Social::GameConnectionInfo const& $getConnectedGameInfo() const;

    MCNAPI void $setConnectedResolvedExperienceInfo(std::optional<Social::ResolvedExperienceInfo> const&);

    MCNAPI bool $isIPv4Supported() const;

    MCNAPI bool $isIPv6Supported() const;

    MCNAPI ushort $getIPv4Port() const;

    MCNAPI ushort $getIPv6Port() const;

    MCNAPI ::TransportLayer $getNetworkType() const;

    MCNAPI bool $host(::ConnectionDefinition const&, ::PrivateKeyManager const&);

    MCNAPI bool $connect(
        ::Social::GameConnectionInfo const&,
        ::Social::GameConnectionInfo const&,
        std::shared_ptr<NetherNet::IIdentityAssertionGenerator>
#else // @header-generator platform
    MCAPI bool $connect(
        ::Social::GameConnectionInfo const& primaryConnection,
        ::Social::GameConnectionInfo const& backupConnection,
        ::std::shared_ptr<::NetherNet::IIdentityAssertionGenerator>
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $disconnect();
#else // @header-generator platform
    MCAPI void $disconnect();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $tick();
#else // @header-generator platform
    MCAPI void $tick();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $runEvents();
#else // @header-generator platform
    MCAPI void $runEvents();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isServer() const;
#else // @header-generator platform
    MCAPI void $closeNetworkConnection(::NetworkIdentifier const& id);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $closeNetworkConnection(::NetworkIdentifier const&);
#else // @header-generator platform
    MCAPI bool $setApplicationHandshakeCompleted(::NetworkIdentifier const& id);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::NetworkIdentifier $getNetworkIdentifier() const;
#else // @header-generator platform
    MCAPI bool $isServer() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $setApplicationHandshakeCompleted(::NetworkIdentifier const&);
#else // @header-generator platform
    MCAPI ::std::string $getLocalIp();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setDisableLanSignaling(bool);
#else // @header-generator platform
    MCAPI ushort $getPort() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::RakNet::RakPeerInterface const* $getPeer() const;
#else // @header-generator platform
    MCAPI ::Social::GameConnectionInfo const& $getConnectedGameInfo() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::RakNet::RakPeerInterface* $getPeer();
#else // @header-generator platform
    MCAPI void $setConnectedResolvedExperienceInfo(
        ::std::optional<::Social::ResolvedExperienceInfo> const& resolvedExperienceInfo
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $_onDisable();
#else // @header-generator platform
    MCAPI bool $isIPv4Supported() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $_onEnable();
    // NOLINTEND
#else // @header-generator platform
    MCAPI bool $isIPv6Supported() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform
    MCAPI ushort $getIPv4Port() const;

    MCAPI ushort $getIPv6Port() const;

    MCAPI ::NetworkIdentifier $getNetworkIdentifier() const;

    MCAPI ::RakNet::RakPeerInterface* $getPeer();

    MCAPI ::RakNet::RakPeerInterface const* $getPeer() const;

    MCFOLD ::TransportLayer $getNetworkType() const;

    MCFOLD void $setDisableLanSignaling(bool);

    MCAPI void $_onDisable();

    MCAPI void $_onEnable();


#endif // @header-generator platform
    // NOLINTEND
};
