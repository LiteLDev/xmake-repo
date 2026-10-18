#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"

struct TessellatorQuadInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, uchar>   facing;
    ::ll::TypedStorage<1, 1, uchar>   twoFace;
    ::ll::TypedStorage<4, 12, ::Vec3> centroid;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"

struct TessellatorQuadInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, uchar>   facing;
    ::ll::TypedStorage<1, 1, uchar>   twoFace;
    ::ll::TypedStorage<4, 12, ::Vec3> centroid;
    // NOLINTEND
};
#else // @header-generator platform
struct TessellatorQuadInfo {};
#endif // @header-generator platform
#endif // @header-generator platform
