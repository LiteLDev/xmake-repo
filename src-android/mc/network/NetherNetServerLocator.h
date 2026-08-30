#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/certificates/identity/ServerSupportedAuthenticationTypes.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/network/ConnectionType.h"
#include "mc/network/Nonce.h"
#include "mc/network/PingedCompatibleServer.h"
#include "mc/network/StubServerLocator.h"
#include "mc/network/TransportLayer.h"
#include "mc/platform/Result.h"
#include "mc/platform/threading/UniqueLock.h"
#include "mc/world/level/GameType.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
class BinaryStream;
class ReadOnlyBinaryStream;
class SignalingService;
struct NetherNetConnector;
struct PortPair;
namespace NetherNet { struct NetworkID; }
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
        // NOLINTEND

    public:
        // prevent constructor by default
        ServerData& operator=(ServerData const&);
        ServerData(ServerData const&);

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
    };

    using Mutex = std::mutex;

    using UniqueLock = ::Bedrock::Threading::UniqueLock<std::mutex>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<PingedCompatibleServer>> mServerList;
    ::ll::UntypedStorage<8, 24>                                    mNetherNetConnector;
    ::ll::TypedStorage<8, 24, std::string>                         mCachedBroadcastDiscoveryResponse;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>     mSignalingStatus;
    ::ll::TypedStorage<1, 1, bool>                                 mAnnouncing;
    ::ll::TypedStorage<1, 1, bool>                                 mDiscovering;
    ::ll::UntypedStorage<8, 96>                                    mServerToAnnounce;
    ::ll::TypedStorage<4, 40, std::mutex>                          mLocatorLock;
    // NOLINTEND

public:
    // prevent constructor by default
    NetherNetServerLocator();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~NetherNetServerLocator();

    virtual void startAnnouncingServer(std::string const&, std::string const&, ::GameType, int, int, bool, bool, bool, ::ServerSupportedAuthenticationTypes, ::Social::Nonce const&);

    virtual void stopAnnouncingServer();

    virtual void startServerDiscovery(::PortPair);

    virtual void stopServerDiscovery();

    virtual std::vector<PingedCompatibleServer> getServerList() const;

    virtual void clearServerList();

    virtual void update();
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI NetherNetServerLocator(
        ::gsl::not_null<Bedrock::NonOwnerPointer<NetherNetConnector>>&&,
        ::Bedrock::NonOwnerPointer<AppPlatform> const&,
        ::Bedrock::NonOwnerPointer<SignalingService>
    );

    MCNAPI void _cacheDiscoveryResponseData();

    MCNAPI void _setDiscoveryRequestCallback(bool);

    MCNAPI void _setDiscoveryResponseCallback(bool);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::gsl::not_null<Bedrock::NonOwnerPointer<NetherNetConnector>>&&,
        ::Bedrock::NonOwnerPointer<AppPlatform> const&,
        ::Bedrock::NonOwnerPointer<SignalingService>
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

    MCNAPI std::vector<PingedCompatibleServer> $getServerList() const;

    MCNAPI void $clearServerList();

    MCNAPI void $update();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
