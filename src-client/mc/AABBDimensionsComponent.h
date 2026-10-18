#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Vec3;
// clang-format on

class AABBDimensionsComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mHalfWidth;
    ::ll::TypedStorage<4, 4, float> mHeight;
    // NOLINTEND

public:
    // prevent constructor by default
    AABBDimensionsComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::AABB at(::Vec3 const&, float) const;
    // NOLINTEND
};
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
