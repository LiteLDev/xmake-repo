#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace texd {

struct CompressedBlockInfo {
#if defined(LL_PLAT_A) // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>  width;
    ::ll::TypedStorage<4, 4, uint>  height;
    ::ll::TypedStorage<8, 8, ulong> sizeInBytes;
    // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>   width;
    ::ll::TypedStorage<4, 4, uint>   height;
    ::ll::TypedStorage<8, 8, uint64> sizeInBytes;
    // NOLINTEND
#else // @header-generator platform
    uint   width;
    uint   height;
    uint64 sizeInBytes;
#endif // @header-generator platform
#endif // @header-generator platform
};

} // namespace texd
