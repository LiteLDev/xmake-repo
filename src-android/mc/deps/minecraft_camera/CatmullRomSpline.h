#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"

class CatmullRomSpline {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<Vec3>>  mControlPoints;
    ::ll::TypedStorage<8, 24, std::vector<float>> mAccumulatedSegmentLengths;
    ::ll::TypedStorage<1, 1, bool>                mLooped;
    // NOLINTEND

public:
    // prevent constructor by default
    CatmullRomSpline();
};
