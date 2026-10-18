#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/shared_types/shared_types/FloatRange.h"
#include "mc/world/actor/ActorFilterGroup.h"
#include "mc/world/actor/ai/goal/BaseGoal.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/Tick.h"
#include "mc/world/phys/AABB.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class Actor;
class BlockSource;
#else // @header-generator platform
#endif // @header-generator platform
class Mob;
// clang-format on

class JumpAroundTargetGoal : public ::BaseGoal {
public:
    // JumpAroundTargetGoal inner types declare
    // clang-format off
    struct Jump;
    // clang-format on

    // JumpAroundTargetGoal inner types define
    enum class State : int {
#if defined(LL_PLAT_A) // @header-generator platform
        PREPARE_JUMP = 0,
        JUMPING      = 1,
        DONE         = 2,
#else // @header-generator platform
        PrepareJump = 0,
        Jumping     = 1,
        Done        = 2,
#endif // @header-generator platform
    };

    struct Jump {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 12, ::Vec3> targetPosition;
        ::ll::TypedStorage<4, 12, ::Vec3> velocityVector;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 64, ::ActorFilterGroup>                        mFilters;
    ::ll::TypedStorage<4, 4, int>                                        mCooldownTicks;
    ::ll::TypedStorage<4, 4, int>                                        mCooldownWhenHurtTicks;
    ::ll::TypedStorage<4, 4, int>                                        mLastHurtDurationTicks;
    ::ll::TypedStorage<4, 4, float>                                      mMaxJumpVelocity;
    ::ll::TypedStorage<1, 1, bool>                                       mCheckCollision;
    ::ll::TypedStorage<4, 4, float>                                      mBoundingBoxScaleFactor;
    ::ll::TypedStorage<4, 4, int>                                        mLineOfSightCheckHeight;
    ::ll::TypedStorage<4, 8, ::SharedTypes::FloatRange>                  mDistanceToTargetSqrRange;
    ::ll::TypedStorage<4, 4, int>                                        mLandingPositionSpreadDegrees;
    ::ll::TypedStorage<4, 8, ::SharedTypes::FloatRange>                  mDistanceFromTargetLandingPosition;
    ::ll::TypedStorage<4, 4, int>                                        mRequiredAirBlocksAbove;
    ::ll::TypedStorage<4, 4, int>                                        mSnapToSurfaceBlockRange;
    ::ll::TypedStorage<8, 24, std::vector<float>>                        mAllowedJumpAngles;
    ::ll::TypedStorage<4, 4, int>                                        mJumpFromWaterTimeoutTicks;
    ::ll::TypedStorage<8, 8, ::Mob&>                                     mMob;
    ::ll::TypedStorage<1, 1, bool>                                       mDiscardFrictionDefault;
    ::ll::TypedStorage<8, 8, ::Tick>                                     mJumpedFromWaterEndTick;
    ::ll::TypedStorage<4, 24, ::AABB const>                              mOriginalAabb;
    ::ll::TypedStorage<4, 4, ::JumpAroundTargetGoal::State>              mState;
    ::ll::TypedStorage<4, 12, ::BlockPos>                                mStartingPos;
    ::ll::TypedStorage<8, 8, ::Tick>                                     mGoalStartTick;
    ::ll::TypedStorage<8, 8, ::Tick>                                     mCooldownEndTick;
    ::ll::TypedStorage<4, 28, std::optional<JumpAroundTargetGoal::Jump>> mJumpData;
    ::ll::TypedStorage<8, 8, ulong>                                      mPrepareJumpDurationTicks;
#else // @header-generator platform
    ::ll::TypedStorage<8, 64, ::ActorFilterGroup>                            mFilters;
    ::ll::TypedStorage<4, 4, int>                                            mCooldownTicks;
    ::ll::TypedStorage<4, 4, int>                                            mCooldownWhenHurtTicks;
    ::ll::TypedStorage<4, 4, int>                                            mLastHurtDurationTicks;
    ::ll::TypedStorage<4, 4, float>                                          mMaxJumpVelocity;
    ::ll::TypedStorage<1, 1, bool>                                           mCheckCollision;
    ::ll::TypedStorage<4, 4, float>                                          mBoundingBoxScaleFactor;
    ::ll::TypedStorage<4, 4, int>                                            mLineOfSightCheckHeight;
    ::ll::TypedStorage<4, 8, ::SharedTypes::FloatRange>                      mDistanceToTargetSqrRange;
    ::ll::TypedStorage<4, 4, int>                                            mLandingPositionSpreadDegrees;
    ::ll::TypedStorage<4, 8, ::SharedTypes::FloatRange>                      mDistanceFromTargetLandingPosition;
    ::ll::TypedStorage<4, 4, int>                                            mRequiredAirBlocksAbove;
    ::ll::TypedStorage<4, 4, int>                                            mSnapToSurfaceBlockRange;
    ::ll::TypedStorage<8, 24, ::std::vector<float>>                          mAllowedJumpAngles;
    ::ll::TypedStorage<4, 4, int>                                            mJumpFromWaterTimeoutTicks;
    ::ll::TypedStorage<8, 8, ::Mob&>                                         mMob;
    ::ll::TypedStorage<1, 1, bool>                                           mDiscardFrictionDefault;
    ::ll::TypedStorage<8, 8, ::Tick>                                         mJumpedFromWaterEndTick;
    ::ll::TypedStorage<4, 24, ::AABB const>                                  mOriginalAabb;
    ::ll::TypedStorage<4, 4, ::JumpAroundTargetGoal::State>                  mState;
    ::ll::TypedStorage<4, 12, ::BlockPos>                                    mStartingPos;
    ::ll::TypedStorage<8, 8, ::Tick>                                         mGoalStartTick;
    ::ll::TypedStorage<8, 8, ::Tick>                                         mCooldownEndTick;
    ::ll::TypedStorage<4, 28, ::std::optional<::JumpAroundTargetGoal::Jump>> mJumpData;
    ::ll::TypedStorage<8, 8, uint64>                                         mPrepareJumpDurationTicks;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    JumpAroundTargetGoal& operator=(JumpAroundTargetGoal const&);
    JumpAroundTargetGoal(JumpAroundTargetGoal const&);
    JumpAroundTargetGoal();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~JumpAroundTargetGoal();
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
    virtual bool canBeInterrupted();
#else // @header-generator platform
    virtual void stop() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void start();
#else // @header-generator platform
    virtual void tick() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void stop();
#else // @header-generator platform
    virtual bool canBeInterrupted() /*override*/;
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
    MCNAPI explicit JumpAroundTargetGoal(::Mob&);
#else // @header-generator platform
    MCAPI explicit JumpAroundTargetGoal(::Mob& mob);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<JumpAroundTargetGoal::Jump> _calculateOptimalJumpVector(::Vec3 const&) const;

    MCNAPI std::optional<BlockPos> _snapToSurface(::Vec3 const&) const;
#else // @header-generator platform
    MCAPI ::std::optional<::JumpAroundTargetGoal::Jump> _calculateOptimalJumpVector(::Vec3 const& targetPosition) const;
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
    MCNAPI bool $canBeInterrupted();
#else // @header-generator platform
    MCAPI void $start();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $start();
#else // @header-generator platform
    MCAPI void $stop();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $stop();
#else // @header-generator platform
    MCAPI void $tick();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $tick();
#else // @header-generator platform
    MCFOLD bool $canBeInterrupted();
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
