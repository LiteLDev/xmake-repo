#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class PDPSectionType : int {
    Home               = 0,
    Bundle             = 1,
    ScreenshotShowcase = 2,
    SkinPack           = 3,
    World              = 4,
    RelatedItems       = 5,
    Rating             = 6,
    RatingSubmit       = 7,
    RecentlyViewed     = 8,
    Addon              = 9,
    Padding            = 10,
    Count              = 11,
    None               = 12,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class PDPSectionType : int {
    Home               = 0,
    Bundle             = 1,
    ScreenshotShowcase = 2,
    SkinPack           = 3,
    World              = 4,
    RelatedItems       = 5,
    Rating             = 6,
    RatingSubmit       = 7,
    RecentlyViewed     = 8,
    Addon              = 9,
    Padding            = 10,
    Count              = 11,
    None               = 12,
};
#else // @header-generator platform
enum class PDPSectionType : int {};
#endif // @header-generator platform
#endif // @header-generator platform
