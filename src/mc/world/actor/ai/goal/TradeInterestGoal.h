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
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Mob&>                mMob;
    ::ll::TypedStorage<8, 40, ::TempEPtr<::Player>> mPlayer;
    ::ll::TypedStorage<1, 1, bool>                  mIsRunning;
    ::ll::TypedStorage<1, 1, bool>                  mIsOnlyTargetItemFound;
    ::ll::TypedStorage<4, 4, float>                 mInterestDistance;
    ::ll::TypedStorage<8, 8, uint64>                mCurrentIndex;
    ::ll::TypedStorage<8, 152, ::ItemStack>         mCarriedItem;
    ::ll::TypedStorage<8, 152, ::ItemStack>         mPlayerItem;
    ::ll::TypedStorage<8, 8, ::Tick>                mCarriedItemSwitchTimer;
    ::ll::TypedStorage<8, 8, ::Tick>                mRemoveItemTimer;
    ::ll::TypedStorage<8, 8, ::Tick>                mInterestTimer;
    ::ll::TypedStorage<8, 8, ::Tick>                mInterestCooldown;
    ::ll::TypedStorage<8, 8, ::Tick>                mInterestTimeMax;
    ::ll::TypedStorage<8, 8, ::Tick>                mInterestTimeMaxHalf;
    ::ll::TypedStorage<8, 8, ::Tick>                mRemoveTimeMax;
    ::ll::TypedStorage<8, 8, ::Tick>                mCarriedSwitchMax;
    ::ll::TypedStorage<8, 8, ::Tick>                mInterestCooldownMax;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    TradeInterestGoal& operator=(TradeInterestGoal const&);
    TradeInterestGoal(TradeInterestGoal const&);
    TradeInterestGoal();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~TradeInterestGoal();
#else // @header-generator platform
    virtual bool canUse() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canUse();
#else // @header-generator platform
    virtual bool canContinueToUse() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canContinueToUse();
#else // @header-generator platform
    virtual void start() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void start();
#else // @header-generator platform
    virtual void stop() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void stop();
#else // @header-generator platform
    virtual void tick() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void tick();

    virtual void appendDebugInfo(std::string&) const;
#else // @header-generator platform
    virtual void appendDebugInfo(::std::string& str) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit TradeInterestGoal(::Mob&);
#else // @header-generator platform
    MCAPI explicit TradeInterestGoal(::Mob& mob);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::Mob&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(::Mob& mob);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canUse();
#else // @header-generator platform
    MCAPI bool $canUse();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canContinueToUse();
#else // @header-generator platform
    MCAPI bool $canContinueToUse();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $start();
#else // @header-generator platform
    MCAPI void $start();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $stop();
#else // @header-generator platform
    MCAPI void $stop();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $tick();
#else // @header-generator platform
    MCAPI void $tick();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $appendDebugInfo(std::string&) const;
#else // @header-generator platform
    MCAPI void $appendDebugInfo(::std::string& str) const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
