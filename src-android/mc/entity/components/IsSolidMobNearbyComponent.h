#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/ecs/strict/StrictEntityContext.h"
#include "mc/world/phys/AABB.h"

struct IsSolidMobNearbyComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::Vec3> mMaxDepenetrationMagnitude;
    ::ll::UntypedStorage<8, 40>       mNearbyColliders;
    // NOLINTEND
};
