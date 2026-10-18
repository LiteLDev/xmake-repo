#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/certificates/identity/ServerSupportedAuthenticationTypes.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/core/utility/NonOwnerPointer.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/network/LocatorState.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/network/LocatorStateChangeRequest.h"
#include "mc/network/PermissionIPv6.h"
#include "mc/network/PermissionLAN.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/network/PingedCompatibleServer.h"
#include "mc/network/PortPair.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/network/RakNetServerLANVisibility.h"
#include "mc/network/RakPeerHelper.h"
#include "mc/network/ServerConnectivityTestResult.h"
#include "mc/network/ServerLocator.h"
#include "mc/platform/threading/LockGuard.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/server/AsynchronousIPResolver.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/level/GameType.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class AsynchronousIPResolver;
#endif // @header-generator platform
class RakNetConnector;
#if defined(LL_PLAT_A) // @header-generator platform
struct ConnectionDefinition;
#else // @header-generator platform
struct PingedCompatibleServer;
struct PortPair;
struct ServerSupportedAuthenticationTypes;
#endif // @header-generator platform
namespace RakNet { class RakPeerInterface; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace RakNet { struct Packet; }
#else // @header-generator platform
#endif // @header-generator platform
namespace RakNet { struct RakNetGUID; }
namespace Social { struct Nonce; }
// clang-format on

class RakNetServerLocator : public ::ServerLocator {
public:
    // RakNetServerLocator inner types declare
    // clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
    class PingRateRecorder;
    class NatHolePuncherFunctor;
#else // @header-generator platform
#endif // @header-generator platform
    struct AnnounceServerData;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    class NatHolePuncherFunctor;
    class PingRateRecorder;
#endif // @header-generator platform
    struct StateChangeRequestData;
    struct SuspendStateData;
    // clang-format on

    // RakNetServerLocator inner types define
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    enum class protocolVersion : int {
        Ipv4 = 4,
        Ipv6 = 6,
#endif // @header-generator platform
    };

    struct AnnounceServerData {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 24, std::string>                         mPlayerName;
        ::ll::TypedStorage<8, 24, std::string>                         mWorldName;
        ::ll::TypedStorage<4, 4, ::GameType>                           mGameType;
        ::ll::TypedStorage<4, 4, int>                                  mNumPlayers;
        ::ll::TypedStorage<4, 4, int>                                  mMaxNumPlayers;
        ::ll::TypedStorage<1, 1, bool>                                 mIsJoinableThroughServerScreen;
        ::ll::TypedStorage<1, 1, bool>                                 mIsEditorWorld;
        ::ll::TypedStorage<1, 1, bool>                                 mIsHardcore;
        ::ll::TypedStorage<1, 2, ::ServerSupportedAuthenticationTypes> mSupportedAuth;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 32> mUnk700306;
        ::ll::UntypedStorage<8, 32> mUnke0450c;
        ::ll::UntypedStorage<4, 4>  mUnka30b10;
        ::ll::UntypedStorage<4, 4>  mUnk7f5665;
        ::ll::UntypedStorage<4, 4>  mUnk9c0fab;
        ::ll::UntypedStorage<1, 1>  mUnk8d0484;
        ::ll::UntypedStorage<1, 1>  mUnk43329d;
        ::ll::UntypedStorage<1, 1>  mUnka62802;
        ::ll::UntypedStorage<1, 2>  mUnkc9d2fb;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    public:
        // prevent constructor by default
        AnnounceServerData& operator=(AnnounceServerData const&);
        AnnounceServerData();
#endif // @header-generator platform

    public:
        // member functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI AnnounceServerData(::RakNetServerLocator::AnnounceServerData const&);

        MCNAPI ~AnnounceServerData();
#else // @header-generator platform
        MCNAPI AnnounceServerData(::RakNetServerLocator::AnnounceServerData const& announceData);
#endif // @header-generator platform
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI void* $ctor(::RakNetServerLocator::AnnounceServerData const&);
#else // @header-generator platform
        MCNAPI void* $ctor(::RakNetServerLocator::AnnounceServerData const& announceData);
        // NOLINTEND
    };

    class NatHolePuncherFunctor {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 1> mUnk4e485b;
#endif // @header-generator platform
        // NOLINTEND

    public:
#if defined(LL_PLAT_A) // @header-generator platform
        // destructor thunk
#else // @header-generator platform
        // prevent constructor by default
        NatHolePuncherFunctor& operator=(NatHolePuncherFunctor const&);
        NatHolePuncherFunctor(NatHolePuncherFunctor const&);
        NatHolePuncherFunctor();

    public:
        // member functions
#endif // @header-generator platform
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
        MCNAPI bool punch(::std::function<bool()> lanDiscoveryPortPuncher, ::std::function<bool()> gamePortPuncher);
#endif
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    };

