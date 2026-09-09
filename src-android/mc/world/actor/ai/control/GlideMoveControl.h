#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/world/actor/ai/control/MoveControl.h"

// auto generated forward declare list
// clang-format off
class Mob;
class MoveControlComponent;
struct MoveControlDescription;
// clang-format on

class GlideMoveControl : public ::MoveControl {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>   mSpeed;
    ::ll::TypedStorage<4, 4, float>   mStartSpeed;
    ::ll::TypedStorage<4, 4, float>   mSpeedWhenTurning;
    ::ll::TypedStorage<4, 12, ::Vec3> mCurrentWantedPos;
    ::ll::TypedStorage<4, 4, int>     mNumberOfFrontalCollisions;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~GlideMoveControl();

    virtual void initializeInternal(::Mob&, ::MoveControlDescription const*);

    virtual void tick(::MoveControlComponent&, ::Mob&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI GlideMoveControl();
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
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
