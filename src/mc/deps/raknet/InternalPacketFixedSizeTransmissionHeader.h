#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/raknet/PacketReliability.h"
#include "mc/deps/raknet/uint24_t.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace RakNet {

struct InternalPacketFixedSizeTransmissionHeader {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, ::RakNet::uint24_t>  reliableMessageNumber;
    ::ll::TypedStorage<4, 4, ::RakNet::uint24_t>  orderingIndex;
    ::ll::TypedStorage<4, 4, ::RakNet::uint24_t>  sequencingIndex;
    ::ll::TypedStorage<1, 1, uchar>               orderingChannel;
    ::ll::TypedStorage<2, 2, ushort>              splitPacketId;
    ::ll::TypedStorage<4, 4, uint>                splitPacketIndex;
    ::ll::TypedStorage<4, 4, uint>                splitPacketCount;
    ::ll::TypedStorage<4, 4, uint>                dataBitLength;
    ::ll::TypedStorage<4, 4, ::PacketReliability> reliability;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4> mUnk541b2b;
    ::ll::UntypedStorage<4, 4> mUnkdb008b;
    ::ll::UntypedStorage<4, 4> mUnk273818;
    ::ll::UntypedStorage<1, 1> mUnk4e245e;
    ::ll::UntypedStorage<2, 2> mUnk855cfb;
    ::ll::UntypedStorage<4, 4> mUnk29a47f;
    ::ll::UntypedStorage<4, 4> mUnke66794;
    ::ll::UntypedStorage<4, 4> mUnkfcbc2d;
    ::ll::UntypedStorage<4, 4> mUnke679ec;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    InternalPacketFixedSizeTransmissionHeader& operator=(InternalPacketFixedSizeTransmissionHeader const&);
    InternalPacketFixedSizeTransmissionHeader(InternalPacketFixedSizeTransmissionHeader const&);
    InternalPacketFixedSizeTransmissionHeader();
#endif // @header-generator platform
};

} // namespace RakNet
