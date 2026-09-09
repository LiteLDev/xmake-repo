#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/BaseGoal.h"
#include "mc/world/actor/ai/goal/MobDescriptor.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Mob;
struct GoalId;
// clang-format on

class TargetGoal : public ::BaseGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Mob&>                      mMob;
    ::ll::TypedStorage<1, 1, bool>                        mAttackOwner;
    ::ll::TypedStorage<1, 1, bool>                        mMustReach;
    ::ll::TypedStorage<1, 1, bool>                        mGlobalMustSee;
    ::ll::TypedStorage<1, 1, bool>                        mTargetMustSee;
    ::ll::TypedStorage<4, 4, int>                         mTargetMustSeeForgetTicks;
    ::ll::TypedStorage<1, 1, bool>                        mFilterFailure;
    ::ll::TypedStorage<4, 4, int>                         mFilterFailureTicks;
    ::ll::TypedStorage<4, 4, int>                         mGlobalMustSeeForgetTicks;
    ::ll::TypedStorage<4, 4, int>                         mPersistTargetTicks;
    ::ll::TypedStorage<4, 4, int>                         mReachCache;
    ::ll::TypedStorage<4, 4, int>                         mReachCacheTime;
    ::ll::TypedStorage<4, 4, int>                         mUnseenTicks;
    ::ll::TypedStorage<4, 4, float>                       mWithinDefault;
    ::ll::TypedStorage<1, 1, bool>                        mReevaluateTarget;
    ::ll::TypedStorage<8, 24, std::vector<MobDescriptor>> mTargetTypes;
    // NOLINTEND

public:
    // prevent constructor by default
    TargetGoal& operator=(TargetGoal const&);
    TargetGoal(TargetGoal const&);
    TargetGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TargetGoal();

    virtual bool canContinueToUse();

    virtual void start();

    virtual void stop();

    virtual void tick();

    virtual void appendDebugInfo(std::string&) const;

    virtual bool isTargetGoal() const;

    virtual bool _canAttack(::Mob*, ::Actor*, bool, bool, ::MobDescriptor const**);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI TargetGoal(::Mob&, bool, int, bool, float, bool, int);

    MCNAPI bool _canAttack(::Actor*, bool, ::MobDescriptor const**);

    MCNAPI bool _canReach(::Actor&);

    MCNAPI bool _canReachAfterDelay(::Actor&);

    MCNAPI bool _matchesTargetTypes(::Mob*, ::Actor*, bool, ::MobDescriptor const**);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Mob&, bool, int, bool, float, bool, int);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $canContinueToUse();

    MCNAPI void $start();

    MCNAPI void $stop();

    MCNAPI void $tick();

    MCNAPI void $appendDebugInfo(std::string&) const;

    MCNAPI bool $isTargetGoal() const;

    MCNAPI bool $_canAttack(::Mob*, ::Actor*, bool, bool, ::MobDescriptor const**);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
