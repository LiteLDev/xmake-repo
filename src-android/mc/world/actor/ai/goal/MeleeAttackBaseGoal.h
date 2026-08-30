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
struct GoalId;
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

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~NavigationSettings();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::MeleeAttackBaseGoal::NavigationSettings> mNavigation;
    ::ll::TypedStorage<8, 8, ::Mob&>                                     mMob;
    ::ll::UntypedStorage<8, 40>                                          mTarget;
    ::ll::TypedStorage<4, 12, ::Vec3>                                    mLastCachedTargetPosition;
    ::ll::TypedStorage<4, 4, ::ActorCategory>                            mAttackTypes;
    ::ll::TypedStorage<8, 96, ::ActorDefinitionTrigger>                  mOnAttack;
    ::ll::TypedStorage<8, 96, ::ActorDefinitionTrigger>                  mOnKill;
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
    virtual ~MeleeAttackBaseGoal();

    virtual bool canUse();

    virtual bool canContinueToUse();

    virtual void start();

    virtual void stop();

    virtual void tick() = 0;

    virtual int getAttackTicksResetValue() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit MeleeAttackBaseGoal(::Mob&);

    MCNAPI void _attemptAttackTarget(::Actor&, bool, bool);

    MCNAPI void _attemptMoveToTargetPosition(::Actor const&, bool, float);

    MCNAPI void _decrementAttackTicks();

    MCNAPI void _decrementPathRecalculationTicks();

    MCNAPI ::Vec3 const& _getLastCachedTargetPosition() const;

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

    MCNAPI int $getAttackTicksResetValue() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
