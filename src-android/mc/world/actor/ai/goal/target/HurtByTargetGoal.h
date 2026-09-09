#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/target/TargetGoal.h"

// auto generated forward declare list
// clang-format off
class Mob;
struct GoalId;
// clang-format on

class HurtByTargetGoal : public ::TargetGoal {
public:
    // prevent constructor by default
    HurtByTargetGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~HurtByTargetGoal();

    virtual bool canUse();

    virtual void start();

    virtual void appendDebugInfo(std::string&) const;

    virtual void alertOther(::Mob*, ::Mob*);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit HurtByTargetGoal(::Mob&);
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

    MCNAPI void $start();

    MCNAPI void $appendDebugInfo(std::string&) const;

    MCNAPI void $alertOther(::Mob*, ::Mob*);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
