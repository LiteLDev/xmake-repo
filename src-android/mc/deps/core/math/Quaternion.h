#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Matrix;
class Vec3;
// clang-format on

class Quaternion {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 16, ::glm::qua<float, (glm::qualifier)0>> mQuat;
    // NOLINTEND

public:
    // prevent constructor by default
    Quaternion& operator=(Quaternion const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit Quaternion(::Matrix const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::glm::qua<float, (glm::qualifier)0> eulerAnglesToQuaternion(float, float, float);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Matrix const&);
    // NOLINTEND
};
