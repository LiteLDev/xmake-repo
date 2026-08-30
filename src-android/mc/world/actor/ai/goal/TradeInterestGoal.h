#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/TempEPtr.h"
#include "mc/world/actor/ai/goal/BaseGoal.h"
#include "mc/world/item/ItemStack.h"
#include "mc/world/level/Tick.h"

// auto generated forward declare list
// clang-format off
class Mob;
class Player;
// clang-format on

class TradeInterestGoal : public ::BaseGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Mob&>        mMob;
    ::ll::UntypedStorage<8, 40>             mPlayer;
    ::ll::TypedStorage<1, 1, bool>          mIsRunning;
    ::ll::TypedStorage<1, 1, bool>          mIsOnlyTargetItemFound;
    ::ll::TypedStorage<4, 4, float>         mInterestDistance;
    ::ll::TypedStorage<8, 8, ulong>         mCurrentIndex;
    ::ll::TypedStorage<8, 152, ::ItemStack> mCarriedItem;
    ::ll::TypedStorage<8, 152, ::ItemStack> mPlayerItem;
    ::ll::TypedStorage<8, 8, ::Tick>        mCarriedItemSwitchTimer;
    ::ll::TypedStorage<8, 8, ::Tick>        mRemoveItemTimer;
    ::ll::TypedStorage<8, 8, ::Tick>        mInterestTimer;
    ::ll::TypedStorage<8, 8, ::Tick>        mInterestCooldown;
    ::ll::TypedStorage<8, 8, ::Tick>        mInterestTimeMax;
    ::ll::TypedStorage<8, 8, ::Tick>        mInterestTimeMaxHalf;
    ::ll::TypedStorage<8, 8, ::Tick>        mRemoveTimeMax;
    ::ll::TypedStorage<8, 8, ::Tick>        mCarriedSwitchMax;
    ::ll::TypedStorage<8, 8, ::Tick>        mInterestCooldownMax;
    // NOLINTEND

public:
    // prevent constructor by default
    TradeInterestGoal& operator=(TradeInterestGoal const&);
    TradeInterestGoal(TradeInterestGoal const&);
    TradeInterestGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TradeInterestGoal();

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
    MCNAPI explicit TradeInterestGoal(::Mob&);
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
