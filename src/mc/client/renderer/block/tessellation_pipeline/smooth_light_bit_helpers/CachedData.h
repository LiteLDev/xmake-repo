#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/world/level/block/BrightnessPair.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/world/level/block/BrightnessPair.h"

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace ClientBlockPipeline::SmoothLightBitHelpers {

#if defined(LL_PLAT_A) // @header-generator platform
struct CachedData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>                  solidBits;
    ::ll::TypedStorage<4, 4, uint>                  blockedGrid;
    ::ll::TypedStorage<1, 54, ::BrightnessPair[27]> brightness;
    ::ll::TypedStorage<4, 108, float[27]>           ao;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct CachedData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>                  solidBits;
    ::ll::TypedStorage<4, 4, uint>                  blockedGrid;
    ::ll::TypedStorage<1, 54, ::BrightnessPair[27]> brightness;
    ::ll::TypedStorage<4, 108, float[27]>           ao;
    // NOLINTEND
};
#else // @header-generator platform
struct CachedData {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace ClientBlockPipeline::SmoothLightBitHelpers
