#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/math/EasingType.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/math/EasingType.h"

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace CameraSplineUtils {

#if defined(LL_PLAT_A) // @header-generator platform
struct Keyframe {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>> mValue;
    ::ll::TypedStorage<4, 4, float>                                    mTime;
    ::ll::TypedStorage<4, 4, ::EasingType>                             mEasingFunc;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct Keyframe {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::glm::vec3> mValue;
    ::ll::TypedStorage<4, 4, float>        mTime;
    ::ll::TypedStorage<4, 4, ::EasingType> mEasingFunc;
    // NOLINTEND
};
#else // @header-generator platform
struct Keyframe {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace CameraSplineUtils
