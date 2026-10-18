#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/network/PacketCompressionAlgorithm.h"
#else // @header-generator platform
#endif // @header-generator platform

struct CompressionHeader {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, uchar> mRaw;
#else // @header-generator platform
    ::ll::UntypedStorage<1, 1> mUnk7d66d6;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    CompressionHeader& operator=(CompressionHeader const&);
    CompressionHeader(CompressionHeader const&);
    CompressionHeader();
#endif // @header-generator platform
};
