#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
class Pos;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

struct SubChunkLightIndex {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<4, 4> mField_c248868f;
#else // @header-generator platform
    union {
        struct {
            uint mSubChunkBlockY : 4;
            uint mChunkIndexY    : 2;
            uint mSubChunkBlockZ : 4;
            uint mChunkIndexZ    : 2;
            uint mSubChunkBlockX : 4;
            uint mChunkIndexX    : 2;
            uint mPad            : 8;
        };
        struct {
            uint mToDoIndex : 18;
            uint mPad2      : 14;
        };
        ::ll::TypedStorage<4, 4, uint> mData;
    };
#endif // @header-generator platform
    // NOLINTEND
};
