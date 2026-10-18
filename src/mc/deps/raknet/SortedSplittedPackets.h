#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace RakNet { struct InternalPacket; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace RakNet {

class SortedSplittedPackets {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::RakNet::InternalPacket**> data;
    ::ll::TypedStorage<4, 4, uint>                       allocation_size;
    ::ll::TypedStorage<4, 4, uint>                       addedPacketsCount;
    ::ll::TypedStorage<2, 2, ushort>                     packetId;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnk737f47;
    ::ll::UntypedStorage<4, 4> mUnk41d47c;
    ::ll::UntypedStorage<4, 4> mUnkeb44fe;
    ::ll::UntypedStorage<2, 2> mUnk57ca23;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    SortedSplittedPackets& operator=(SortedSplittedPackets const&);
    SortedSplittedPackets(SortedSplittedPackets const&);
    SortedSplittedPackets();
#endif // @header-generator platform
};

} // namespace RakNet
