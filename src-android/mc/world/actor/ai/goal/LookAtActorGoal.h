#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorFilterGroup.h"
#include "mc/world/actor/TempEPtr.h"
#include "mc/world/actor/ai/goal/BaseGoal.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Mob;
// clang-format on

class LookAtActorGoal : public ::BaseGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40>                   mLookAt;
    ::ll::TypedStorage<4, 4, float>               mLookDistance;
    ::ll::TypedStorage<4, 4, int>                 mAngleOfViewX;
    ::ll::TypedStorage<4, 4, int>                 mAngleOfViewY;
    ::ll::TypedStorage<4, 4, int>                 mLookTime;
    ::ll::TypedStorage<4, 4, int>                 mMinLookTime;
    ::ll::TypedStorage<4, 4, int>                 mMaxLookTime;
    ::ll::TypedStorage<4, 4, float>               mProbability;
    ::ll::TypedStorage<8, 64, ::ActorFilterGroup> mTargetFilter;
    ::ll::TypedStorage<8, 8, ::Mob&>              mMob;
    // NOLINTEND

public:
    // prevent constructor by default
    LookAtActorGoal& operator=(LookAtActorGoal const&);
    LookAtActorGoal(LookAtActorGoal const&);
    LookAtActorGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LookAtActorGoal();

    virtual bool canUse();

    virtual bool canContinueToUse();

    virtual void start();

    virtual void stop();

    virtual void tick();

    virtual void appendDebugInfo(std::string&) const;
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

    MCNAPI bool $canContinueToUse();

    MCNAPI void $start();

    MCNAPI void $stop();

    MCNAPI void $tick();

    MCNAPI void $appendDebugInfo(std::string&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
