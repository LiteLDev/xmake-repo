#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/websockets/TcpProxy.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
namespace RakNet { class TCPInterface; }
#else // @header-generator platform
#endif // @header-generator platform
namespace RakNet { struct Packet; }
namespace RakNet { struct SystemAddress; }
// clang-format on

class RakTcpProxy : public ::TcpProxy {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::unique_ptr<RakNet::TCPInterface>> mTcp;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnk30bf73;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    RakTcpProxy& operator=(RakTcpProxy const&);
    RakTcpProxy(RakTcpProxy const&);
    RakTcpProxy();
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~RakTcpProxy();
#else // @header-generator platform
    virtual ~RakTcpProxy() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool start(ushort, ushort, ushort);
#else // @header-generator platform
    virtual bool start(ushort port, ushort maxIncomming, ushort maxOutgoing) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::RakNet::SystemAddress connect(std::string const&, ushort);
#else // @header-generator platform
    virtual ::RakNet::SystemAddress connect(::std::string const& host, ushort port) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void send(char const*, uint, ::RakNet::SystemAddress);
#else // @header-generator platform
    virtual void send(char const* data, uint length, ::RakNet::SystemAddress address) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void close(::RakNet::SystemAddress);
#else // @header-generator platform
    virtual void close(::RakNet::SystemAddress address) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool packetsAvailable();
#else // @header-generator platform
    virtual bool packetsAvailable() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::RakNet::Packet* nextPacket();
#else // @header-generator platform
    virtual ::RakNet::Packet* nextPacket() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void deallocatePacket(::RakNet::Packet*);
#else // @header-generator platform
    virtual void deallocatePacket(::RakNet::Packet* packet) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::RakNet::SystemAddress nextCompletedConnectionAttempt();
#else // @header-generator platform
    virtual ::RakNet::SystemAddress nextCompletedConnectionAttempt() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::RakNet::SystemAddress nextFailedConnectionAttempt();
#else // @header-generator platform
    virtual ::RakNet::SystemAddress nextFailedConnectionAttempt() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::RakNet::SystemAddress nextLostConnection();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual ::RakNet::SystemAddress nextLostConnection() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $start(ushort, ushort, ushort);
#else // @header-generator platform
    MCNAPI bool $start(ushort port, ushort maxIncomming, ushort maxOutgoing);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::RakNet::SystemAddress $connect(std::string const&, ushort);
#else // @header-generator platform
    MCNAPI ::RakNet::SystemAddress $connect(::std::string const& host, ushort port);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $send(char const*, uint, ::RakNet::SystemAddress);
#else // @header-generator platform
    MCNAPI void $send(char const* data, uint length, ::RakNet::SystemAddress address);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $close(::RakNet::SystemAddress);
#else // @header-generator platform
    MCNAPI void $close(::RakNet::SystemAddress address);
#endif // @header-generator platform

    MCNAPI bool $packetsAvailable();

    MCNAPI ::RakNet::Packet* $nextPacket();

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $deallocatePacket(::RakNet::Packet*);
#else // @header-generator platform
    MCNAPI void $deallocatePacket(::RakNet::Packet* packet);
#endif // @header-generator platform

    MCNAPI ::RakNet::SystemAddress $nextCompletedConnectionAttempt();

    MCNAPI ::RakNet::SystemAddress $nextFailedConnectionAttempt();

    MCNAPI ::RakNet::SystemAddress $nextLostConnection();
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
