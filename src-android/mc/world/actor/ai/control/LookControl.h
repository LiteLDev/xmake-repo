#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/control/Control.h"

// auto generated forward declare list
// clang-format off
class Mob;
// clang-format on

class LookControl : public ::Control {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LookControl();

    virtual void initializeInternal(::Mob&);

    virtual void tick(::Mob&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI LookControl();
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
    MCNAPI void $initializeInternal(::Mob&);

    MCNAPI void $tick(::Mob&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