    class PingRateRecorder {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 24> mUnk47b2d8;
        ::ll::UntypedStorage<4, 4>  mUnke4ceed;
        ::ll::UntypedStorage<4, 4>  mUnkafd9c7;
        ::ll::UntypedStorage<4, 4>  mUnkc2e940;
        ::ll::UntypedStorage<4, 4>  mUnk7e5467;
        ::ll::UntypedStorage<4, 4>  mUnk55e198;
        ::ll::UntypedStorage<4, 4>  mUnk4b04bf;
        ::ll::UntypedStorage<1, 1>  mUnk762855;
        ::ll::UntypedStorage<1, 1>  mUnkca8a9c;
        // NOLINTEND

    public:
        // prevent constructor by default
        PingRateRecorder& operator=(PingRateRecorder const&);
        PingRateRecorder(PingRateRecorder const&);
        PingRateRecorder();
#endif // @header-generator platform
    };

    struct StateChangeRequestData {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<4, 4, ::LocatorStateChangeRequest>                stateRequest;
        ::ll::TypedStorage<8, 72, ::RakNetServerLocator::AnnounceServerData> announceData;
        ::ll::TypedStorage<4, 8, ::PortPair>                                 ports;
#else // @header-generator platform
        ::ll::UntypedStorage<4, 4>  mUnkf1839a;
        ::ll::UntypedStorage<8, 88> mUnkaf330a;
        ::ll::UntypedStorage<4, 8>  mUnk315143;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // prevent constructor by default
        StateChangeRequestData& operator=(StateChangeRequestData const&);
#if defined(LL_PLAT_A) // @header-generator platform

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
#else // @header-generator platform
        StateChangeRequestData(StateChangeRequestData const&);
        StateChangeRequestData();
#endif // @header-generator platform
    };

