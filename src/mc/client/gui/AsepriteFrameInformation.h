#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
struct AsepriteFrameInformation {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> xSource;
    ::ll::TypedStorage<4, 4, int> ySource;
    ::ll::TypedStorage<4, 4, int> msDuration;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct AsepriteFrameInformation {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> xSource;
    ::ll::TypedStorage<4, 4, int> ySource;
    ::ll::TypedStorage<4, 4, int> msDuration;
    // NOLINTEND
};
#else // @header-generator platform
struct AsepriteFrameInformation {};
#endif // @header-generator platform
#endif // @header-generator platform
