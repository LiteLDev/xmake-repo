#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/SimpleMutex.h"
#include "mc/deps/raknet/SystemAddress.h"
#include "mc/deps/raknet/data_structures/ByteQueue.h"

namespace RakNet {

struct RemoteClient {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                          socket;
    ::ll::TypedStorage<8, 136, ::RakNet::SystemAddress>    systemAddress;
    ::ll::TypedStorage<8, 24, ::DataStructures::ByteQueue> outgoingData;
    ::ll::TypedStorage<1, 1, bool>                         isActive;
    ::ll::TypedStorage<4, 40, ::RakNet::SimpleMutex>       outgoingDataMutex;
    ::ll::TypedStorage<4, 40, ::RakNet::SimpleMutex>       isActiveMutex;
    // NOLINTEND
};

} // namespace RakNet
