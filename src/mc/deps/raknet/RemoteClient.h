#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/raknet/SimpleMutex.h"
#include "mc/deps/raknet/SystemAddress.h"
#include "mc/deps/raknet/data_structures/ByteQueue.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace RakNet {

struct RemoteClient {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, int>                          socket;
    ::ll::TypedStorage<8, 136, ::RakNet::SystemAddress>    systemAddress;
    ::ll::TypedStorage<8, 24, ::DataStructures::ByteQueue> outgoingData;
    ::ll::TypedStorage<1, 1, bool>                         isActive;
    ::ll::TypedStorage<4, 40, ::RakNet::SimpleMutex>       outgoingDataMutex;
    ::ll::TypedStorage<4, 40, ::RakNet::SimpleMutex>       isActiveMutex;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8>   mUnk4c556f;
    ::ll::UntypedStorage<8, 136> mUnk15dcb5;
    ::ll::UntypedStorage<8, 24>  mUnk5eab4b;
    ::ll::UntypedStorage<1, 1>   mUnk582874;
    ::ll::UntypedStorage<8, 40>  mUnkdd2d6b;
    ::ll::UntypedStorage<8, 40>  mUnke2d806;
    // NOLINTEND

public:
    // prevent constructor by default
    RemoteClient& operator=(RemoteClient const&);
    RemoteClient(RemoteClient const&);
    RemoteClient();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void SendOrBuffer(char const** data, uint const* lengths, int const numParameters);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace RakNet
