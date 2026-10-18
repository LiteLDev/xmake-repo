#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

struct SocketDescriptor {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<2, 2, ushort>    port;
    ::ll::TypedStorage<1, 32, char[32]> hostAddress;
    ::ll::TypedStorage<2, 2, short>     socketFamily;
    ::ll::TypedStorage<2, 2, ushort>    remotePortRakNetWasStartedOn_PS3_PSP2;
    ::ll::TypedStorage<4, 4, int>       chromeInstance;
    ::ll::TypedStorage<1, 1, bool>      blockingSocket;
    ::ll::TypedStorage<4, 4, uint>      extraSocketOptions;
#else // @header-generator platform
    ::ll::UntypedStorage<2, 2>  mUnkb22ff8;
    ::ll::UntypedStorage<1, 32> mUnk49c06c;
    ::ll::UntypedStorage<2, 2>  mUnkd9c721;
    ::ll::UntypedStorage<2, 2>  mUnk2cd57c;
    ::ll::UntypedStorage<4, 4>  mUnkbdabaa;
    ::ll::UntypedStorage<1, 1>  mUnk4d2ea1;
    ::ll::UntypedStorage<4, 4>  mUnk5da729;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    SocketDescriptor& operator=(SocketDescriptor const&);
    SocketDescriptor(SocketDescriptor const&);
    SocketDescriptor();
#endif // @header-generator platform
};

} // namespace RakNet
