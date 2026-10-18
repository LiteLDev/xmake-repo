#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/raknet/SortedSplittedPackets.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { struct InternalPacket; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace RakNet {

struct SplitPacketChannel {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ulong>                            lastUpdateTime;
    ::ll::TypedStorage<8, 24, ::RakNet::SortedSplittedPackets> splitPacketList;
    ::ll::TypedStorage<8, 8, ::RakNet::InternalPacket*>        firstPacket;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8>  mUnkc30349;
    ::ll::UntypedStorage<8, 24> mUnkf5877e;
    ::ll::UntypedStorage<8, 8>  mUnkd3a32a;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    SplitPacketChannel& operator=(SplitPacketChannel const&);
    SplitPacketChannel(SplitPacketChannel const&);
    SplitPacketChannel();
#endif // @header-generator platform
};

} // namespace RakNet
