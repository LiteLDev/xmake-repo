#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/world/level/ScalarOptional.h"

// auto generated forward declare list
// clang-format off
class SubChunkBlockPos;
struct BiomeIdType;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

class BlendingBiomeProvider2D {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::array<BiomeIdType, 256>&> mBiomes;
    ::ll::TypedStorage<1, 1, uchar>                         mSubChunkBlockIndex;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnk97c99f;
    ::ll::UntypedStorage<1, 1> mUnk9de33d;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    BlendingBiomeProvider2D& operator=(BlendingBiomeProvider2D const&);
    BlendingBiomeProvider2D(BlendingBiomeProvider2D const&);
    BlendingBiomeProvider2D();
};
