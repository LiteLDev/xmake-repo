#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace MinecraftCamera {

struct FixedBoomOrientationComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::glm::vec<2, float, (glm::qualifier)0>> mTargetRotation;
    // NOLINTEND

public:
    // prevent constructor by default
    FixedBoomOrientationComponent& operator=(FixedBoomOrientationComponent const&);
};

} // namespace MinecraftCamera
