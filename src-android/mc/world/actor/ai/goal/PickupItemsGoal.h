#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/world/actor/ActorDefinitionTrigger.h"
#include "mc/world/actor/TempEPtr.h"
#include "mc/world/actor/ai/goal/BaseGoal.h"
#include "mc/world/item/ItemDescriptor.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ItemActor;
class ItemStack;
class Mob;
class Path;
struct DistanceSortedActor;
struct Shareable;
// clang-format on

class PickupItemsGoal : public ::BaseGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 96, ::ActorDefinitionTrigger>    mOnStartEvent;
    ::ll::TypedStorage<8, 96, ::ActorDefinitionTrigger>    mOnEndEvent;
    ::ll::UntypedStorage<8, 40>                            mTarget;
    ::ll::TypedStorage<8, 24, std::vector<ItemDescriptor>> mExcludedItemsList;
    ::ll::TypedStorage<8, 24, std::vector<WeakEntityRef>>  mFilteredPickupTargets;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Path>>        mPath;
    ::ll::TypedStorage<8, 8, ::Mob&>                       mMob;
    ::ll::TypedStorage<4, 12, ::Vec3>                      mTargetPos;
    ::ll::TypedStorage<4, 4, int>                          mSearchRange;
    ::ll::TypedStorage<4, 4, int>                          mSearchHeight;
    ::ll::TypedStorage<4, 4, int>                          mRandomStopInterval;
    ::ll::TypedStorage<4, 4, int>                          mTimeToRecalcPath;
    ::ll::TypedStorage<4, 4, int>                          mTimeoutAfterBeingAttacked;
    ::ll::TypedStorage<4, 4, float>                        mSpeedModifier;
    ::ll::TypedStorage<4, 4, float>                        mGoalRadiusSq;
    ::ll::TypedStorage<1, 1, bool>                         mPickupBasedOnChance;
    ::ll::TypedStorage<1, 1, bool>                         mTrackTarget;
    ::ll::TypedStorage<1, 1, bool>                         mCanPickupAnyItem;
    ::ll::TypedStorage<1, 1, bool>                         mCanPickupToHandOrEquipment;
    ::ll::TypedStorage<1, 1, bool>                         mPickupSameItemsAsInHand;
    ::ll::TypedStorage<1, 1, bool>                         mStopIfHoldingItem;
    // NOLINTEND

public:
    // prevent constructor by default
    PickupItemsGoal& operator=(PickupItemsGoal const&);
    PickupItemsGoal(PickupItemsGoal const&);
    PickupItemsGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PickupItemsGoal();

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
    MCNAPI explicit PickupItemsGoal(::Mob&);

    MCNAPI void _dropItem(::ItemStack const&) const;

    MCNAPI std::vector<WeakEntityRef> _filterValidTargets(std::vector<DistanceSortedActor> const&) const;

    MCNAPI ::Shareable const* _getShareableItem(::ItemStack const&) const;

    MCNAPI bool _hasRoomForCarriedItem() const;
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
