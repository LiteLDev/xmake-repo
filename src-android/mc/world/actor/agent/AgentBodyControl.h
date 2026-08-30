#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/control/BodyControl.h"

// auto generated forward declare list
// clang-format off
class Mob;
// clang-format on

class AgentBodyControl : public ::BodyControl {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AgentBodyControl();

    virtual void clientTick(::Mob&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $clientTick(::Mob&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
