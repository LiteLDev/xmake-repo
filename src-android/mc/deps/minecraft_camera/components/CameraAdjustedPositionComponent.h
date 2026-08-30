#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace MinecraftCamera {

struct CameraAdjustedPositionComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>> mAdjustedPosition;
    ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>> mAttachOffset;
    ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>> mLookAtPosition;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraAdjustedPositionComponent& operator=(CameraAdjustedPositionComponent const&);
};

} // namespace MinecraftCamera
