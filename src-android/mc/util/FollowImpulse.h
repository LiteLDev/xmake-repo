#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"

namespace CompanionFollowUtility {

struct FollowImpulse {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::Vec3> mPosImpulse;
    ::ll::TypedStorage<4, 4, float>   mYawImpulse;
    // NOLINTEND
};

} // namespace CompanionFollowUtility
