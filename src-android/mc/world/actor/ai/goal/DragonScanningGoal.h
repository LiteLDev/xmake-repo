#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/BaseGoal.h"

// auto generated forward declare list
// clang-format off
class EnderDragon;
class Mob;
struct GoalId;
// clang-format on

class DragonScanningGoal : public ::BaseGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::EnderDragon&> mDragon;
    ::ll::TypedStorage<4, 4, float>          mScanTime;
    // NOLINTEND

public:
    // prevent constructor by default
    DragonScanningGoal& operator=(DragonScanningGoal const&);
    DragonScanningGoal(DragonScanningGoal const&);
    DragonScanningGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DragonScanningGoal();

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
    MCNAPI explicit DragonScanningGoal(::Mob&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static float& SITTING_ATTACK_VIEW_RANGE();

    MCNAPI static float& SITTING_CHARGE_VIEW_RANGE();

    MCNAPI static int& SITTING_SCANNING_IDLE_TICKS();
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
