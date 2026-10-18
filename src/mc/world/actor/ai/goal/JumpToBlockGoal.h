#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/shared_types/shared_types/FloatRange.h"
#include "mc/world/actor/ai/goal/BaseGoal.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/item/ItemDescriptor.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/Tick.h"
#include "mc/world/phys/AABB.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class Block;
class BlockSource;
#else // @header-generator platform
class ItemDescriptor;
#endif // @header-generator platform
class Mob;
class MoveControlComponent;
class NavigationComponent;
// clang-format on

class JumpToBlockGoal : public ::BaseGoal {
public:
    // JumpToBlockGoal inner types declare
    // clang-format off
    struct WeightedJumpToBlockPos;
    // clang-format on

    // JumpToBlockGoal inner types define
    enum class JumpState : uchar {
        LookingForBlock = 0,
        FaceJump        = 1,
        Jump            = 2,
        Airborne        = 3,
        Done            = 4,
    };

    struct WeightedJumpToBlockPos {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 12, ::BlockPos> targetPos;
        ::ll::TypedStorage<4, 12, ::Vec3>     velocityVector;
        ::ll::TypedStorage<4, 4, int>         mWeight;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Mob&>                                                mMob;
    ::ll::TypedStorage<1, 1, bool>                                                  mDiscardFrictionDefault;
    ::ll::TypedStorage<8, 8, ::Tick>                                                mCooldownTimeout;
    ::ll::TypedStorage<8, 8, ::Tick>                                                mNextCandidateCheck;
    ::ll::TypedStorage<4, 4, int>                                                   mCandidateAttemptCounter;
    ::ll::TypedStorage<1, 1, ::JumpToBlockGoal::JumpState>                          mState;
    ::ll::TypedStorage<8, 24, std::vector<Vec3>>                                    mJumpCurve;
    ::ll::TypedStorage<4, 12, ::BlockPos>                                           mTargetBlockPos;
    ::ll::TypedStorage<8, 24, std::vector<BlockPos>>                                mCandidateBlocksPositions;
    ::ll::TypedStorage<4, 12, ::BlockPos>                                           mStartingPos;
    ::ll::TypedStorage<8, 24, std::vector<JumpToBlockGoal::WeightedJumpToBlockPos>> mJumpableBlocksPositions;
    ::ll::TypedStorage<4, 12, ::Vec3>                                               mVelocityVector;
    ::ll::TypedStorage<8, 8, ::Tick>                                                mFaceJumpTimer;
    ::ll::TypedStorage<4, 24, ::AABB const>                                         mOriginalAabb;
    ::ll::TypedStorage<4, 4, int>                                                   mSearchWidth;
    ::ll::TypedStorage<4, 4, int>                                                   mSearchHeight;
    ::ll::TypedStorage<4, 4, int>                                                   mMinPathLength;
    ::ll::TypedStorage<4, 4, int>                                                   mMinDistance;
    ::ll::TypedStorage<4, 8, ::SharedTypes::FloatRange>                             mCooldownTime;
    ::ll::TypedStorage<4, 4, float>                                                 mScaleFactor;
    ::ll::TypedStorage<4, 4, float>                                                 mMaxVelocity;
    ::ll::TypedStorage<8, 24, std::vector<ItemDescriptor>>                          mPreferredBlocks;
    ::ll::TypedStorage<4, 4, float>                                                 mPreferredBlocksChance;
    ::ll::TypedStorage<8, 24, std::vector<ItemDescriptor>>                          mForbiddenBlocks;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Mob&>                                                    mMob;
    ::ll::TypedStorage<1, 1, bool>                                                      mDiscardFrictionDefault;
    ::ll::TypedStorage<8, 8, ::Tick>                                                    mCooldownTimeout;
    ::ll::TypedStorage<8, 8, ::Tick>                                                    mNextCandidateCheck;
    ::ll::TypedStorage<4, 4, int>                                                       mCandidateAttemptCounter;
    ::ll::TypedStorage<1, 1, ::JumpToBlockGoal::JumpState>                              mState;
    ::ll::TypedStorage<8, 24, ::std::vector<::Vec3>>                                    mJumpCurve;
    ::ll::TypedStorage<4, 12, ::BlockPos>                                               mTargetBlockPos;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockPos>>                                mCandidateBlocksPositions;
    ::ll::TypedStorage<4, 12, ::BlockPos>                                               mStartingPos;
    ::ll::TypedStorage<8, 24, ::std::vector<::JumpToBlockGoal::WeightedJumpToBlockPos>> mJumpableBlocksPositions;
    ::ll::TypedStorage<4, 12, ::Vec3>                                                   mVelocityVector;
    ::ll::TypedStorage<8, 8, ::Tick>                                                    mFaceJumpTimer;
    ::ll::TypedStorage<4, 24, ::AABB const>                                             mOriginalAabb;
    ::ll::TypedStorage<4, 4, int>                                                       mSearchWidth;
    ::ll::TypedStorage<4, 4, int>                                                       mSearchHeight;
    ::ll::TypedStorage<4, 4, int>                                                       mMinPathLength;
    ::ll::TypedStorage<4, 4, int>                                                       mMinDistance;
    ::ll::TypedStorage<4, 8, ::SharedTypes::FloatRange>                                 mCooldownTime;
    ::ll::TypedStorage<4, 4, float>                                                     mScaleFactor;
    ::ll::TypedStorage<4, 4, float>                                                     mMaxVelocity;
    ::ll::TypedStorage<8, 24, ::std::vector<::ItemDescriptor>>                          mPreferredBlocks;
    ::ll::TypedStorage<4, 4, float>                                                     mPreferredBlocksChance;
    ::ll::TypedStorage<8, 24, ::std::vector<::ItemDescriptor>>                          mForbiddenBlocks;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    JumpToBlockGoal& operator=(JumpToBlockGoal const&);
    JumpToBlockGoal(JumpToBlockGoal const&);
    JumpToBlockGoal();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~JumpToBlockGoal();
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
    MCNAPI explicit JumpToBlockGoal(::Mob&);
#else // @header-generator platform
    MCAPI explicit JumpToBlockGoal(::Mob& mob);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _clearGoalState();
#else // @header-generator platform
    MCAPI void _clearGoalState();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _findCandidateBlocks(::NavigationComponent&);
#else // @header-generator platform
    MCAPI bool _findCandidateBlocks(::NavigationComponent& navigation);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _findJumpableBlocks(bool);
#else // @header-generator platform
    MCAPI bool _findJumpableBlocks(bool useOnlyPreferredBlocksIfAny);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _findTargetBlock();
#else // @header-generator platform
    MCAPI bool _findTargetBlock();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _turnToTarget(::MoveControlComponent const&) const;

    MCNAPI void resetCooldown();
#else // @header-generator platform
    MCAPI bool _turnToTarget(::MoveControlComponent const& moveControl) const;
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
