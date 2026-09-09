#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/BaseGoal.h"
#include "mc/world/actor/ai/goal/MobDescriptor.h"
#include "mc/world/item/ItemStack.h"

// auto generated forward declare list
// clang-format off
class Mob;
class Path;
// clang-format on

class ShareItemsGoal : public ::BaseGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Mob&>                      mMob;
    ::ll::TypedStorage<4, 4, int>                         mThrowCountdown;
    ::ll::TypedStorage<4, 4, int>                         mSearchRange;
    ::ll::TypedStorage<4, 4, float>                       mSpeedModifier;
    ::ll::TypedStorage<4, 4, float>                       mGoalRadiusSq;
    ::ll::TypedStorage<4, 4, int>                         mTimeToRecalcPath;
    ::ll::TypedStorage<8, 24, std::vector<MobDescriptor>> mMobFilters;
    ::ll::TypedStorage<8, 152, ::ItemStack>               mItemToShare;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Path>>       mPath;
    // NOLINTEND

public:
    // prevent constructor by default
    ShareItemsGoal& operator=(ShareItemsGoal const&);
    ShareItemsGoal(ShareItemsGoal const&);
    ShareItemsGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ShareItemsGoal();

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
    MCNAPI explicit ShareItemsGoal(::Mob&);
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
