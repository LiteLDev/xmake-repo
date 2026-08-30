#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/bhave/BehaviorStatus.h"
#include "mc/world/actor/bhave/node/BehaviorNode.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

class ShootBowNode : public ::BehaviorNode {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>  mNumTimesToShoot;
    ::ll::TypedStorage<4, 4, int>  mNumTimesShot;
    ::ll::TypedStorage<4, 4, int>  mTicksLeftToShoot;
    ::ll::TypedStorage<1, 1, bool> mDone;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ShootBowNode();

    virtual ::BehaviorStatus tick(::Actor&);

    virtual void initializeFromDefinition(::Actor&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ShootBowNode();
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
    MCNAPI ::BehaviorStatus $tick(::Actor&);

    MCNAPI void $initializeFromDefinition(::Actor&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
