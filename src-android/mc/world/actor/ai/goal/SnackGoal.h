#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/TempEPtr.h"
#include "mc/world/actor/ai/goal/BaseGoal.h"
#include "mc/world/item/ItemDescriptor.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ItemStack;
class Mob;
class Path;
// clang-format on

class SnackGoal : public ::BaseGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Mob&>                       mMob;
    ::ll::TypedStorage<8, 24, std::vector<ItemDescriptor>> mItems;
    ::ll::TypedStorage<8, 8, ulong>                        mCooldown;
    ::ll::TypedStorage<4, 4, int>                          mSnackCooldownTotal;
    ::ll::TypedStorage<4, 4, int>                          mCooldownMin;
    ::ll::TypedStorage<4, 4, int>                          mStopChance;
    ::ll::UntypedStorage<8, 40>                            mTarget;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Path>>        mPath;
    // NOLINTEND

public:
    // prevent constructor by default
    SnackGoal& operator=(SnackGoal const&);
    SnackGoal(SnackGoal const&);
    SnackGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SnackGoal();

    virtual bool canUse();

    virtual bool canContinueToUse();

    virtual void start();

    virtual void stop();

    virtual void tick();

    virtual void appendDebugInfo(std::string&) const;

    virtual int getRandomEatingEnd() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit SnackGoal(::Mob&);

    MCNAPI bool _hasSnackableItems();

    MCNAPI void _updateHand(::ItemStack const&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static int const& CHEW_CHANCE();

    MCNAPI static int const& EATING_TIME();

    MCNAPI static float const& PATH_RANGE();

    MCNAPI static int const& RANDOM_EATING_END();

    MCNAPI static int const& RANDOM_EATING_START();

    MCNAPI static float const& SEARCH_SIZE();

    MCNAPI static float const& STOP_DIST_SQRD();
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

    MCNAPI int $getRandomEatingEnd() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
