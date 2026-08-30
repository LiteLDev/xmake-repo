#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/shared_types/legacy/actor/ProjectileAnchor.h"
#include "mc/util/FloatRange.h"
#include "mc/world/actor/ActorDefinitionIdentifier.h"
#include "mc/world/actor/ActorFilterGroup.h"
#include "mc/world/actor/ai/goal/BaseGoal.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Mob;
class MoveControlComponent;
struct GoalId;
// clang-format on

class FireAtTargetGoal : public ::BaseGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Mob&>                                  mMob;
    ::ll::TypedStorage<8, 64, ::ActorFilterGroup>                     mFilters;
    ::ll::TypedStorage<4, 8, ::FloatRange>                            mAttackRangeSquared;
    ::ll::TypedStorage<4, 4, uint>                                    mAttackCooldownTicks;
    ::ll::TypedStorage<4, 4, uint>                                    mPreShootDelayTicks;
    ::ll::TypedStorage<8, 8, ulong>                                   mDurationTicks;
    ::ll::TypedStorage<4, 4, float>                                   mMaxHeadRotationX;
    ::ll::TypedStorage<4, 4, float>                                   mMaxHeadRotationY;
    ::ll::TypedStorage<4, 4, float>                                   mRangedFOV;
    ::ll::TypedStorage<1, 1, bool>                                    mTriedToShoot;
    ::ll::TypedStorage<8, 8, ulong>                                   mAttackCooldownTimeStamp;
    ::ll::TypedStorage<8, 8, ulong>                                   mPreShootDelayTimeStamp;
    ::ll::TypedStorage<8, 8, ulong>                                   mEndTimeStamp;
    ::ll::TypedStorage<8, 136, ::ActorDefinitionIdentifier>           mProjectileDefinition;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::ProjectileAnchor> mOwnerAnchor;
    ::ll::TypedStorage<4, 12, ::Vec3>                                 mOwnerOffset;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::ProjectileAnchor> mTargetAnchor;
    ::ll::TypedStorage<4, 12, ::Vec3>                                 mTargetOffset;
    ::ll::TypedStorage<1, 1, bool>                                    mUseRotation;
    // NOLINTEND

public:
    // prevent constructor by default
    FireAtTargetGoal& operator=(FireAtTargetGoal const&);
    FireAtTargetGoal(FireAtTargetGoal const&);
    FireAtTargetGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FireAtTargetGoal();

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
    MCNAPI explicit FireAtTargetGoal(::Mob&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Vec3
    getAnchorAndOffsetPosition(::Actor const&, ::SharedTypes::Legacy::ProjectileAnchor, ::Vec3 const&, bool);
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
