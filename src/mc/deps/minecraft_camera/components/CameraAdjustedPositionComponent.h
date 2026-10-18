#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace MinecraftCamera {

struct CameraAdjustedPositionComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>> mAdjustedPosition;
    ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>> mAttachOffset;
    ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>> mLookAtPosition;
#else // @header-generator platform
    ::ll::TypedStorage<4, 12, ::glm::vec3> mAdjustedPosition;
    ::ll::TypedStorage<4, 12, ::glm::vec3> mAttachOffset;
    ::ll::TypedStorage<4, 12, ::glm::vec3> mLookAtPosition;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    CameraAdjustedPositionComponent& operator=(CameraAdjustedPositionComponent const&);
#else // @header-generator platform
#endif // @header-generator platform
};

} // namespace MinecraftCamera
