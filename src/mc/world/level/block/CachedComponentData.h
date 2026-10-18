#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/Brightness.h"
#include "mc/world/level/block/BlockOcclusionType.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
class Block;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

struct CachedComponentData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::Brightness>         mEmissiveBrightness;
    ::ll::TypedStorage<1, 1, bool>                 mIsSolid;
    ::ll::TypedStorage<4, 4, ::BlockOcclusionType> mOcclusionType;
    // NOLINTEND
};
