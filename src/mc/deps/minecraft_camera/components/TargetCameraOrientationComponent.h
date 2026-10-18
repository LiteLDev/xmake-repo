#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace MinecraftCamera {

struct TargetCameraOrientationComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 16, ::glm::qua<float, (glm::qualifier)0>> mTargetCameraOrientation;
#else // @header-generator platform
    ::ll::TypedStorage<4, 16, ::glm::qua<float>> mTargetCameraOrientation;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    TargetCameraOrientationComponent& operator=(TargetCameraOrientationComponent const&);
#else // @header-generator platform
#endif // @header-generator platform
};

} // namespace MinecraftCamera
