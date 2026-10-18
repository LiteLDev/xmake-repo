#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
// auto generated inclusion list
#include "mc/deps/minecraft_camera/camera_spline_utils/SplineType.h"

#endif // @header-generator platform
namespace CameraSplineUtils {

#if defined(LL_PLAT_A) // @header-generator platform
struct Spline3d {};
#else // @header-generator platform
struct Spline3d {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Spline3d() = default;

    virtual ::glm::vec3 eval(float t) const = 0;

    virtual ::CameraSplineUtils::SplineType getType() const = 0;
    // NOLINTEND
};
#endif // @header-generator platform

} // namespace CameraSplineUtils
