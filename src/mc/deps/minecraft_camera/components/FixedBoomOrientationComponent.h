#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace MinecraftCamera {

struct FixedBoomOrientationComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 8, ::glm::vec<2, float, (glm::qualifier)0>> mTargetRotation;
#else // @header-generator platform
    ::ll::TypedStorage<4, 8, ::glm::vec2> mTargetRotation;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    FixedBoomOrientationComponent& operator=(FixedBoomOrientationComponent const&);
#else // @header-generator platform
#endif // @header-generator platform
};

} // namespace MinecraftCamera
