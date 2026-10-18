#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CameraAvoidanceSystem {

struct AvoidanceCache {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>> mTargetPos;
    ::ll::TypedStorage<4, 4, float>                                    mDistanceConstraint;
    ::ll::TypedStorage<4, 4, float>                                    mDistanceToTarget;
#else // @header-generator platform
    ::ll::TypedStorage<4, 12, ::glm::vec3> mTargetPos;
    ::ll::TypedStorage<4, 4, float>        mDistanceConstraint;
    ::ll::TypedStorage<4, 4, float>        mDistanceToTarget;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace CameraAvoidanceSystem
