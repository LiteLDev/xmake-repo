#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace MinecraftCamera {

struct TargetCameraOrientationComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 16, ::glm::qua<float, (glm::qualifier)0>> mTargetCameraOrientation;
    // NOLINTEND

public:
    // prevent constructor by default
    TargetCameraOrientationComponent& operator=(TargetCameraOrientationComponent const&);
};

} // namespace MinecraftCamera
