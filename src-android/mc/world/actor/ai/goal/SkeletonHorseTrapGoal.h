#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/Difficulty.h"
#include "mc/world/actor/ai/goal/BaseGoal.h"

// auto generated forward declare list
// clang-format off
class Horse;
class Mob;
class Player;
class Skeleton;
// clang-format on

class SkeletonHorseTrapGoal : public ::BaseGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Horse&> mHorse;
    ::ll::TypedStorage<4, 4, int>      mTrapLifeTicks;
    ::ll::TypedStorage<4, 4, float>    mTriggerDistance;
    // NOLINTEND

public:
    // prevent constructor by default
    SkeletonHorseTrapGoal& operator=(SkeletonHorseTrapGoal const&);
    SkeletonHorseTrapGoal(SkeletonHorseTrapGoal const&);
    SkeletonHorseTrapGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SkeletonHorseTrapGoal();

    virtual bool canUse();

    virtual void start();

    virtual void tick();

    virtual void appendDebugInfo(std::string&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit SkeletonHorseTrapGoal(::Mob&);
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

    MCNAPI void $tick();

    MCNAPI void $appendDebugInfo(std::string&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
