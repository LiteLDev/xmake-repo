#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/MPMCQueue.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/raknet/PacketReliability.h"
#include "mc/deps/raknet/StartupResult.h"
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
namespace RakNet { struct SystemAddress; }
namespace Social { struct ResolvedExperienceInfo; }
// clang-format on

class RakNetConnector : public ::RemoteConnector {
public:
    // RakNetConnector inner types declare
    // clang-format off
    class RakNetNetworkPeer;
    struct PingCallbackData;
    struct ConnectionCallbacks;
    // clang-format on

    // RakNetConnector inner types define
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
            // clang-format off
            ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mTimepoint;
            ::ll::TypedStorage<8, 24, std::string> mReadBuffer;
            // clang-format on
            // NOLINTEND

        public:
            // prevent constructor by default
            ReadBufferData& operator=(ReadBufferData const&);
            ReadBufferData(ReadBufferData const&);
            ReadBufferData();
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::RakNet::RakPeerInterface&>                                      mRakPeer;
        ::ll::TypedStorage<8, 176, ::NetworkIdentifier>                                            mId;
        ::ll::TypedStorage<8, 24, std::string>                                                     mSendBuffer;
        ::ll::TypedStorage<8, 24, std::vector<RakNetConnector::RakNetNetworkPeer::ReadBufferData>> mReadBufferDatas;
        ::ll::TypedStorage<4, 4, int>                                                              mApproximateMaxBps;
        ::ll::TypedStorage<4, 4, int>                                                              mLastPing;
        ::ll::TypedStorage<4, 4, int>                                                              mAveragePing;
        // NOLINTEND

    public:
        // prevent constructor by default
        RakNetNetworkPeer& operator=(RakNetNetworkPeer const&);
        RakNetNetworkPeer(RakNetNetworkPeer const&);
        RakNetNetworkPeer();

    public:
        // virtual functions
        // NOLINTBEGIN
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

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCNAPI void $sendPacket(std::string const&, ::NetworkPeer::Reliability, ::Compressibility);

        MCNAPI ::NetworkPeer::NetworkStatus $getNetworkStatus() const;

        MCNAPI void $update();

        MCNAPI bool $isLocal() const;

        MCNAPI bool $isEncrypted() const;

        MCNAPI ::NetworkPeer::DataStatus $_receivePacket(
            std::string&,
            std::shared_ptr<std::chrono::time_point<
                std::chrono::steady_clock,
                std::chrono::duration<long long, std::ratio<1, 1000000000>>>> const&
        );
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };

    struct PingCallbackData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mAddress;
        ::ll::UntypedStorage<8, 48> mAction;
        // NOLINTEND

    public:
        // prevent constructor by default
        PingCallbackData& operator=(PingCallbackData const&);
        PingCallbackData(PingCallbackData const&);
        PingCallbackData();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~PingCallbackData();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

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
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
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
    // NOLINTEND

public:
    // prevent constructor by default
    RakNetConnector& operator=(RakNetConnector const&);
    RakNetConnector(RakNetConnector const&);
    RakNetConnector();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~RakNetConnector();

    virtual std::string getLocalIp();

    virtual ushort getPort() const;

    virtual ::Social::GameConnectionInfo const& getConnectedGameInfo() const;

    virtual void setConnectedResolvedExperienceInfo(std::optional<Social::ResolvedExperienceInfo> const&);

    virtual bool isIPv4Supported() const;

    virtual bool isIPv6Supported() const;

    virtual ushort getIPv4Port() const;

    virtual ushort getIPv6Port() const;

    virtual ::TransportLayer getNetworkType() const;

    virtual bool host(::ConnectionDefinition const&, ::PrivateKeyManager const&);

    virtual bool connect(::Social::GameConnectionInfo const&, ::Social::GameConnectionInfo const&, std::shared_ptr<NetherNet::IIdentityAssertionGenerator>);

    virtual void disconnect();

    virtual void tick();

    virtual void runEvents();

    virtual bool isServer() const;

    virtual void closeNetworkConnection(::NetworkIdentifier const&);

    virtual ::NetworkIdentifier getNetworkIdentifier() const;

    virtual bool setApplicationHandshakeCompleted(::NetworkIdentifier const&);

    virtual void setDisableLanSignaling(bool);

    virtual ::RakNet::RakPeerInterface const* getPeer() const;

    virtual ::RakNet::RakPeerInterface* getPeer();

    virtual void _onDisable();

    virtual void _onEnable();
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RakNetConnector(
        ::RakNetConnector::ConnectionCallbacks&,
        ::RakPeerHelper::IPSupportInterface&,
        ::Bedrock::NonOwnerPointer<AppPlatform> const&,
        ::RakNet::RakPeerConfiguration const&
    );

    MCNAPI void getPingTimeForConnection(std::string const&, int, std::function<void(uint)>);

    MCNAPI bool getStatistics(::RakNet::RakNetStatistics&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::RakNetConnector::ConnectionCallbacks&,
        ::RakPeerHelper::IPSupportInterface&,
        ::Bedrock::NonOwnerPointer<AppPlatform> const&,
        ::RakNet::RakPeerConfiguration const&
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
    MCNAPI std::string $getLocalIp();

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
    );

    MCNAPI void $disconnect();

    MCNAPI void $tick();

    MCNAPI void $runEvents();

    MCNAPI bool $isServer() const;

    MCNAPI void $closeNetworkConnection(::NetworkIdentifier const&);

    MCNAPI ::NetworkIdentifier $getNetworkIdentifier() const;

    MCNAPI bool $setApplicationHandshakeCompleted(::NetworkIdentifier const&);

    MCNAPI void $setDisableLanSignaling(bool);

    MCNAPI ::RakNet::RakPeerInterface const* $getPeer() const;

    MCNAPI ::RakNet::RakPeerInterface* $getPeer();

    MCNAPI void $_onDisable();

    MCNAPI void $_onEnable();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
