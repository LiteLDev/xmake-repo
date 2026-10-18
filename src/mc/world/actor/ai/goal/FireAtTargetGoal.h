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
#if defined(LL_PLAT_A) // @header-generator platform
class MoveControlComponent;
struct GoalId;
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ulong>                                   mDurationTicks;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, uint64>                                  mDurationTicks;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 4, float>                                   mMaxHeadRotationX;
    ::ll::TypedStorage<4, 4, float>                                   mMaxHeadRotationY;
    ::ll::TypedStorage<4, 4, float>                                   mRangedFOV;
    ::ll::TypedStorage<1, 1, bool>                                    mTriedToShoot;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ulong>                                   mAttackCooldownTimeStamp;
    ::ll::TypedStorage<8, 8, ulong>                                   mPreShootDelayTimeStamp;
    ::ll::TypedStorage<8, 8, ulong>                                   mEndTimeStamp;
    ::ll::TypedStorage<8, 136, ::ActorDefinitionIdentifier>           mProjectileDefinition;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, uint64>                                  mAttackCooldownTimeStamp;
    ::ll::TypedStorage<8, 8, uint64>                                  mPreShootDelayTimeStamp;
    ::ll::TypedStorage<8, 8, uint64>                                  mEndTimeStamp;
    ::ll::TypedStorage<8, 176, ::ActorDefinitionIdentifier>           mProjectileDefinition;
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~FireAtTargetGoal();
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
#else // @header-generator platform
    virtual void appendDebugInfo(::std::string& str) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit FireAtTargetGoal(::Mob&);
#else // @header-generator platform
    MCAPI explicit FireAtTargetGoal(::Mob& mob);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Vec3
    getAnchorAndOffsetPosition(::Actor const&, ::SharedTypes::Legacy::ProjectileAnchor, ::Vec3 const&, bool);
#else // @header-generator platform
    MCAPI static ::Vec3 getAnchorAndOffsetPosition(
        ::Actor const&                          actor,
        ::SharedTypes::Legacy::ProjectileAnchor anchor,
        ::Vec3 const&                           offset,
        bool                                    applyRotation
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::Mob&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(::Mob& mob);
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
