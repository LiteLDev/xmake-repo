#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/ecs/WeakEntityRef.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/actor/ActorDefinitionTrigger.h"
#include "mc/world/actor/TempEPtr.h"
#include "mc/world/actor/ai/goal/BaseGoal.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/item/ItemDescriptor.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class Actor;
#if defined(LL_PLAT_A) // @header-generator platform
class ItemActor;
#else // @header-generator platform
class ItemDescriptor;
#endif // @header-generator platform
class ItemStack;
class Mob;
class Path;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class WeakEntityRef;
#endif // @header-generator platform
struct DistanceSortedActor;
struct Shareable;
// clang-format on

class PickupItemsGoal : public ::BaseGoal {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger>       mOnStartEvent;
    ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger>       mOnEndEvent;
    ::ll::TypedStorage<8, 40, ::TempEPtr<::Actor>>             mTarget;
    ::ll::TypedStorage<8, 24, ::std::vector<::ItemDescriptor>> mExcludedItemsList;
    ::ll::TypedStorage<8, 24, ::std::vector<::WeakEntityRef>>  mFilteredPickupTargets;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Path>>        mPath;
    ::ll::TypedStorage<8, 8, ::Mob&>                           mMob;
    ::ll::TypedStorage<4, 12, ::Vec3>                          mTargetPos;
    ::ll::TypedStorage<4, 4, int>                              mSearchRange;
    ::ll::TypedStorage<4, 4, int>                              mSearchHeight;
    ::ll::TypedStorage<4, 4, int>                              mRandomStopInterval;
    ::ll::TypedStorage<4, 4, int>                              mTimeToRecalcPath;
    ::ll::TypedStorage<4, 4, int>                              mTimeoutAfterBeingAttacked;
    ::ll::TypedStorage<4, 4, float>                            mSpeedModifier;
    ::ll::TypedStorage<4, 4, float>                            mGoalRadiusSq;
    ::ll::TypedStorage<1, 1, bool>                             mPickupBasedOnChance;
    ::ll::TypedStorage<1, 1, bool>                             mTrackTarget;
    ::ll::TypedStorage<1, 1, bool>                             mCanPickupAnyItem;
    ::ll::TypedStorage<1, 1, bool>                             mCanPickupToHandOrEquipment;
    ::ll::TypedStorage<1, 1, bool>                             mPickupSameItemsAsInHand;
    ::ll::TypedStorage<1, 1, bool>                             mStopIfHoldingItem;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    PickupItemsGoal& operator=(PickupItemsGoal const&);
    PickupItemsGoal(PickupItemsGoal const&);
    PickupItemsGoal();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~PickupItemsGoal();
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
#else // @header-generator platform
    virtual void appendDebugInfo(::std::string& str) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void appendDebugInfo(std::string&) const;
#else // @header-generator platform
    virtual ~PickupItemsGoal() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit PickupItemsGoal(::Mob&);
#else // @header-generator platform
    MCAPI void _dropItem(::ItemStack const& item) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _dropItem(::ItemStack const&) const;
#else // @header-generator platform
    MCAPI ::std::vector<::WeakEntityRef>
    _filterValidTargets(::std::vector<::DistanceSortedActor> const& entities) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<WeakEntityRef> _filterValidTargets(std::vector<DistanceSortedActor> const&) const;
#else // @header-generator platform
    MCAPI ::Shareable const* _getShareableItem(::ItemStack const& item) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Shareable const* _getShareableItem(::ItemStack const&) const;

    MCNAPI bool _hasRoomForCarriedItem() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Mob&);
#else // @header-generator platform
    MCAPI bool _hasRoomForCarriedItem() const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
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
