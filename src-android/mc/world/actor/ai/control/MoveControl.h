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
    virtual ~MoveControl();

    virtual void initializeInternal(::Mob&, ::MoveControlDescription const*);

    virtual void tick(::MoveControlComponent&, ::Mob&);

    virtual void setWantedPosition(::MoveControlComponent&, ::Mob&, ::Vec3 const&, float);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MoveControl();

    MCNAPI float calculateMoveSpeed(::MoveControlComponent const&, ::Mob&, ::Vec3 const&, float const);

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
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $initializeInternal(::Mob&, ::MoveControlDescription const*);

    MCNAPI void $tick(::MoveControlComponent&, ::Mob&);

    MCNAPI void $setWantedPosition(::MoveControlComponent&, ::Mob&, ::Vec3 const&, float);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
