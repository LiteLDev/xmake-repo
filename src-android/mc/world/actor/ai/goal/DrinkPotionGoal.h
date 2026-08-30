#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/BaseGoal.h"
#include "mc/world/actor/ai/goal/DrinkPotionData.h"
#include "mc/world/attribute/AttributeModifier.h"
#include "mc/world/level/Tick.h"

// auto generated forward declare list
// clang-format off
class Mob;
struct GoalId;
namespace mce { class UUID; }
// clang-format on

class DrinkPotionGoal : public ::BaseGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Mob&>                        mMob;
    ::ll::TypedStorage<4, 4, float>                         mWalkSpeedModifier;
    ::ll::TypedStorage<8, 24, std::vector<DrinkPotionData>> mDrinkPotionData;
    ::ll::TypedStorage<4, 4, int>                           mThrottleCooldown;
    ::ll::TypedStorage<8, 8, ::Tick>                        mFinishUsingItemTick;
    ::ll::TypedStorage<8, 72, ::AttributeModifier>          mSpeedAttributeModifier;
    // NOLINTEND

public:
    // prevent constructor by default
    DrinkPotionGoal& operator=(DrinkPotionGoal const&);
    DrinkPotionGoal(DrinkPotionGoal const&);
    DrinkPotionGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DrinkPotionGoal();

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
    MCNAPI explicit DrinkPotionGoal(::Mob&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::mce::UUID const& SPEED_MODIFIER_DRINKING_UUID();

    MCNAPI static int const& THROTTLE_COOLDOWN();
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
