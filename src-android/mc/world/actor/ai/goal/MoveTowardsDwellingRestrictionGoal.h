#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/MoveTowardsRestrictionGoal.h"

// auto generated forward declare list
// clang-format off
class Mob;
// clang-format on

class MoveTowardsDwellingRestrictionGoal : public ::MoveTowardsRestrictionGoal {
public:
    // prevent constructor by default
    MoveTowardsDwellingRestrictionGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MoveTowardsDwellingRestrictionGoal();

    virtual bool canUse();

    virtual void appendDebugInfo(std::string&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit MoveTowardsDwellingRestrictionGoal(::Mob&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Mob&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $canUse();

    MCNAPI void $appendDebugInfo(std::string&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
