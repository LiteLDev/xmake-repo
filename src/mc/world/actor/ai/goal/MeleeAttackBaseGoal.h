#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/world/actor/ActorCategory.h"
#include "mc/world/actor/ActorDefinitionTrigger.h"
#include "mc/world/actor/TempEPtr.h"
#include "mc/world/actor/ai/goal/BaseGoal.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Mob;
class NavigationComponent;
class Path;
#if defined(LL_PLAT_A) // @header-generator platform
struct GoalId;
#else // @header-generator platform
namespace SharedTypes::v1_26_40 { struct MeleeAttackBaseGoalDefinition; }
#endif // @header-generator platform
// clang-format on

class MeleeAttackBaseGoal : public ::BaseGoal {
public:
    // MeleeAttackBaseGoal inner types declare
    // clang-format off
    struct NavigationSettings;
    // clang-format on

    // MeleeAttackBaseGoal inner types define
    struct NavigationSettings {
    public:
#if defined(LL_PLAT_A) // @header-generator platform
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, std::unique_ptr<Path>> mPath;
        ::ll::TypedStorage<4, 4, int>                   mMinPathTicks;
        ::ll::TypedStorage<4, 4, int>                   mMaxPathTicks;
        ::ll::TypedStorage<4, 4, int>                   mPathFailTickIncrease;
        ::ll::TypedStorage<4, 4, int>                   mInnerBoundaryTickIncrease;
        ::ll::TypedStorage<4, 4, int>                   mOuterBoundaryTickIncrease;
        ::ll::TypedStorage<4, 4, int>                   mTicksToRecalculatePath;
        ::ll::TypedStorage<4, 4, float>                 mPathInnerBoundarySq;
        ::ll::TypedStorage<4, 4, float>                 mPathOuterBoundarySq;
        ::ll::TypedStorage<4, 4, float>                 mSpeedMultiplier;
        ::ll::TypedStorage<1, 1, bool>                  mRequireCompletePath;
        ::ll::TypedStorage<1, 1, bool>                  mTrackTarget;
        ::ll::TypedStorage<1, 1, bool>                  mHijackMountNavigation;
        // NOLINTEND
#else // @header-generator platform
        // NavigationSettings inner types define
        using DefinitionType = ::SharedTypes::v1_26_40::MeleeAttackBaseGoalDefinition;
#endif // @header-generator platform

