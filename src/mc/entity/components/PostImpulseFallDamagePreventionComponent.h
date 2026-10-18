#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/entity/components/ImpulseOrigin.h"

struct PostImpulseFallDamagePreventionComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 8, ::ImpulseOrigin> mImpulseOrigin;
#else // @header-generator platform
    ::ll::TypedStorage<1, 2, ::ImpulseOrigin> mImpulseOrigin;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 4, float>           mKnockbackStartYCoordinate;
    ::ll::TypedStorage<4, 4, uint>            mTicksAfterAddition;
    ::ll::TypedStorage<4, 12, ::Vec3>         mImpulseDirection;
    ::ll::TypedStorage<4, 4, float>           mImpulseMagnitude;
    // NOLINTEND
};
