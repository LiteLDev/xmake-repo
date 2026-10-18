#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/certificates/identity/ServerSupportedAuthenticationTypes.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/core/utility/NonOwnerPointer.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/network/ConnectionType.h"
#include "mc/network/Nonce.h"
#include "mc/network/PingedCompatibleServer.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/network/StubServerLocator.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/network/TransportLayer.h"
#include "mc/platform/Result.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/platform/threading/UniqueLock.h"
#include "mc/world/level/GameType.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
#if defined(LL_PLAT_A) // @header-generator platform
class BinaryStream;
class ReadOnlyBinaryStream;
#else // @header-generator platform
#endif // @header-generator platform
class SignalingService;
struct NetherNetConnector;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct PingedCompatibleServer;
#endif // @header-generator platform
struct PortPair;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct ServerSupportedAuthenticationTypes;
namespace Bedrock::Threading { class Mutex; }
#endif // @header-generator platform
namespace NetherNet { struct NetworkID; }
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace Social { struct Nonce; }
#endif // @header-generator platform
// clang-format on

class NetherNetServerLocator : public ::StubServerLocator {
public:
    // NetherNetServerLocator inner types declare
    // clang-format off
    struct ServerData;
    // clang-format on

    // NetherNetServerLocator inner types define
    struct ServerData {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 24, std::string>                         mServerName;
        ::ll::TypedStorage<8, 24, std::string>                         mLevelName;
        ::ll::TypedStorage<4, 4, ::GameType>                           mGameType;
        ::ll::TypedStorage<4, 4, int>                                  mNumPlayers;
        ::ll::TypedStorage<4, 4, int>                                  mMaxNumPlayers;
        ::ll::TypedStorage<1, 1, bool>                                 mIsEditorWorld;
        ::ll::TypedStorage<1, 1, bool>                                 mIsHardcore;
        ::ll::TypedStorage<1, 2, ::ServerSupportedAuthenticationTypes> mSupportedAuth;
        ::ll::UntypedStorage<8, 24>                                    mNonce;
        ::ll::TypedStorage<4, 4, ::TransportLayer>                     mTransportLayer;
        ::ll::TypedStorage<2, 2, ::Social::ConnectionType>             mConnectionType;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 32> mUnke25e40;
        ::ll::UntypedStorage<8, 32> mUnk7d9cc2;
        ::ll::UntypedStorage<4, 4>  mUnkab0aac;
        ::ll::UntypedStorage<4, 4>  mUnk3ed176;
        ::ll::UntypedStorage<4, 4>  mUnkc83c1f;
        ::ll::UntypedStorage<1, 1>  mUnk91bac1;
        ::ll::UntypedStorage<1, 1>  mUnk1b4aaf;
        ::ll::UntypedStorage<1, 2>  mUnkd722a4;
        ::ll::UntypedStorage<8, 32> mUnkcbabae;
        ::ll::UntypedStorage<4, 4>  mUnk21552f;
        ::ll::UntypedStorage<2, 2>  mUnkb17aa9;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // prevent constructor by default
        ServerData& operator=(ServerData const&);
        ServerData(ServerData const&);
#if defined(LL_PLAT_A) // @header-generator platform

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ::Bedrock::Result<void, std::error_code> read(::ReadOnlyBinaryStream&);

        MCNAPI ~ServerData();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
#else // @header-generator platform
        ServerData();
#endif // @header-generator platform
    };
#if defined(LL_PLAT_A) // @header-generator platform

    using Mutex = std::mutex;

