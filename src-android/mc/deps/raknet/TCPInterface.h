#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/LocklessUint32_t.h"
#include "mc/deps/raknet/SimpleMutex.h"
#include "mc/deps/raknet/SystemAddress.h"
#include "mc/deps/raknet/data_structures/List.h"
#include "mc/deps/raknet/data_structures/Queue.h"
#include "mc/deps/raknet/data_structures/ThreadsafeAllocatingQueue.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { class PluginInterface2; }
namespace RakNet { struct Packet; }
namespace RakNet { struct RemoteClient; }
// clang-format on

namespace RakNet {

class TCPInterface {
public:
    // TCPInterface inner types declare
    // clang-format off
    struct ThisPtrPlusSysAddr;
    // clang-format on

    // TCPInterface inner types define
    struct ThisPtrPlusSysAddr {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::RakNet::TCPInterface*>   tcpInterface;
        ::ll::TypedStorage<8, 136, ::RakNet::SystemAddress> systemAddress;
        ::ll::TypedStorage<1, 1, bool>                      useSSL;
        ::ll::TypedStorage<1, 64, char[64]>                 bindAddress;
        ::ll::TypedStorage<2, 2, ushort>                    socketFamily;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16>                           messageHandlerList;
    ::ll::TypedStorage<4, 44, ::RakNet::LocklessUint32_t> isStarted;
    ::ll::TypedStorage<4, 44, ::RakNet::LocklessUint32_t> threadRunning;
    ::ll::TypedStorage<4, 4, int>                         listenSocket;
    ::ll::TypedStorage<2, 2, ushort>                      listenPort;
    ::ll::TypedStorage<2, 2, ushort>                      listenMaxIncomingConnections;
    ::ll::TypedStorage<2, 2, ushort>                      listenSocketFamily;
    ::ll::TypedStorage<8, 8, char*>                       listenHostAddress;
    ::ll::UntypedStorage<8, 24>                           headPush;
    ::ll::UntypedStorage<8, 24>                           tailPush;
    ::ll::TypedStorage<8, 8, ::RakNet::RemoteClient*>     remoteClients;
    ::ll::TypedStorage<4, 4, int>                         remoteClientsLength;
    ::ll::UntypedStorage<8, 136>                          incomingMessages;
    ::ll::UntypedStorage<8, 136>                          newIncomingConnections;
    ::ll::UntypedStorage<8, 136>                          lostConnections;
    ::ll::UntypedStorage<8, 136>                          requestedCloseConnections;
    ::ll::UntypedStorage<8, 136>                          newRemoteClients;
    ::ll::TypedStorage<4, 40, ::RakNet::SimpleMutex>      completedConnectionAttemptMutex;
    ::ll::TypedStorage<4, 40, ::RakNet::SimpleMutex>      failedConnectionAttemptMutex;
    ::ll::UntypedStorage<8, 24>                           completedConnectionAttempts;
    ::ll::UntypedStorage<8, 24>                           failedConnectionAttempts;
    ::ll::TypedStorage<4, 4, int>                         threadPriority;
    ::ll::UntypedStorage<8, 16>                           blockingSocketList;
    ::ll::TypedStorage<4, 40, ::RakNet::SimpleMutex>      blockingSocketListMutex;
    // NOLINTEND
};

} // namespace RakNet
