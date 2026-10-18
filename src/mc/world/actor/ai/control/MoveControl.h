#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/control/Control.h"

// auto generated forward declare list
// clang-format off
class Mob;
class MoveControlComponent;
class Vec3;
struct MoveControlDescription;
// clang-format on

class MoveControl : public ::Control {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~MoveControl();
#else // @header-generator platform
    virtual ~MoveControl() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void initializeInternal(::Mob&, ::MoveControlDescription const*);
#else // @header-generator platform
    virtual void initializeInternal(::Mob& mob, ::MoveControlDescription const* description);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void tick(::MoveControlComponent&, ::Mob&);
#else // @header-generator platform
    virtual void tick(::MoveControlComponent& parent, ::Mob& mob);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setWantedPosition(::MoveControlComponent&, ::Mob&, ::Vec3 const&, float);
#else // @header-generator platform
    virtual void setWantedPosition(::MoveControlComponent& parent, ::Mob& mob, ::Vec3 const& pos, float speed);
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // member functions
#else // @header-generator platform
    // static functions
#endif // @header-generator platform
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI MoveControl();
#else // @header-generator platform
    MCAPI static float calculateMoveSpeed(
        ::MoveControlComponent const& parent,
        ::Mob&                        mob,
        ::Vec3 const&                 endPosition,
        float const                   maxMoveSpeed
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float calculateMoveSpeed(::MoveControlComponent const&, ::Mob&, ::Vec3 const&, float const);
#else // @header-generator platform
    MCAPI static float calculateYRotation(
        ::MoveControlComponent const& parent,
        ::Mob const&                  mob,
        ::Vec3 const&                 positionDifference,
        float const                   maxMoveSpeed
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float calculateYRotation(::MoveControlComponent const&, ::Mob const&, ::Vec3 const&, float const);

    MCNAPI bool shouldSlowSpeed(::MoveControlComponent const&, ::Mob const&, float const);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static float const& MIN_DELTA_TO_JUMP();

    MCNAPI static float const& MIN_DELTA_TO_JUMP_UNDERWATER();

    MCNAPI static float const& MIN_DELTA_TO_MOVE();

    MCNAPI static float const& MIN_SPEED();

    MCNAPI static float const& MIN_SPEED_SQR();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI static bool
    shouldSlowSpeed(::MoveControlComponent const& parent, ::Mob const& mob, float const endDistanceSqr);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $initializeInternal(::Mob&, ::MoveControlDescription const*);
#else // @header-generator platform
    MCFOLD void $initializeInternal(::Mob& mob, ::MoveControlDescription const* description);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $tick(::MoveControlComponent&, ::Mob&);
#else // @header-generator platform
    MCAPI void $tick(::MoveControlComponent& parent, ::Mob& mob);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setWantedPosition(::MoveControlComponent&, ::Mob&, ::Vec3 const&, float);
#else // @header-generator platform
    MCAPI void $setWantedPosition(::MoveControlComponent& parent, ::Mob& mob, ::Vec3 const& pos, float speed);


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void** $vftable();
#else // @header-generator platform
    MCAPI static void** $vftable();
#endif // @header-generator platform
    // NOLINTEND
};
