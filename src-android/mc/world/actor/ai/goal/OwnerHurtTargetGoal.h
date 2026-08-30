#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/TempEPtr.h"
#include "mc/world/actor/ai/goal/target/TargetGoal.h"

// auto generated forward declare list
// clang-format off
class Mob;
// clang-format on

class OwnerHurtTargetGoal : public ::TargetGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40>      mLastOwnerHurt;
    ::ll::TypedStorage<8, 8, ::Mob&> mMob;
    ::ll::TypedStorage<4, 4, int>    mTimestamp;
    // NOLINTEND

public:
    // prevent constructor by default
    OwnerHurtTargetGoal& operator=(OwnerHurtTargetGoal const&);
    OwnerHurtTargetGoal(OwnerHurtTargetGoal const&);
    OwnerHurtTargetGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~OwnerHurtTargetGoal();

    virtual bool canUse();

    virtual void start();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit OwnerHurtTargetGoal(::Mob&);
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
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
