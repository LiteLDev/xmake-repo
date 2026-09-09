#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace MinecraftCamera {

struct CameraLookAtPositionComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>> mTargetPosition;
    ::ll::TypedStorage<4, 8, ::glm::vec<2, float, (glm::qualifier)0>>  mTargetRotation;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraLookAtPositionComponent& operator=(CameraLookAtPositionComponent const&);
};

} // namespace MinecraftCamera
