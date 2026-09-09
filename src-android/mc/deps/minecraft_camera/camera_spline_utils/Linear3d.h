#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/minecraft_camera/camera_spline_utils/Spline3d.h"
#include "mc/deps/minecraft_camera/camera_spline_utils/SplineType.h"

namespace CameraSplineUtils {

struct Linear3d : public ::CameraSplineUtils::Spline3d {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<glm::vec<3, float, (glm::qualifier)0>>> mControlPoints;
    ::ll::TypedStorage<8, 24, std::vector<float>>                                 mSegStart;
    ::ll::TypedStorage<1, 1, ::CameraSplineUtils::SplineType const>               type;
    // NOLINTEND
};

} // namespace CameraSplineUtils
