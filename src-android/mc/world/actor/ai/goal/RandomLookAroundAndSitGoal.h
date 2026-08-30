#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/RandomLookAroundGoal.h"
#include "mc/world/level/Tick.h"

// auto generated forward declare list
// clang-format off
class Mob;
// clang-format on

class RandomLookAroundAndSitGoal : public ::RandomLookAroundGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>   mContinueSittingOnReload;
    ::ll::TypedStorage<1, 1, bool>   mContinueIfLeashed;
    ::ll::TypedStorage<4, 4, int>    mMinLookCount;
    ::ll::TypedStorage<4, 4, int>    mMaxLookCount;
    ::ll::TypedStorage<4, 4, int>    mRemainingLookCount;
    ::ll::TypedStorage<4, 4, int>    mRandomLookAroundCooldown;
    ::ll::TypedStorage<8, 8, ::Tick> mNextAvailableSitTick;
    // NOLINTEND

public:
    // prevent constructor by default
    RandomLookAroundAndSitGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RandomLookAroundAndSitGoal();

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
    MCNAPI explicit RandomLookAroundAndSitGoal(::Mob&);
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
