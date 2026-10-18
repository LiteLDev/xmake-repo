#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/Connector.h"
#include "mc/network/NetworkIdentifier.h"
#include "mc/network/TransportLayer.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/platform/threading/Mutex.h"
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class LocalConnectivitySystem;
#if defined(LL_PLAT_A) // @header-generator platform
class LocalNetworkPeer;
#else // @header-generator platform
#endif // @header-generator platform
namespace Social { class GameConnectionInfo; }
// clang-format on

#if defined(LL_PLAT_A) // @header-generator platform
class LocalConnector : public ::Connector, public ::std::enable_shared_from_this<LocalConnector> {
#else // @header-generator platform
class LocalConnector : public ::Connector, public ::std::enable_shared_from_this<::LocalConnector> {
#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 40, std::mutex>                                                           mMutex;
    ::ll::TypedStorage<8, 176, ::NetworkIdentifier>                                                 mLocalId;
    ::ll::TypedStorage<8, 40, std::unordered_map<NetworkIdentifier, std::weak_ptr<LocalConnector>>> mConnectionsMap;
    ::ll::TypedStorage<8, 24, std::vector<std::function<void()>>>                                   mCallbackQueue;
#else // @header-generator platform
    ::ll::TypedStorage<8, 80, ::Bedrock::Threading::Mutex> mMutex;
    ::ll::TypedStorage<8, 176, ::NetworkIdentifier>        mLocalId;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::NetworkIdentifier, ::std::weak_ptr<::LocalConnector>>>
                                                                      mConnectionsMap;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::function<void()>>> mCallbackQueue;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    LocalConnector();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~LocalConnector();
#else // @header-generator platform
    virtual ~LocalConnector() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string getLocalIp();
#else // @header-generator platform
    virtual ::std::string getLocalIp() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ushort getPort() const;
#else // @header-generator platform
    virtual ushort getPort() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Social::GameConnectionInfo const& getConnectedGameInfo() const;
#else // @header-generator platform
    virtual ::Social::GameConnectionInfo const& getConnectedGameInfo() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isIPv4Supported() const;
#else // @header-generator platform
    virtual bool isIPv4Supported() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isIPv6Supported() const;
#else // @header-generator platform
    virtual bool isIPv6Supported() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ushort getIPv4Port() const;
#else // @header-generator platform
    virtual ushort getIPv4Port() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ushort getIPv6Port() const;
#else // @header-generator platform
    virtual ushort getIPv6Port() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::TransportLayer getNetworkType() const;
#else // @header-generator platform
    virtual ::TransportLayer getNetworkType() const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI LocalConnector(::Connector::ConnectionCallbacks&, ::NetworkIdentifier const&);

    MCNAPI bool connect(::NetworkIdentifier const&);

    MCNAPI void disconnect(bool);

    MCNAPI void host(::NetworkIdentifier const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI bool connect(::NetworkIdentifier const& id);

    MCNAPI void disconnect(bool skipMessage);
#endif
#endif // @header-generator platform

    MCNAPI void runEvents();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::LocalConnectivitySystem& sLocalConnectivitySystem();
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Connector::ConnectionCallbacks&, ::NetworkIdentifier const&);
    // NOLINTEND

public:
#else // @header-generator platform
#endif // @header-generator platform
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string $getLocalIp();
#else // @header-generator platform
    MCNAPI ::std::string $getLocalIp();
#endif // @header-generator platform

    MCNAPI ushort $getPort() const;

    MCNAPI ::Social::GameConnectionInfo const& $getConnectedGameInfo() const;

    MCNAPI bool $isIPv4Supported() const;

    MCNAPI bool $isIPv6Supported() const;

    MCNAPI ushort $getIPv4Port() const;

    MCNAPI ushort $getIPv6Port() const;

    MCNAPI ::TransportLayer $getNetworkType() const;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
