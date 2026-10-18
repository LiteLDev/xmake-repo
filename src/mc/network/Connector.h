#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/TransportLayer.h"
#include "mc/network/connection/DisconnectFailReason.h"

// auto generated forward declare list
// clang-format off
class NetworkIdentifier;
class NetworkPeer;
namespace Json { class Value; }
namespace Social { class GameConnectionInfo; }
namespace Social { struct ResolvedExperienceInfo; }
// clang-format on

class Connector {
public:
    // Connector inner types declare
    // clang-format off
    struct ConnectionCallbacks;
    // clang-format on

    // Connector inner types define
    struct ConnectionCallbacks {
    public:
        // virtual functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        // clang-format off
        virtual ~ConnectionCallbacks();
    
        virtual bool onNewIncomingConnection(::NetworkIdentifier const&, std::shared_ptr<NetworkPeer>&&) = 0;
    
        virtual bool onNewOutgoingConnection(::NetworkIdentifier const&, std::shared_ptr<NetworkPeer>&&) = 0;
    
        virtual void onConnectionClosed(::NetworkIdentifier const&, ::Connection::DisconnectFailReason const, std::string const&, std::string const&, bool, ::Json::Value const&) = 0;
        // clang-format on
        // NOLINTEND
#else // @header-generator platform
        virtual ~ConnectionCallbacks() = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
#else // @header-generator platform
        virtual bool
        onNewIncomingConnection(::NetworkIdentifier const& id, ::std::shared_ptr<::NetworkPeer>&& peer) = 0;

        virtual bool
        onNewOutgoingConnection(::NetworkIdentifier const& id, ::std::shared_ptr<::NetworkPeer>&& peer) = 0;

        virtual void onConnectionClosed(
            ::NetworkIdentifier const&               id,
            ::Connection::DisconnectFailReason const discoReason,
            ::std::string const&                     messageFromServer,
            ::std::string const&                     messageBodyOverride,
            bool                                     skipDisconnectMessage,
            ::Json::Value const&                     sessionSummary
        ) = 0;
#endif // @header-generator platform
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Connector::ConnectionCallbacks&> mCallbacks;
    // NOLINTEND

public:
    // prevent constructor by default
    Connector& operator=(Connector const&);
    Connector(Connector const&);
    Connector();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~Connector();
#else // @header-generator platform
    virtual ~Connector() = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string getLocalIp();
#else // @header-generator platform
    virtual ::std::string getLocalIp();
#endif // @header-generator platform

    virtual ushort getPort() const;

    virtual ::Social::GameConnectionInfo const& getConnectedGameInfo() const;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setConnectedResolvedExperienceInfo(std::optional<Social::ResolvedExperienceInfo> const&);
#else // @header-generator platform
    virtual void
    setConnectedResolvedExperienceInfo(::std::optional<::Social::ResolvedExperienceInfo> const& resolvedExperienceInfo);
#endif // @header-generator platform

    virtual bool isIPv4Supported() const;

    virtual bool isIPv6Supported() const;

    virtual ushort getIPv4Port() const;

    virtual ushort getIPv6Port() const;

    virtual ::TransportLayer getNetworkType() const;
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit Connector(::Connector::ConnectionCallbacks&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Connector::ConnectionCallbacks&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
#else // @header-generator platform
#endif // @header-generator platform
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string $getLocalIp();
#else // @header-generator platform
    MCFOLD ::std::string $getLocalIp();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ushort $getPort() const;
#else // @header-generator platform
    MCFOLD ushort $getPort() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Social::GameConnectionInfo const& $getConnectedGameInfo() const;
#else // @header-generator platform
    MCFOLD ::Social::GameConnectionInfo const& $getConnectedGameInfo() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setConnectedResolvedExperienceInfo(std::optional<Social::ResolvedExperienceInfo> const&);
#else // @header-generator platform
    MCFOLD void $setConnectedResolvedExperienceInfo(
        ::std::optional<::Social::ResolvedExperienceInfo> const& resolvedExperienceInfo
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isIPv4Supported() const;
#else // @header-generator platform
    MCFOLD bool $isIPv4Supported() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isIPv6Supported() const;
#else // @header-generator platform
    MCFOLD bool $isIPv6Supported() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ushort $getIPv4Port() const;
#else // @header-generator platform
    MCFOLD ushort $getIPv4Port() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ushort $getIPv6Port() const;
#else // @header-generator platform
    MCFOLD ushort $getIPv6Port() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::TransportLayer $getNetworkType() const;
#else // @header-generator platform
    MCFOLD ::TransportLayer $getNetworkType() const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
