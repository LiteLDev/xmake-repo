#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/target/NearestAttackableTargetGoal.h"

// auto generated forward declare list
// clang-format off
class Mob;
struct ActorUniqueID;
struct MobDescriptor;
// clang-format on

class NearestPrioritizedAttackableTargetGoal : public ::NearestAttackableTargetGoal {
public:
    // prevent constructor by default
    NearestPrioritizedAttackableTargetGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~NearestPrioritizedAttackableTargetGoal();

    virtual void appendDebugInfo(std::string&) const;

    virtual ::ActorUniqueID _findTarget(::MobDescriptor const**);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit NearestPrioritizedAttackableTargetGoal(::Mob&);
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
    MCNAPI void $appendDebugInfo(std::string&) const;

    MCNAPI ::ActorUniqueID $_findTarget(::MobDescriptor const**);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
