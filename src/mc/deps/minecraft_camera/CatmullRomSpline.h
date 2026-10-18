#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
class Vec3;
// clang-format on
#endif // @header-generator platform

class CatmullRomSpline {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<Vec3>>  mControlPoints;
    ::ll::TypedStorage<8, 24, std::vector<float>> mAccumulatedSegmentLengths;
    ::ll::TypedStorage<1, 1, bool>                mLooped;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::Vec3>> mControlPoints;
    ::ll::TypedStorage<8, 24, ::std::vector<float>>  mAccumulatedSegmentLengths;
    ::ll::TypedStorage<1, 1, bool>                   mLooped;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    CatmullRomSpline();
#else // @header-generator platform
#endif // @header-generator platform
};
