#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorDefinitionTrigger.h"
#include "mc/world/actor/ActorFilterGroup.h"
#include "mc/world/actor/ai/goal/BaseGoal.h"

// auto generated forward declare list
// clang-format off
class Mob;
// clang-format on

class KnockbackRoarGoal : public ::BaseGoal {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Mob&>                    mMob;
    ::ll::TypedStorage<4, 4, int>                       mMaxRoarDurationTicks;
    ::ll::TypedStorage<4, 4, int>                       mMaxTicksUntilAttack;
    ::ll::TypedStorage<4, 4, int>                       mKnockbackDamage;
    ::ll::TypedStorage<4, 4, int>                       mKnockbackHorizontalStrength;
    ::ll::TypedStorage<4, 4, int>                       mKnockbackVerticalStrength;
    ::ll::TypedStorage<4, 4, float>                     mHeightCap;
    ::ll::TypedStorage<4, 4, int>                       mKnockbackEffectRange;
    ::ll::TypedStorage<4, 4, int>                       mMaxCooldownTicks;
    ::ll::TypedStorage<8, 64, ::ActorFilterGroup>       mKnockbackFilterGroup;
    ::ll::TypedStorage<8, 64, ::ActorFilterGroup>       mDamageFilterGroup;
    ::ll::TypedStorage<8, 96, ::ActorDefinitionTrigger> mOnRoarEnd;
    ::ll::TypedStorage<1, 1, bool>                      mFilterEvaluateFix;
    ::ll::TypedStorage<4, 4, int>                       mCurrentCooldownTicks;
    ::ll::TypedStorage<4, 4, int>                       mCurrentRoarTicks;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Mob&>                     mMob;
    ::ll::TypedStorage<4, 4, int>                        mMaxRoarDurationTicks;
    ::ll::TypedStorage<4, 4, int>                        mMaxTicksUntilAttack;
    ::ll::TypedStorage<4, 4, int>                        mKnockbackDamage;
    ::ll::TypedStorage<4, 4, int>                        mKnockbackHorizontalStrength;
    ::ll::TypedStorage<4, 4, int>                        mKnockbackVerticalStrength;
    ::ll::TypedStorage<4, 4, float>                      mHeightCap;
    ::ll::TypedStorage<4, 4, int>                        mKnockbackEffectRange;
    ::ll::TypedStorage<4, 4, int>                        mMaxCooldownTicks;
    ::ll::TypedStorage<8, 64, ::ActorFilterGroup>        mKnockbackFilterGroup;
    ::ll::TypedStorage<8, 64, ::ActorFilterGroup>        mDamageFilterGroup;
    ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger> mOnRoarEnd;
    ::ll::TypedStorage<1, 1, bool>                       mFilterEvaluateFix;
    ::ll::TypedStorage<4, 4, int>                        mCurrentCooldownTicks;
    ::ll::TypedStorage<4, 4, int>                        mCurrentRoarTicks;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    KnockbackRoarGoal& operator=(KnockbackRoarGoal const&);
    KnockbackRoarGoal(KnockbackRoarGoal const&);
    KnockbackRoarGoal();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~KnockbackRoarGoal();
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
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit KnockbackRoarGoal(::Mob&);
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