    struct SuspendStateData {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 72, ::RakNetServerLocator::AnnounceServerData> mAnnounceServerData;
        ::ll::TypedStorage<4, 4, ::LocatorState>                             mLocatorState;
        ::ll::TypedStorage<4, 8, ::PortPair>                                 ports;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 88> mUnke8e0f9;
        ::ll::UntypedStorage<4, 4>  mUnk5cca28;
        ::ll::UntypedStorage<4, 8>  mUnk163ab6;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
    };
#else // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    using ScopeLock = ::Bedrock::Threading::LockGuard<std::recursive_mutex>;
#else // @header-generator platform
    public:
        // prevent constructor by default
        SuspendStateData& operator=(SuspendStateData const&);
        SuspendStateData(SuspendStateData const&);
        SuspendStateData();
    };
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::UntypedStorage<8, 64>  mUnk471f4b;
    ::ll::UntypedStorage<8, 64>  mUnkde3b17;
    ::ll::UntypedStorage<8, 64>  mUnkf988f6;
    ::ll::UntypedStorage<8, 8>   mUnk2218c2;
    ::ll::UntypedStorage<8, 16>  mUnk5f4202;
    ::ll::UntypedStorage<8, 24>  mUnkd55261;
    ::ll::UntypedStorage<8, 64>  mUnk2876ef;
    ::ll::UntypedStorage<8, 24>  mUnkb30369;
    ::ll::UntypedStorage<1, 1>   mUnkfa3d98;
    ::ll::UntypedStorage<4, 4>   mUnk7ebf28;
    ::ll::UntypedStorage<4, 8>   mUnkc145b0;
    ::ll::UntypedStorage<4, 4>   mUnk3962a5;
    ::ll::UntypedStorage<4, 4>   mUnk3d87f2;
    ::ll::UntypedStorage<8, 24>  mUnk3bbb85;
    ::ll::UntypedStorage<8, 24>  mUnk87606a;
    ::ll::UntypedStorage<8, 40>  mUnk26b996;
    ::ll::UntypedStorage<1, 1>   mUnk2c445a;
    ::ll::UntypedStorage<8, 64>  mUnkc78041;
    ::ll::UntypedStorage<8, 32>  mUnkc98a78;
    ::ll::UntypedStorage<4, 4>   mUnk8bcebb;
    ::ll::UntypedStorage<8, 80>  mUnkd855a4;
    ::ll::UntypedStorage<8, 80>  mUnk518100;
    ::ll::UntypedStorage<4, 4>   mUnk5542ff;
    ::ll::UntypedStorage<4, 4>   mUnkf403ed;
    ::ll::UntypedStorage<8, 104> mUnk8970d6;
    ::ll::UntypedStorage<4, 4>   mUnk8d92b1;
    ::ll::UntypedStorage<8, 40>  mUnk7ba1da;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    RakNetServerLocator& operator=(RakNetServerLocator const&);
    RakNetServerLocator(RakNetServerLocator const&);
    RakNetServerLocator();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~RakNetServerLocator();
#else // @header-generator platform
    virtual ~RakNetServerLocator() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void _onDisable();
#else // @header-generator platform
    virtual void startAnnouncingServer(
        ::std::string const&                 playerName,
        ::std::string const&                 worldName,
        ::GameType                           gameType,
        int                                  numPlayers,
        int                                  maxNumPlayers,
        bool                                 isJoinableThroughServerScreen,
        bool                                 isEditorWorld,
        bool                                 isHardcore,
        ::ServerSupportedAuthenticationTypes supportedAuth,
        ::Social::Nonce const&
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void _onEnable();
#else // @header-generator platform
    virtual void stopAnnouncingServer() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void startAnnouncingServer(std::string const&, std::string const&, ::GameType, int, int, bool, bool, bool, ::ServerSupportedAuthenticationTypes, ::Social::Nonce const&);
#else // @header-generator platform
    virtual void startServerDiscovery(::PortPair ports) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void stopAnnouncingServer();
#else // @header-generator platform
    virtual void stopServerDiscovery() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void startServerDiscovery(::PortPair);
#else // @header-generator platform
    virtual void addCustomServer(::AsynchronousIPResolver const& futureIP, int port) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void stopServerDiscovery();
#else // @header-generator platform
    virtual void addCustomServer(::std::string const& address, int port) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void addCustomServer(std::string const&, int);
#else // @header-generator platform
    virtual ::std::vector<::PingedCompatibleServer> getServerList() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void addCustomServer(::AsynchronousIPResolver const&, int);
#else // @header-generator platform
    virtual void clearServerList() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::vector<PingedCompatibleServer> getServerList() const;
#else // @header-generator platform
    virtual void update() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void clearServerList();
#else // @header-generator platform
    virtual float getPingTimeForGUID(::std::string const& guid) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void update();
#else // @header-generator platform
    virtual void checkCanConnectToCustomServerAsync(
        ::std::string                                         hostIpAddress,
        int                                                   port,
        ::std::function<void(::ServerConnectivityTestResult)> callback
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual float getPingTimeForGUID(std::string const&);
#else // @header-generator platform
    virtual void _onDisable() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void checkCanConnectToCustomServerAsync(std::string, int, std::function<void (ServerConnectivityTestResult)>);
    // clang-format on
#else // @header-generator platform
    virtual void _onEnable() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RakNetServerLocator(
#if defined(LL_PLAT_A) // @header-generator platform
        ::RakNetConnector&,
        ::RakPeerHelper::IPSupportInterface&,
        std::vector<std::string>,
        bool,
        ::RakNetServerLANVisibility,
        ::PermissionLAN,
        ::PermissionIPv6,
        ::Bedrock::NonOwnerPointer<AppPlatform> const&,
        std::function<std::unique_ptr<RakNet::RakPeerInterface, void (*)(RakNet::RakPeerInterface*)>()>
#else // @header-generator platform
        ::RakNetConnector&                               rakNetConnector,
        ::RakPeerHelper::IPSupportInterface&             ipInterface,
        ::std::vector<::std::string>                     overrideBroadcastAddresses,
        bool                                             isServer,
        ::RakNetServerLANVisibility                      serverLanVisibility,
        ::PermissionLAN                                  permissionLAN,
        ::PermissionIPv6                                 permissionIPv6,
        ::Bedrock::NonOwnerPointer<::AppPlatform> const& appPlatform,
        ::std::function<::std::unique_ptr<::RakNet::RakPeerInterface, void (*)(::RakNet::RakPeerInterface*)>()>
            createUniqueRakPeerFunc
#endif // @header-generator platform
    );

    MCNAPI void _activate();

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _addCustomServerFromIpResolver(::AsynchronousIPResolver const&, int);
#else // @header-generator platform
    MCNAPI void _addCustomServerFromIpResolver(::AsynchronousIPResolver const& futureIP, int port);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void
        _enqueueStateChangeRequest(::LocatorStateChangeRequest, ::RakNetServerLocator::AnnounceServerData, ::PortPair);
#else // @header-generator platform
    MCNAPI void _announceServer(::RakNetServerLocator::AnnounceServerData const& serverData);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _onPingSend(std::string const&, std::string const&, int);
#else // @header-generator platform
    MCNAPI void _enqueueStateChangeRequest(
        ::LocatorStateChangeRequest               newState,
        ::RakNetServerLocator::AnnounceServerData newAnnounceData,
        ::PortPair                                newPorts
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _onPongReceive(float&, ::RakNet::RakNetGUID const&, uint const&, int);
#else // @header-generator platform
    MCNAPI ::std::string _getHostGuid(::std::string const& address, int port);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _setPingResponder(::RakNetServerLocator::AnnounceServerData const&);
#else // @header-generator platform
    MCNAPI void _getServerOriginalAddress(::std::string& originalAddressToSet, ::std::string const& ip);

#ifdef LL_PLAT_C
    MCNAPI void _initializeBroadcastAddresses();
#endif

    MCNAPI void _onPingSend(::std::string const& guid, ::std::string const& addr, int ipVersion);

    MCNAPI bool
    _onPongReceive(float& latencyToSet, ::RakNet::RakNetGUID const& guid, uint const& receivedTime, int ipVersion);

    MCNAPI bool _pingServerV4(::std::string const& address, int port);

    MCNAPI bool _pingServerV6(::std::string const& address, int port);

    MCNAPI void _startAnnouncingServer(::RakNetServerLocator::AnnounceServerData const& announceData);

    MCNAPI void _startServerDiscovery(::PortPair const& ports);

    MCNAPI void _stopAnnouncingServer();

    MCNAPI void _stopServerDiscovery();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
#if defined(LL_PLAT_A) // @header-generator platform
        ::RakNetConnector&,
        ::RakPeerHelper::IPSupportInterface&,
        std::vector<std::string>,
        bool,
        ::RakNetServerLANVisibility,
        ::PermissionLAN,
        ::PermissionIPv6,
        ::Bedrock::NonOwnerPointer<AppPlatform> const&,
        std::function<std::unique_ptr<RakNet::RakPeerInterface, void (*)(RakNet::RakPeerInterface*)>()>
#else // @header-generator platform
        ::RakNetConnector&                               rakNetConnector,
        ::RakPeerHelper::IPSupportInterface&             ipInterface,
        ::std::vector<::std::string>                     overrideBroadcastAddresses,
        bool                                             isServer,
        ::RakNetServerLANVisibility                      serverLanVisibility,
        ::PermissionLAN                                  permissionLAN,
        ::PermissionIPv6                                 permissionIPv6,
        ::Bedrock::NonOwnerPointer<::AppPlatform> const& appPlatform,
        ::std::function<::std::unique_ptr<::RakNet::RakPeerInterface, void (*)(::RakNet::RakPeerInterface*)>()>
            createUniqueRakPeerFunc
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
    MCNAPI void $_onDisable();

    MCNAPI void $_onEnable();

#else // @header-generator platform
#endif // @header-generator platform
    MCNAPI void $startAnnouncingServer(
#if defined(LL_PLAT_A) // @header-generator platform
        std::string const&,
        std::string const&,
        ::GameType,
        int,
        int,
        bool,
        bool,
        bool,
        ::ServerSupportedAuthenticationTypes,
#else // @header-generator platform
        ::std::string const&                 playerName,
        ::std::string const&                 worldName,
        ::GameType                           gameType,
        int                                  numPlayers,
        int                                  maxNumPlayers,
        bool                                 isJoinableThroughServerScreen,
        bool                                 isEditorWorld,
        bool                                 isHardcore,
        ::ServerSupportedAuthenticationTypes supportedAuth,
#endif // @header-generator platform
        ::Social::Nonce const&
    );

    MCNAPI void $stopAnnouncingServer();

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $startServerDiscovery(::PortPair);
#else // @header-generator platform
    MCNAPI void $startServerDiscovery(::PortPair ports);
#endif // @header-generator platform

    MCNAPI void $stopServerDiscovery();

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $addCustomServer(std::string const&, int);
#else // @header-generator platform
    MCNAPI void $addCustomServer(::AsynchronousIPResolver const& futureIP, int port);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $addCustomServer(::AsynchronousIPResolver const&, int);
#else // @header-generator platform
    MCNAPI void $addCustomServer(::std::string const& address, int port);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<PingedCompatibleServer> $getServerList() const;
#else // @header-generator platform
    MCNAPI ::std::vector<::PingedCompatibleServer> $getServerList() const;
#endif // @header-generator platform

    MCNAPI void $clearServerList();

    MCNAPI void $update();

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float $getPingTimeForGUID(std::string const&);
#else // @header-generator platform
    MCNAPI float $getPingTimeForGUID(::std::string const& guid);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void
    $checkCanConnectToCustomServerAsync(std::string, int, std::function<void(ServerConnectivityTestResult)>);
    // NOLINTEND
#else // @header-generator platform
    MCNAPI void $checkCanConnectToCustomServerAsync(
        ::std::string                                         hostIpAddress,
        int                                                   port,
        ::std::function<void(::ServerConnectivityTestResult)> callback
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform
    MCNAPI void $_onDisable();

    MCNAPI void $_onEnable();


#endif // @header-generator platform
    // NOLINTEND
};
