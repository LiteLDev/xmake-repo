#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
struct BatchVisualState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mAlpha;
    ::ll::TypedStorage<4, 4, float> mPropagatedAlpha;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct BatchVisualState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mAlpha;
    ::ll::TypedStorage<4, 4, float> mPropagatedAlpha;
    // NOLINTEND
};
#else // @header-generator platform
struct BatchVisualState {};
#endif // @header-generator platform
#endif // @header-generator platform
