#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/BaseGoal.h"

// auto generated forward declare list
// clang-format off
class EnderDragon;
class Mob;
class Path;
struct GoalId;
// clang-format on

class DragonTakeoffGoal : public ::BaseGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                  mFirstTick;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Path>> mCurrentPath;
    ::ll::TypedStorage<8, 8, ::EnderDragon&>        mDragon;
    // NOLINTEND

public:
    // prevent constructor by default
    DragonTakeoffGoal& operator=(DragonTakeoffGoal const&);
    DragonTakeoffGoal(DragonTakeoffGoal const&);
    DragonTakeoffGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DragonTakeoffGoal();

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
    MCNAPI explicit DragonTakeoffGoal(::Mob&);
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
