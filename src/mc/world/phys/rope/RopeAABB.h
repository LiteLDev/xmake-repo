#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/phys/AABB.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
class Vec3;
struct AABBContactPoint;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

struct RopeAABB {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 24, ::AABB> mBB;
    ::ll::TypedStorage<1, 1, bool>    mDenyListed;
    // NOLINTEND
};
