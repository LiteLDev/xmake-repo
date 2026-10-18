#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/raknet/RakNetGUID.h"
#include "mc/deps/raknet/SystemAddress.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace RakNet {

struct Packet {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 136, ::RakNet::SystemAddress> systemAddress;
    ::ll::TypedStorage<8, 16, ::RakNet::RakNetGUID>     guid;
    ::ll::TypedStorage<4, 4, uint>                      length;
    ::ll::TypedStorage<4, 4, uint>                      bitSize;
    ::ll::TypedStorage<8, 8, uchar*>                    data;
    ::ll::TypedStorage<1, 1, bool>                      deleteData;
    ::ll::TypedStorage<1, 1, bool>                      wasGeneratedLocally;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 136> mUnk4c7ea6;
    ::ll::UntypedStorage<8, 16>  mUnk3a468a;
    ::ll::UntypedStorage<4, 4>   mUnk80581e;
    ::ll::UntypedStorage<4, 4>   mUnk36479c;
    ::ll::UntypedStorage<8, 8>   mUnka0d95b;
    ::ll::UntypedStorage<1, 1>   mUnkd837bb;
    ::ll::UntypedStorage<1, 1>   mUnk2e9d47;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    Packet& operator=(Packet const&);
    Packet(Packet const&);
    Packet();
#endif // @header-generator platform
};

} // namespace RakNet
