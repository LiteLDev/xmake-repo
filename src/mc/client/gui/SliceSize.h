#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ui {

#if defined(LL_PLAT_A) // @header-generator platform
struct SliceSize {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> left;
    ::ll::TypedStorage<4, 4, float> top;
    ::ll::TypedStorage<4, 4, float> right;
    ::ll::TypedStorage<4, 4, float> bottom;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct SliceSize {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> left;
    ::ll::TypedStorage<4, 4, float> top;
    ::ll::TypedStorage<4, 4, float> right;
    ::ll::TypedStorage<4, 4, float> bottom;
    // NOLINTEND
};
#else // @header-generator platform
struct SliceSize {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace ui
