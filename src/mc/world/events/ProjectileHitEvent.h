#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/phys/HitResult.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

struct ProjectileHitEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Actor&>            mProjectile;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 136, ::HitResult const> mHitResult;
#else // @header-generator platform
    ::ll::TypedStorage<8, 136, ::HitResult const> mHitResult;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ProjectileHitEvent& operator=(ProjectileHitEvent const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ProjectileHitEvent(ProjectileHitEvent const&);
#endif // @header-generator platform
    ProjectileHitEvent();
};
