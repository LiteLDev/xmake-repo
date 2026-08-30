#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/TempEPtr.h"
#include "mc/world/actor/ai/goal/BaseGoal.h"
#include "mc/world/item/ItemDescriptor.h"

// auto generated forward declare list
// clang-format off
class Mob;
class Player;
struct GoalId;
// clang-format on

class BegGoal : public ::BaseGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Mob&>                       mMob;
    ::ll::TypedStorage<4, 4, float>                        mLookDistance;
    ::ll::TypedStorage<4, 4, int>                          mLookTime;
    ::ll::TypedStorage<4, 4, int>                          mMinLookTime;
    ::ll::TypedStorage<4, 4, int>                          mMaxLookTime;
    ::ll::UntypedStorage<8, 40>                            mPlayer;
    ::ll::TypedStorage<8, 24, std::vector<ItemDescriptor>> mItems;
    // NOLINTEND

public:
    // prevent constructor by default
    BegGoal& operator=(BegGoal const&);
    BegGoal(BegGoal const&);
    BegGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BegGoal();

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
    MCNAPI explicit BegGoal(::Mob&);
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
