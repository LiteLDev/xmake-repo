#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Vec3;
// clang-format on

class Spherical {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mRadius;
    ::ll::TypedStorage<4, 4, float> mAzimuth;
    ::ll::TypedStorage<4, 4, float> mPolarAngle;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Spherical();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Spherical cartesianToSpherical(::Vec3 const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};
