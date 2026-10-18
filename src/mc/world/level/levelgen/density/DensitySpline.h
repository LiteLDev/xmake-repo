#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/density/DensityFunctionPtr.h"

class DensitySpline {
public:
    // DensitySpline inner types declare
    // clang-format off
    struct SplineControlPoint;
    // clang-format on

    // DensitySpline inner types define
    struct SplineControlPoint {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 24, std::variant<float, DensityFunctionPtr>> mValue;
        ::ll::TypedStorage<4, 4, float>                                    mDerivative;
#else // @header-generator platform
        ::ll::TypedStorage<8, 24, ::std::variant<float, ::DensityFunctionPtr>> mValue;
        ::ll::TypedStorage<4, 4, float>                                        mDerivative;
#endif // @header-generator platform
        // NOLINTEND
    };
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    using ControlPointPair = ::std::pair<float, ::DensitySpline::SplineControlPoint>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<std::pair<float, DensitySpline::SplineControlPoint>>> mControlPoints;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::std::pair<float, ::DensitySpline::SplineControlPoint>>> mControlPoints;
#endif // @header-generator platform
    // NOLINTEND
};
