#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/StartupResult.h"

// auto generated forward declare list
// clang-format off
struct ConnectionDefinition;
namespace RakNet { class RakPeerInterface; }
namespace RakNet { struct SocketDescriptor; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Social { class GameConnectionInfo; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class RakPeerHelper {
public:
    // RakPeerHelper inner types declare
    // clang-format off
    class IPSupportInterface;
    // clang-format on

    // RakPeerHelper inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum class PeerPurpose : int {
        Gameplay      = 0,
        LAN_Discovery = 1,
        Count         = 2,
    };

#else // @header-generator platform
#endif // @header-generator platform
    enum class IPVersion : int {
        IPv4  = 0,
        IPv6  = 1,
#if defined(LL_PLAT_A) // @header-generator platform
        COUNT = 2,
#else // @header-generator platform
        Count = 2,
    };

    enum class PeerPurpose : int {
        Gameplay     = 0,
        LanDiscovery = 1,
        Count        = 2,
#endif // @header-generator platform
    };

    class IPSupportInterface {
    public:
        // virtual functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        virtual ~IPSupportInterface();
#else // @header-generator platform
        virtual ~IPSupportInterface() = default;
#endif // @header-generator platform

        virtual bool useIPv4Only() const = 0;

        virtual bool useIPv6Only() const = 0;

        virtual ushort getDefaultGamePort() const = 0;

        virtual ushort getDefaultGamePortv6() const = 0;
#if defined(LL_PLAT_A) // @header-generator platform
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
    ::ll::TypedStorage<4, 4, ::RakNet::StartupResult>              mResult;
    ::ll::TypedStorage<4, 8, int[2]>                               mConnectionIndices;
    ::ll::TypedStorage<2, 4, ushort[2]>                            mBoundPorts;
    ::ll::TypedStorage<8, 8, ::RakPeerHelper::IPSupportInterface&> mIPSupportInterface;
    // NOLINTEND

public:
    // prevent constructor by default
    RakPeerHelper& operator=(RakPeerHelper const&);
    RakPeerHelper(RakPeerHelper const&);
    RakPeerHelper();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::RakNet::StartupResult _startupInternal(
        ::gsl::not_null<RakNet::RakPeerInterface*>,
        ::ConnectionDefinition const&,
        ::RakNet::SocketDescriptor*,
        int&,
        int
#else // @header-generator platform
    MCAPI ::RakNet::StartupResult _startupInternal(
        ::gsl::not_null<::RakNet::RakPeerInterface*> peer,
        ::ConnectionDefinition const&                definition,
        ::RakNet::SocketDescriptor*                  sockets,
        int&                                         socketCount,
        int                                          ipv6Index
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::RakNet::StartupResult
    peerStartup(::RakNet::RakPeerInterface*, ::ConnectionDefinition const&, ::RakPeerHelper::PeerPurpose);
#else // @header-generator platform
    MCAPI ::RakNet::StartupResult peerStartup(
        ::RakNet::RakPeerInterface*   peerIn,
        ::ConnectionDefinition const& definition,
        ::RakPeerHelper::PeerPurpose  purpose
    );
#endif // @header-generator platform
    // NOLINTEND
};
