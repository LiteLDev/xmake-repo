#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/ecs/strict/StrictEntityContext.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/phys/AABB.h"
#else // @header-generator platform

// auto generated forward declare list
// clang-format off
class AABB;
// clang-format on
#endif // @header-generator platform

struct IsSolidMobNearbyComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::Vec3> mMaxDepenetrationMagnitude;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 40>       mNearbyColliders;
#else // @header-generator platform
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<
            ::StrictEntityContext,
            ::AABB,
            ::StrictEntityContext::Hash,
            ::std::equal_to<::StrictEntityContext>>>
        mNearbyColliders;
#endif // @header-generator platform
    // NOLINTEND
};
