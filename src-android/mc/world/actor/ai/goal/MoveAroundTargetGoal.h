#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/shared_types/FloatRange.h"
#include "mc/world/actor/ActorFilterGroup.h"
#include "mc/world/actor/ai/goal/BaseGoal.h"

// auto generated forward declare list
// clang-format off
class Mob;
class Random;
class Vec3;
// clang-format on

class MoveAroundTargetGoal : public ::BaseGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Mob&>                    mMob;
    ::ll::TypedStorage<1, 1, bool>                      mReachedTarget;
    ::ll::TypedStorage<8, 64, ::ActorFilterGroup>       mFilters;
    ::ll::TypedStorage<4, 4, float>                     mSpeed;
    ::ll::TypedStorage<4, 4, float>                     mSpreadDegrees;
    ::ll::TypedStorage<4, 8, ::SharedTypes::FloatRange> mDestinationRange;
    ::ll::TypedStorage<4, 4, float>                     mHeightDifferenceLimit;
    ::ll::TypedStorage<4, 4, int>                       mHorizontalSearchDistance;
    ::ll::TypedStorage<4, 4, int>                       mVerticalSearchDistance;
    // NOLINTEND

public:
    // prevent constructor by default
    MoveAroundTargetGoal& operator=(MoveAroundTargetGoal const&);
    MoveAroundTargetGoal(MoveAroundTargetGoal const&);
    MoveAroundTargetGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MoveAroundTargetGoal();

    virtual bool canUse();

    virtual bool canContinueToUse();

    virtual void start();

    virtual void stop();

    virtual void tick();

    virtual void appendDebugInfo(std::string&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit MoveAroundTargetGoal(::Mob&);
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