    public:
#if defined(LL_PLAT_A) // @header-generator platform
        // member functions
#else // @header-generator platform
        // member variables
#endif // @header-generator platform
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI ~NavigationSettings();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
#else // @header-generator platform
        ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Path>> mPath;
        ::ll::TypedStorage<4, 4, int>                       mMinPathTicks;
        ::ll::TypedStorage<4, 4, int>                       mMaxPathTicks;
        ::ll::TypedStorage<4, 4, int>                       mPathFailTickIncrease;
        ::ll::TypedStorage<4, 4, int>                       mInnerBoundaryTickIncrease;
        ::ll::TypedStorage<4, 4, int>                       mOuterBoundaryTickIncrease;
        ::ll::TypedStorage<4, 4, int>                       mTicksToRecalculatePath;
        ::ll::TypedStorage<4, 4, float>                     mPathInnerBoundarySq;
        ::ll::TypedStorage<4, 4, float>                     mPathOuterBoundarySq;
        ::ll::TypedStorage<4, 4, float>                     mSpeedMultiplier;
        ::ll::TypedStorage<1, 1, bool>                      mRequireCompletePath;
        ::ll::TypedStorage<1, 1, bool>                      mTrackTarget;
        ::ll::TypedStorage<1, 1, bool>                      mHijackMountNavigation;
#endif // @header-generator platform
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::MeleeAttackBaseGoal::NavigationSettings> mNavigation;
    ::ll::TypedStorage<8, 8, ::Mob&>                                     mMob;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 40>                                          mTarget;
#else // @header-generator platform
    ::ll::TypedStorage<8, 40, ::TempEPtr<::Actor>>                       mTarget;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 12, ::Vec3>                                    mLastCachedTargetPosition;
    ::ll::TypedStorage<4, 4, ::ActorCategory>                            mAttackTypes;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 96, ::ActorDefinitionTrigger>                  mOnAttack;
    ::ll::TypedStorage<8, 96, ::ActorDefinitionTrigger>                  mOnKill;
#else // @header-generator platform
    ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger>                 mOnAttack;
    ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger>                 mOnKill;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 4, float>                                      mMeleeFov;
    ::ll::TypedStorage<4, 4, float>                                      mMaxRotationX;
    ::ll::TypedStorage<4, 4, float>                                      mMaxHeadRotationY;
    ::ll::TypedStorage<4, 4, int>                                        mRandomStopInterval;
    ::ll::TypedStorage<4, 4, int>                                        mAttackTicks;
    ::ll::TypedStorage<4, 4, int>                                        mCooldownTicks;
    ::ll::TypedStorage<1, 1, bool>                                       mAttackOnce;
    ::ll::TypedStorage<1, 1, bool>                                       mHasAttacked;
    ::ll::TypedStorage<1, 1, bool>                                       mSetPersistent;
    ::ll::TypedStorage<1, 1, bool>                                       mCanSpreadOnFire;
    // NOLINTEND

public:
    // prevent constructor by default
    MeleeAttackBaseGoal& operator=(MeleeAttackBaseGoal const&);
    MeleeAttackBaseGoal(MeleeAttackBaseGoal const&);
    MeleeAttackBaseGoal();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~MeleeAttackBaseGoal();
#else // @header-generator platform
    virtual ~MeleeAttackBaseGoal() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canUse();
#else // @header-generator platform
    virtual bool canUse() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canContinueToUse();
#else // @header-generator platform
    virtual bool canContinueToUse() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void start();
#else // @header-generator platform
    virtual void start() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void stop();
#else // @header-generator platform
    virtual void stop() /*override*/;
#endif // @header-generator platform

    virtual void tick() = 0;

    virtual int getAttackTicksResetValue() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit MeleeAttackBaseGoal(::Mob&);
#else // @header-generator platform
    MCAPI explicit MeleeAttackBaseGoal(::Mob& mob);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _attemptAttackTarget(::Actor&, bool, bool);
#else // @header-generator platform
    MCAPI void _attemptAttackTarget(::Actor& target, bool canReachTarget, bool hasLineOfSight);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _attemptMoveToTargetPosition(::Actor const&, bool, float);
#else // @header-generator platform
    MCAPI void _attemptMoveToTargetPosition(::Actor const& target, bool canReachTarget, float targetDistanceSq);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _decrementAttackTicks();
#else // @header-generator platform
    MCAPI ::Mob& _getNavigatingMob() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _decrementPathRecalculationTicks();
#else // @header-generator platform
    MCAPI ::NavigationComponent* _getNavigationComponent() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Vec3 const& _getLastCachedTargetPosition() const;
#else // @header-generator platform
    MCAPI bool _isNavigationDoneOrStuck() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Mob& _getMob() const;

    MCNAPI ::Mob& _getNavigatingMob() const;

    MCNAPI ::NavigationComponent* _getNavigationComponent() const;

    MCNAPI ::Actor* _getTarget() const;

    MCNAPI int _getTicksToRecalculatePath() const;

    MCNAPI void _increasePathRecalculationFailureTick();

    MCNAPI bool _isNavigationDoneOrStuck() const;

    MCNAPI void _resetAttackTicks();

    MCNAPI void _setHasAttacked();

    MCNAPI bool _targetPositionPutsMobInSun();

    MCNAPI int getAttackTicks() const;

    MCNAPI int getCooldownTicks() const;

    MCNAPI float getMeleeFOV() const;

    MCNAPI bool hasAttackTicksLeft() const;

    MCNAPI bool isWithinFoV(::Vec3 const&) const;
#else // @header-generator platform
    MCAPI bool _targetPositionPutsMobInSun();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::Mob&);
#else // @header-generator platform
    MCAPI void* $ctor(::Mob& mob);
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
    MCNAPI int $getAttackTicksResetValue() const;
#else // @header-generator platform
    MCAPI int $getAttackTicksResetValue() const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
