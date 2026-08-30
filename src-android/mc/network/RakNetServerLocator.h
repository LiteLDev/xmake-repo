#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/certificates/identity/ServerSupportedAuthenticationTypes.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/network/LocatorState.h"
#include "mc/network/LocatorStateChangeRequest.h"
#include "mc/network/PermissionIPv6.h"
#include "mc/network/PermissionLAN.h"
#include "mc/network/PingedCompatibleServer.h"
#include "mc/network/PortPair.h"
#include "mc/network/RakNetServerLANVisibility.h"
#include "mc/network/RakPeerHelper.h"
#include "mc/network/ServerConnectivityTestResult.h"
#include "mc/network/ServerLocator.h"
#include "mc/platform/threading/LockGuard.h"
#include "mc/server/AsynchronousIPResolver.h"
#include "mc/world/level/GameType.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
class RakNetConnector;
struct ConnectionDefinition;
namespace RakNet { class RakPeerInterface; }
namespace RakNet { struct Packet; }
namespace RakNet { struct RakNetGUID; }
namespace Social { struct Nonce; }
// clang-format on

class RakNetServerLocator : public ::ServerLocator {
public:
    // RakNetServerLocator inner types declare
    // clang-format off
    class PingRateRecorder;
    class NatHolePuncherFunctor;
    struct AnnounceServerData;
    struct StateChangeRequestData;
    struct SuspendStateData;
    // clang-format on

    // RakNetServerLocator inner types define
    enum protocolVersion : int {
        ipv4 = 4,
        ipv6 = 6,
    };

    class PingRateRecorder {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::vector<ulong>> mPingTimes;
        ::ll::TypedStorage<4, 4, uint>                mAveragingWindowSize;
        ::ll::TypedStorage<4, 4, float>               mAverageTime;
        ::ll::TypedStorage<4, 4, float>               mLastPingTime;
        ::ll::TypedStorage<4, 4, uint>                mStartTime;
        ::ll::TypedStorage<4, 4, uint>                mPingTimesIndex;
        ::ll::TypedStorage<4, 4, int>                 mIpVersion;
        ::ll::TypedStorage<1, 1, bool>                mPingStarted;
        ::ll::TypedStorage<1, 1, bool>                mAveraging;
        // NOLINTEND

    public:
        // prevent constructor by default
        PingRateRecorder();
    };

    class NatHolePuncherFunctor {
    public:
        // NatHolePuncherFunctor inner types define
        using WorkFunction = std::function<bool()>;

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, bool> mSucceeded;
        // NOLINTEND
    };

    struct AnnounceServerData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::string>                         mPlayerName;
        ::ll::TypedStorage<8, 24, std::string>                         mWorldName;
        ::ll::TypedStorage<4, 4, ::GameType>                           mGameType;
        ::ll::TypedStorage<4, 4, int>                                  mNumPlayers;
        ::ll::TypedStorage<4, 4, int>                                  mMaxNumPlayers;
        ::ll::TypedStorage<1, 1, bool>                                 mIsJoinableThroughServerScreen;
        ::ll::TypedStorage<1, 1, bool>                                 mIsEditorWorld;
        ::ll::TypedStorage<1, 1, bool>                                 mIsHardcore;
        ::ll::TypedStorage<1, 2, ::ServerSupportedAuthenticationTypes> mSupportedAuth;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI AnnounceServerData(::RakNetServerLocator::AnnounceServerData const&);

        MCNAPI ~AnnounceServerData();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::RakNetServerLocator::AnnounceServerData const&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct StateChangeRequestData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, ::LocatorStateChangeRequest>                stateRequest;
        ::ll::TypedStorage<8, 72, ::RakNetServerLocator::AnnounceServerData> announceData;
        ::ll::TypedStorage<4, 8, ::PortPair>                                 ports;
        // NOLINTEND

