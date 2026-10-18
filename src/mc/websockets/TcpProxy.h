#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { struct Packet; }
namespace RakNet { struct SystemAddress; }
// clang-format on

class TcpProxy {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TcpProxy() = default;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool start(ushort, ushort, ushort) = 0;
#else // @header-generator platform
    virtual bool start(ushort port, ushort maxIncomming, ushort maxOutgoing) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::RakNet::SystemAddress connect(std::string const&, ushort) = 0;
#else // @header-generator platform
    virtual ::RakNet::SystemAddress connect(::std::string const& host, ushort port) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void send(char const*, uint, ::RakNet::SystemAddress) = 0;
#else // @header-generator platform
    virtual void send(char const* data, uint length, ::RakNet::SystemAddress address) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void close(::RakNet::SystemAddress) = 0;
#else // @header-generator platform
    virtual void close(::RakNet::SystemAddress address) = 0;
#endif // @header-generator platform

    virtual bool packetsAvailable() = 0;

    virtual ::RakNet::Packet* nextPacket() = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void deallocatePacket(::RakNet::Packet*) = 0;
#else // @header-generator platform
    virtual void deallocatePacket(::RakNet::Packet* packet) = 0;
#endif // @header-generator platform

    virtual ::RakNet::SystemAddress nextCompletedConnectionAttempt() = 0;

    virtual ::RakNet::SystemAddress nextFailedConnectionAttempt() = 0;

    virtual ::RakNet::SystemAddress nextLostConnection() = 0;
    // NOLINTEND
};
