#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
class Matrix;
class Vec3;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

class Quaternion {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 16, ::glm::qua<float, (glm::qualifier)0>> mQuat;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 16> mUnkc27771;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    Quaternion& operator=(Quaternion const&);
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit Quaternion(::Matrix const&);
    // NOLINTEND
#else // @header-generator platform
    Quaternion(Quaternion const&);
    Quaternion();
#endif // @header-generator platform

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::glm::qua<float, (glm::qualifier)0> eulerAnglesToQuaternion(float, float, float);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Matrix const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI static ::glm::qua<float> eulerAnglesToQuaternion(float pitch, float yaw, float roll);
#endif
#endif // @header-generator platform
    // NOLINTEND
};