    public:
        // prevent constructor by default
        StateChangeRequestData& operator=(StateChangeRequestData const&);

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~StateChangeRequestData();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct SuspendStateData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 72, ::RakNetServerLocator::AnnounceServerData> mAnnounceServerData;
        ::ll::TypedStorage<4, 4, ::LocatorState>                             mLocatorState;
        ::ll::TypedStorage<4, 8, ::PortPair>                                 ports;
        // NOLINTEND
    };

    using ScopeLock = ::Bedrock::Threading::LockGuard<std::recursive_mutex>;

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::string>> mOriginalAddresses;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, RakNetServerLocator::PingRateRecorder>> mPingTimeRecorders;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::string>> mGuidCache;
    ::ll::TypedStorage<8, 8, ::RakNetConnector&> mRakNetConnector;
    ::ll::TypedStorage<8, 16, std::unique_ptr<RakNet::RakPeerInterface, void (*)(RakNet::RakPeerInterface*)>> mFinderPeer;
    ::ll::TypedStorage<8, 24, ::RakPeerHelper> mFinderPeerHelper;
    ::ll::UntypedStorage<8, 48> mCreateUniqueRakPeerFunc;
    ::ll::TypedStorage<8, 24, std::vector<PingedCompatibleServer>> mAvailableServers;
    ::ll::TypedStorage<1, 1, bool const> mIsServer;
    ::ll::TypedStorage<4, 4, ::RakNetServerLANVisibility const> mServerLanVisibility;
    ::ll::TypedStorage<4, 8, ::PortPair> mPingPorts;
    ::ll::TypedStorage<4, 4, uint> mLastPingTime;
    ::ll::TypedStorage<4, 4, uint> mLastHolePunchTime;
    ::ll::TypedStorage<8, 24, std::vector<std::string>> mBroadcastAddresses;
    ::ll::TypedStorage<8, 24, std::vector<std::string>> mMulticastAddressesV6;
    ::ll::TypedStorage<8, 48, std::queue<std::pair<AsynchronousIPResolver, int>, std::deque<std::pair<AsynchronousIPResolver, int>>>> mPingQueue;
    ::ll::UntypedStorage<1, 16> mHolePuncher;
    ::ll::UntypedStorage<8, 48> mServerValidationCallback;
    ::ll::TypedStorage<8, 24, std::string> mServerWaitingToValidate;
    ::ll::TypedStorage<4, 4, uint> mLastPingToServerWaitingToValidateTime;
    ::ll::TypedStorage<4, 40, std::recursive_mutex> mServerListLock;
    ::ll::TypedStorage<4, 40, std::recursive_mutex> mFinderPeerLock;
    ::ll::TypedStorage<4, 4, ::PermissionLAN const> mPermissionLAN;
    ::ll::TypedStorage<4, 4, ::PermissionIPv6 const> mPermissionIPv6;
    ::ll::TypedStorage<8, 88, ::RakNetServerLocator::SuspendStateData> mSuspendStateData;
    ::ll::TypedStorage<4, 4, ::LocatorState> mLocatorState;
    ::ll::UntypedStorage<8, 56> mStateChangeRequestQueue;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    RakNetServerLocator& operator=(RakNetServerLocator const&);
    RakNetServerLocator(RakNetServerLocator const&);
    RakNetServerLocator();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~RakNetServerLocator();

    virtual void _onDisable();

    virtual void _onEnable();

    virtual void startAnnouncingServer(std::string const&, std::string const&, ::GameType, int, int, bool, bool, bool, ::ServerSupportedAuthenticationTypes, ::Social::Nonce const&);

    virtual void stopAnnouncingServer();

    virtual void startServerDiscovery(::PortPair);

    virtual void stopServerDiscovery();

    virtual void addCustomServer(std::string const&, int);

    virtual void addCustomServer(::AsynchronousIPResolver const&, int);

    virtual std::vector<PingedCompatibleServer> getServerList() const;

    virtual void clearServerList();

    virtual void update();

    virtual float getPingTimeForGUID(std::string const&);

    virtual void checkCanConnectToCustomServerAsync(std::string, int, std::function<void (ServerConnectivityTestResult)>);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RakNetServerLocator(
        ::RakNetConnector&,
        ::RakPeerHelper::IPSupportInterface&,
        std::vector<std::string>,
        bool,
        ::RakNetServerLANVisibility,
        ::PermissionLAN,
        ::PermissionIPv6,
        ::Bedrock::NonOwnerPointer<AppPlatform> const&,
        std::function<std::unique_ptr<RakNet::RakPeerInterface, void (*)(RakNet::RakPeerInterface*)>()>
    );

    MCNAPI void _activate();

    MCNAPI void _addCustomServerFromIpResolver(::AsynchronousIPResolver const&, int);

    MCNAPI void
        _enqueueStateChangeRequest(::LocatorStateChangeRequest, ::RakNetServerLocator::AnnounceServerData, ::PortPair);

    MCNAPI void _onPingSend(std::string const&, std::string const&, int);

    MCNAPI bool _onPongReceive(float&, ::RakNet::RakNetGUID const&, uint const&, int);

    MCNAPI void _setPingResponder(::RakNetServerLocator::AnnounceServerData const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::RakNetConnector&,
        ::RakPeerHelper::IPSupportInterface&,
        std::vector<std::string>,
        bool,
        ::RakNetServerLANVisibility,
        ::PermissionLAN,
        ::PermissionIPv6,
        ::Bedrock::NonOwnerPointer<AppPlatform> const&,
        std::function<std::unique_ptr<RakNet::RakPeerInterface, void (*)(RakNet::RakPeerInterface*)>()>
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
    MCNAPI void $_onDisable();

    MCNAPI void $_onEnable();

    MCNAPI void $startAnnouncingServer(
        std::string const&,
        std::string const&,
        ::GameType,
        int,
        int,
        bool,
        bool,
        bool,
        ::ServerSupportedAuthenticationTypes,
        ::Social::Nonce const&
    );

    MCNAPI void $stopAnnouncingServer();

    MCNAPI void $startServerDiscovery(::PortPair);

    MCNAPI void $stopServerDiscovery();

    MCNAPI void $addCustomServer(std::string const&, int);

    MCNAPI void $addCustomServer(::AsynchronousIPResolver const&, int);

    MCNAPI std::vector<PingedCompatibleServer> $getServerList() const;

    MCNAPI void $clearServerList();

    MCNAPI void $update();

    MCNAPI float $getPingTimeForGUID(std::string const&);

    MCNAPI void
    $checkCanConnectToCustomServerAsync(std::string, int, std::function<void(ServerConnectivityTestResult)>);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
