#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/legacy/facing/Name.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class ChunkBlockPos;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

class SubChunkBlockPos {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<4, 4> mField_24993575;
#else // @header-generator platform
    union {
        struct {
            ::ll::TypedStorage<1, 1, uchar> x;
            ::ll::TypedStorage<1, 1, uchar> y;
            ::ll::TypedStorage<1, 1, uchar> z;
        };
        ::ll::TypedStorage<4, 4, uint> packed;
    };
#endif // @header-generator platform
    // NOLINTEND
};
