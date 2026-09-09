#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/websockets/TcpProxy.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { class TCPInterface; }
namespace RakNet { struct Packet; }
namespace RakNet { struct SystemAddress; }
// clang-format on

class RakTcpProxy : public ::TcpProxy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<RakNet::TCPInterface>> mTcp;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RakTcpProxy();

    virtual bool start(ushort, ushort, ushort);

    virtual ::RakNet::SystemAddress connect(std::string const&, ushort);

    virtual void send(char const*, uint, ::RakNet::SystemAddress);

    virtual void close(::RakNet::SystemAddress);

    virtual bool packetsAvailable();

    virtual ::RakNet::Packet* nextPacket();

    virtual void deallocatePacket(::RakNet::Packet*);

    virtual ::RakNet::SystemAddress nextCompletedConnectionAttempt();

    virtual ::RakNet::SystemAddress nextFailedConnectionAttempt();

    virtual ::RakNet::SystemAddress nextLostConnection();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $start(ushort, ushort, ushort);

    MCNAPI ::RakNet::SystemAddress $connect(std::string const&, ushort);

    MCNAPI void $send(char const*, uint, ::RakNet::SystemAddress);

    MCNAPI void $close(::RakNet::SystemAddress);

    MCNAPI bool $packetsAvailable();

    MCNAPI ::RakNet::Packet* $nextPacket();

    MCNAPI void $deallocatePacket(::RakNet::Packet*);

    MCNAPI ::RakNet::SystemAddress $nextCompletedConnectionAttempt();

    MCNAPI ::RakNet::SystemAddress $nextFailedConnectionAttempt();

    MCNAPI ::RakNet::SystemAddress $nextLostConnection();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
