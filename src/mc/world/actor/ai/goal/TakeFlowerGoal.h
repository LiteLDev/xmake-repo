#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/world/actor/ActorDefinitionTrigger.h"
#include "mc/world/actor/ActorFilterGroup.h"
#include "mc/world/actor/ai/goal/BaseGoal.h"

// auto generated forward declare list
// clang-format off
class Mob;
// clang-format on

class TakeFlowerGoal : public ::BaseGoal {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, float>                     mSpeedModifier;
    ::ll::TypedStorage<8, 64, ::ActorFilterGroup>       mFilters;
    ::ll::TypedStorage<4, 4, float>                     mMinPickupFlowerWaitTicks;
    ::ll::TypedStorage<4, 4, float>                     mMaxPickupFlowerWaitTicks;
    ::ll::TypedStorage<4, 12, ::Vec3>                   mSearchArea;
    ::ll::TypedStorage<4, 4, float>                     mMaxRotationX;
    ::ll::TypedStorage<4, 4, float>                     mMaxHeadRotationY;
    ::ll::TypedStorage<4, 4, float>                     mMinDistanceToTargetSquared;
    ::ll::TypedStorage<8, 96, ::ActorDefinitionTrigger> mOnTakeFlower;
    ::ll::TypedStorage<4, 4, int>                       mPickupFlowerTick;
    ::ll::TypedStorage<1, 1, bool>                      mTakeFlower;
    ::ll::TypedStorage<8, 8, ::Mob&>                    mMob;
    ::ll::TypedStorage<1, 24, ::WeakEntityRef>          mOfferFlowerMob;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, float>                      mSpeedModifier;
    ::ll::TypedStorage<8, 64, ::ActorFilterGroup>        mFilters;
    ::ll::TypedStorage<4, 4, float>                      mMinPickupFlowerWaitTicks;
    ::ll::TypedStorage<4, 4, float>                      mMaxPickupFlowerWaitTicks;
    ::ll::TypedStorage<4, 12, ::Vec3>                    mSearchArea;
    ::ll::TypedStorage<4, 4, float>                      mMaxRotationX;
    ::ll::TypedStorage<4, 4, float>                      mMaxHeadRotationY;
    ::ll::TypedStorage<4, 4, float>                      mMinDistanceToTargetSquared;
    ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger> mOnTakeFlower;
    ::ll::TypedStorage<4, 4, int>                        mPickupFlowerTick;
    ::ll::TypedStorage<1, 1, bool>                       mTakeFlower;
    ::ll::TypedStorage<8, 8, ::Mob&>                     mMob;
    ::ll::TypedStorage<8, 24, ::WeakEntityRef>           mOfferFlowerMob;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    TakeFlowerGoal& operator=(TakeFlowerGoal const&);
    TakeFlowerGoal(TakeFlowerGoal const&);
    TakeFlowerGoal();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~TakeFlowerGoal();
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
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual void appendDebugInfo(::std::string& str) const /*override*/;
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
    // NOLINTEND
#else // @header-generator platform
    MCAPI void $appendDebugInfo(::std::string& str) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};
