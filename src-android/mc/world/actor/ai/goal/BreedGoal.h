#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/world/actor/ai/goal/BaseGoal.h"

// auto generated forward declare list
// clang-format off
class Mob;
class Vec2;
class Vec3;
struct GoalId;
// clang-format on

class BreedGoal : public ::BaseGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Mob&>           mOwner;
    ::ll::TypedStorage<1, 24, ::WeakEntityRef> mPartner;
    ::ll::TypedStorage<4, 4, int>              mLoveTime;
    ::ll::TypedStorage<4, 4, float>            mSpeed;
    ::ll::TypedStorage<1, 1, bool const>       mStopNavigationOnStop;
    // NOLINTEND

public:
    // prevent constructor by default
    BreedGoal& operator=(BreedGoal const&);
    BreedGoal(BreedGoal const&);
    BreedGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BreedGoal();

    virtual bool canUse();

    virtual bool canContinueToUse();

    virtual void stop();

    virtual void tick();

    virtual void appendDebugInfo(std::string&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit BreedGoal(::Mob&);

    MCNAPI bool _isCloseEnoughToBreed(::Vec3, ::Vec2, ::Vec3, ::Vec2) const;

    MCNAPI ::Mob* _moveToFreePartner() const;
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

    MCNAPI bool $canContinueToUse();

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
