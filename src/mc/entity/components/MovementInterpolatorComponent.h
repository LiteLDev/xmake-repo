#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec2.h"
#include "mc/deps/core/math/Vec3.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
// clang-format on

struct MovementInterpolatorComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::Vec3> mPos;
    ::ll::TypedStorage<4, 8, ::Vec2>  mRot;
    ::ll::TypedStorage<4, 4, float>   mHeadYaw;
    ::ll::TypedStorage<4, 4, int>     mPositionSteps;
    ::ll::TypedStorage<4, 4, int>     mRotationSteps;
    ::ll::TypedStorage<4, 4, int>     mHeadYawSteps;
    ::ll::TypedStorage<1, 1, bool>    mMustBeCompleted;
    ::ll::TypedStorage<1, 1, bool>    mPlayerControlServerVehicle;
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    MovementInterpolatorComponent(MovementInterpolatorComponent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool canStartLerpTo(bool) const;

    MCNAPI bool isActive() const;

    MCNAPI void lerpTo(::Vec3 const&, ::Vec2 const&, int);

    MCNAPI void lerpToRotation(::Vec2 const&, int);

    MCNAPI void reset();

    MCNAPI void setHeadYawLerpTarget(float, int);
    // NOLINTEND

public:
#else // @header-generator platform
#endif // @header-generator platform
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void startLerpTo(::EntityContext&, ::Vec3 const&, ::Vec2 const&, int, bool);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI static void
    startLerpTo(::EntityContext& entity, ::Vec3 const& pos, ::Vec2 const& rot, int steps, bool mustBeCompleted);
#endif
#endif // @header-generator platform
    // NOLINTEND
};
