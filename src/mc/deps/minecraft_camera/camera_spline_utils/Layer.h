#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/minecraft_camera/camera_spline_utils/Keyframe.h"

// auto generated forward declare list
// clang-format off
namespace CameraSplineUtils { struct Spline3d; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace CameraSplineUtils { struct Keyframe; }
namespace CameraSplineUtils { struct Spline3d; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace CameraSplineUtils {

#if defined(LL_PLAT_A) // @header-generator platform
struct Layer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<CameraSplineUtils::Keyframe>>   mFrames;
    ::ll::TypedStorage<8, 16, std::weak_ptr<CameraSplineUtils::Spline3d>> mCurveRef;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct Layer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::CameraSplineUtils::Keyframe>>   mFrames;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::CameraSplineUtils::Spline3d>> mCurveRef;
    // NOLINTEND
};
#else // @header-generator platform
struct Layer {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace CameraSplineUtils
