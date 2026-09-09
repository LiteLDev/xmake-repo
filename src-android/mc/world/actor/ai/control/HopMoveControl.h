#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/control/MoveControl.h"

// auto generated forward declare list
// clang-format off
class Mob;
class MoveControlComponent;
class Vec3;
// clang-format on

class HopMoveControl : public ::MoveControl {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mJumpDelayTicks;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~HopMoveControl();

    virtual void tick(::MoveControlComponent&, ::Mob&);

    virtual void setWantedPosition(::MoveControlComponent&, ::Mob&, ::Vec3 const&, float);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI HopMoveControl();
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
    MCNAPI void $tick(::MoveControlComponent&, ::Mob&);

    MCNAPI void $setWantedPosition(::MoveControlComponent&, ::Mob&, ::Vec3 const&, float);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