    using UniqueLock = ::Bedrock::Threading::UniqueLock<std::mutex>;
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<PingedCompatibleServer>> mServerList;
    ::ll::UntypedStorage<8, 24>                                    mNetherNetConnector;
    ::ll::TypedStorage<8, 24, std::string>                         mCachedBroadcastDiscoveryResponse;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>     mSignalingStatus;
    ::ll::TypedStorage<1, 1, bool>                                 mAnnouncing;
    ::ll::TypedStorage<1, 1, bool>                                 mDiscovering;
    ::ll::UntypedStorage<8, 96>                                    mServerToAnnounce;
    ::ll::TypedStorage<4, 40, std::mutex>                          mLocatorLock;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 24>  mUnk8d94d4;
    ::ll::UntypedStorage<8, 24>  mUnka0ecad;
    ::ll::UntypedStorage<8, 32>  mUnk86854a;
    ::ll::UntypedStorage<8, 16>  mUnkeab7f7;
    ::ll::UntypedStorage<1, 1>   mUnkfee0d4;
    ::ll::UntypedStorage<1, 1>   mUnk646852;
    ::ll::UntypedStorage<8, 120> mUnk330682;
    ::ll::UntypedStorage<8, 80>  mUnk1547c8;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    NetherNetServerLocator& operator=(NetherNetServerLocator const&);
    NetherNetServerLocator(NetherNetServerLocator const&);
#endif // @header-generator platform
    NetherNetServerLocator();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~NetherNetServerLocator();
#else // @header-generator platform
    virtual ~NetherNetServerLocator() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void startAnnouncingServer(std::string const&, std::string const&, ::GameType, int, int, bool, bool, bool, ::ServerSupportedAuthenticationTypes, ::Social::Nonce const&);
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
        ::Social::Nonce const&               nonce
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void stopAnnouncingServer();
#else // @header-generator platform
    virtual void stopAnnouncingServer() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void startServerDiscovery(::PortPair);
#else // @header-generator platform
    virtual void startServerDiscovery(::PortPair ports) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void stopServerDiscovery();
#else // @header-generator platform
    virtual void stopServerDiscovery() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::vector<PingedCompatibleServer> getServerList() const;
#else // @header-generator platform
    virtual ::std::vector<::PingedCompatibleServer> getServerList() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void clearServerList();
#else // @header-generator platform
    virtual void clearServerList() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void update();
    // clang-format on
#else // @header-generator platform
    virtual void update() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI NetherNetServerLocator(
#if defined(LL_PLAT_A) // @header-generator platform
        ::gsl::not_null<Bedrock::NonOwnerPointer<NetherNetConnector>>&&,
        ::Bedrock::NonOwnerPointer<AppPlatform> const&,
        ::Bedrock::NonOwnerPointer<SignalingService>
#else // @header-generator platform
        ::Bedrock::NotNullNonOwnerPtr<::NetherNetConnector>&& connector,
        ::Bedrock::NonOwnerPointer<::AppPlatform> const&      appPlatform,
        ::Bedrock::NonOwnerPointer<::SignalingService>        signalingService
#endif // @header-generator platform
    );

    MCNAPI void _cacheDiscoveryResponseData();

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _setDiscoveryRequestCallback(bool);
#else // @header-generator platform
    MCNAPI void _onDiscoveryResponse(::NetherNet::NetworkID const& networkID, ::gsl::span<char const> responseData);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _setDiscoveryResponseCallback(bool);
#else // @header-generator platform
    MCNAPI void _setDiscoveryRequestCallback(bool enable);

    MCNAPI void _setDiscoveryResponseCallback(bool enable);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
#if defined(LL_PLAT_A) // @header-generator platform
        ::gsl::not_null<Bedrock::NonOwnerPointer<NetherNetConnector>>&&,
        ::Bedrock::NonOwnerPointer<AppPlatform> const&,
        ::Bedrock::NonOwnerPointer<SignalingService>
#else // @header-generator platform
        ::Bedrock::NotNullNonOwnerPtr<::NetherNetConnector>&& connector,
        ::Bedrock::NonOwnerPointer<::AppPlatform> const&      appPlatform,
        ::Bedrock::NonOwnerPointer<::SignalingService>        signalingService
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
        ::Social::Nonce const&
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
        ::Social::Nonce const&               nonce
#endif // @header-generator platform
    );

    MCNAPI void $stopAnnouncingServer();

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $startServerDiscovery(::PortPair);
#else // @header-generator platform
    MCNAPI void $startServerDiscovery(::PortPair ports);
#endif // @header-generator platform

    MCNAPI void $stopServerDiscovery();

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<PingedCompatibleServer> $getServerList() const;
#else // @header-generator platform
    MCNAPI ::std::vector<::PingedCompatibleServer> $getServerList() const;
#endif // @header-generator platform

    MCNAPI void $clearServerList();

    MCNAPI void $update();
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
