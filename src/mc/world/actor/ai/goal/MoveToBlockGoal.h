#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/util/TargetSelectionMethod.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/actor/ActorDefinitionTrigger.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/actor/ActorFilterGroup.h"
#include "mc/world/actor/ai/goal/BaseGoal.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/item/ItemDescriptor.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class Block;
#else // @header-generator platform
class ActorDefinitionTrigger;
#endif // @header-generator platform
class BlockSource;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class ItemDescriptor;
#endif // @header-generator platform
class Mob;
#if defined(LL_PLAT_A) // @header-generator platform
class Path;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class MoveToBlockGoal : public ::BaseGoal {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, int>                                  mGiveUpTicks;
    ::ll::TypedStorage<4, 4, int>                                  mStayDurationTicks;
    ::ll::TypedStorage<4, 4, float>                                mSpeedMod;
    ::ll::TypedStorage<4, 4, float>                                mGoalRadiusSq;
    ::ll::TypedStorage<4, 12, ::BlockPos>                          mTargetBlockPos;
    ::ll::TypedStorage<4, 12, ::Vec3>                              mTargetPositionOffset;
    ::ll::TypedStorage<4, 4, float>                                mChanceToStart;
    ::ll::TypedStorage<4, 4, int>                                  mInterval;
    ::ll::TypedStorage<4, 4, int>                                  mSearchRange;
    ::ll::TypedStorage<4, 4, int>                                  mSearchHeight;
    ::ll::TypedStorage<1, 1, ::TargetSelectionMethod>              mMethod;
    ::ll::TypedStorage<8, 24, std::vector<ActorDefinitionTrigger>> mOnReachTriggers;
    ::ll::TypedStorage<8, 24, std::vector<ActorDefinitionTrigger>> mOnStayCompletedTriggers;
    ::ll::TypedStorage<8, 24, std::vector<ItemDescriptor>>         mTargetBlockDescriptors;
    ::ll::TypedStorage<8, 8, ulong>                                mCooldownCounter;
    ::ll::TypedStorage<8, 8, ulong const>                          mCooldownTimeoutTime;
    ::ll::TypedStorage<1, 1, bool>                                 mReachedTarget;
    ::ll::TypedStorage<4, 4, int>                                  mNextStartTick;
    ::ll::TypedStorage<4, 4, int>                                  mStayTicks;
    ::ll::TypedStorage<4, 4, int>                                  mTravelTicks;
    ::ll::TypedStorage<4, 12, ::BlockPos>                          mStartPos;
    ::ll::TypedStorage<8, 8, ::Mob&>                               mMob;
    ::ll::TypedStorage<1, 1, bool>                                 mHasSentOnReachEvent;
    ::ll::TypedStorage<8, 64, ::ActorFilterGroup>                  mTargetBlockFilter;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, int>                                      mGiveUpTicks;
    ::ll::TypedStorage<4, 4, int>                                      mStayDurationTicks;
    ::ll::TypedStorage<4, 4, float>                                    mSpeedMod;
    ::ll::TypedStorage<4, 4, float>                                    mGoalRadiusSq;
    ::ll::TypedStorage<4, 12, ::BlockPos>                              mTargetBlockPos;
    ::ll::TypedStorage<4, 12, ::Vec3>                                  mTargetPositionOffset;
    ::ll::TypedStorage<4, 4, float>                                    mChanceToStart;
    ::ll::TypedStorage<4, 4, int>                                      mInterval;
    ::ll::TypedStorage<4, 4, int>                                      mSearchRange;
    ::ll::TypedStorage<4, 4, int>                                      mSearchHeight;
    ::ll::TypedStorage<1, 1, ::TargetSelectionMethod>                  mMethod;
    ::ll::TypedStorage<8, 24, ::std::vector<::ActorDefinitionTrigger>> mOnReachTriggers;
    ::ll::TypedStorage<8, 24, ::std::vector<::ActorDefinitionTrigger>> mOnStayCompletedTriggers;
    ::ll::TypedStorage<8, 24, ::std::vector<::ItemDescriptor>>         mTargetBlockDescriptors;
    ::ll::TypedStorage<8, 8, uint64>                                   mCooldownCounter;
    ::ll::TypedStorage<8, 8, uint64 const>                             mCooldownTimeoutTime;
    ::ll::TypedStorage<1, 1, bool>                                     mReachedTarget;
    ::ll::TypedStorage<4, 4, int>                                      mNextStartTick;
    ::ll::TypedStorage<4, 4, int>                                      mStayTicks;
    ::ll::TypedStorage<4, 4, int>                                      mTravelTicks;
    ::ll::TypedStorage<4, 12, ::BlockPos>                              mStartPos;
    ::ll::TypedStorage<8, 8, ::Mob&>                                   mMob;
    ::ll::TypedStorage<1, 1, bool>                                     mHasSentOnReachEvent;
    ::ll::TypedStorage<8, 64, ::ActorFilterGroup>                      mTargetBlockFilter;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    MoveToBlockGoal& operator=(MoveToBlockGoal const&);
    MoveToBlockGoal(MoveToBlockGoal const&);
    MoveToBlockGoal();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~MoveToBlockGoal();
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
    virtual void tick() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void start();
#else // @header-generator platform
    virtual void appendDebugInfo(::std::string& str) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void stop();
#else // @header-generator platform
    virtual void start() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void tick();

    virtual void appendDebugInfo(std::string&) const;
#else // @header-generator platform
    virtual void stop() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _findTargetBlock();
#else // @header-generator platform
    MCAPI bool _findTargetBlock();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _isValidTarget(::BlockSource&, ::BlockPos&) const;
#else // @header-generator platform
    MCAPI bool _isValidTarget(::BlockSource& region, ::BlockPos& pos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _moveToBlock();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void _moveToBlock();
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
    MCAPI void $tick();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $stop();
#else // @header-generator platform
    MCAPI void $appendDebugInfo(::std::string& str) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $tick();
#else // @header-generator platform
    MCAPI void $start();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $appendDebugInfo(std::string&) const;
    // NOLINTEND
#else // @header-generator platform
    MCAPI void $stop();
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
