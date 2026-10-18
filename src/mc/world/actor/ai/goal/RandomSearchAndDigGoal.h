#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorDefinitionTrigger.h"
#include "mc/world/actor/ai/goal/BaseGoal.h"
#include "mc/world/actor/ai/util/ExpiringTick.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/Tick.h"
#include "mc/world/level/block/BlockDescriptor.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class Mob;
class Path;
// clang-format on

class RandomSearchAndDigGoal : public ::BaseGoal {
public:
    // RandomSearchAndDigGoal inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum class State : int {
        Searching = 0,
        Digging   = 1,
        Success   = 2,
        Done      = 3,
    };

#else // @header-generator platform
#endif // @header-generator platform
    enum class CanUseOutcome : int {
        Ok                    = 0,
        InCooldown            = 1,
        NoNavigation          = 2,
        CouldNotFindTargetPos = 3,
        CouldNotCreatePath    = 4,
        CouldNotPathAllTheWay = 5,
    };

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    enum class State : int {
        Searching = 0,
        Digging   = 1,
        Success   = 2,
        Done      = 3,
    };

#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, float>                           mSpeedMod;
    ::ll::TypedStorage<4, 4, float>                           mGoalRadius;
    ::ll::TypedStorage<4, 4, float>                           mDigSpawnItemPosOffset;
    ::ll::TypedStorage<4, 4, float>                           mDigSpawnItemAfterSeconds;
    ::ll::TypedStorage<4, 4, float>                           mTargetDigPositionOffset;
    ::ll::TypedStorage<4, 4, int>                             mFindWantedPosRetries;
    ::ll::TypedStorage<4, 4, int>                             mSearchRangeXZ;
    ::ll::TypedStorage<4, 4, int>                             mSearchRangeY;
    ::ll::TypedStorage<8, 96, ::ActorDefinitionTrigger>       mOnSearchingStartEvent;
    ::ll::TypedStorage<8, 96, ::ActorDefinitionTrigger>       mOnFailDuringSearchingEvent;
    ::ll::TypedStorage<8, 96, ::ActorDefinitionTrigger>       mOnDiggingStartEvent;
    ::ll::TypedStorage<8, 96, ::ActorDefinitionTrigger>       mOnItemFoundEvent;
    ::ll::TypedStorage<8, 96, ::ActorDefinitionTrigger>       mOnFailDuringDiggingEvent;
    ::ll::TypedStorage<8, 96, ::ActorDefinitionTrigger>       mOnSuccessEvent;
    ::ll::TypedStorage<8, 24, std::vector<BlockDescriptor>>   mTargetBlocks;
    ::ll::TypedStorage<8, 24, std::string>                    mItemTable;
    ::ll::TypedStorage<8, 8, ::Mob&>                          mMob;
    ::ll::TypedStorage<4, 4, ::RandomSearchAndDigGoal::State> mState;
    ::ll::TypedStorage<4, 4, float>                           mGoalRadiusSqr;
    ::ll::TypedStorage<1, 1, bool>                            mItemFound;
    ::ll::TypedStorage<4, 12, ::BlockPos>                     mTargetPos;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Path>>           mPath;
    ::ll::TypedStorage<2, 2, ushort>                          mCooldownDurationTicks;
    ::ll::TypedStorage<2, 2, ushort>                          mDiggingDurationTicks;
    ::ll::TypedStorage<2, 2, ushort>                          mSpawnItemAfterTicks;
    ::ll::TypedStorage<8, 8, ::Tick>                          mCooldownEndTick;
    ::ll::TypedStorage<8, 8, ::Tick>                          mItemFoundEndTick;
    ::ll::TypedStorage<8, 8, ::Tick>                          mDiggingEndTick;
    ::ll::TypedStorage<8, 24, std::optional<ExpiringTick>>    mDiggingParticleCooldown;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, float>                             mSpeedMod;
    ::ll::TypedStorage<4, 4, float>                             mGoalRadius;
    ::ll::TypedStorage<4, 4, float>                             mDigSpawnItemPosOffset;
    ::ll::TypedStorage<4, 4, float>                             mDigSpawnItemAfterSeconds;
    ::ll::TypedStorage<4, 4, float>                             mTargetDigPositionOffset;
    ::ll::TypedStorage<4, 4, int>                               mFindWantedPosRetries;
    ::ll::TypedStorage<4, 4, int>                               mSearchRangeXZ;
    ::ll::TypedStorage<4, 4, int>                               mSearchRangeY;
    ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger>        mOnSearchingStartEvent;
    ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger>        mOnFailDuringSearchingEvent;
    ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger>        mOnDiggingStartEvent;
    ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger>        mOnItemFoundEvent;
    ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger>        mOnFailDuringDiggingEvent;
    ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger>        mOnSuccessEvent;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockDescriptor>> mTargetBlocks;
    ::ll::TypedStorage<8, 32, ::std::string>                    mItemTable;
    ::ll::TypedStorage<8, 8, ::Mob&>                            mMob;
    ::ll::TypedStorage<4, 4, ::RandomSearchAndDigGoal::State>   mState;
    ::ll::TypedStorage<4, 4, float>                             mGoalRadiusSqr;
    ::ll::TypedStorage<1, 1, bool>                              mItemFound;
    ::ll::TypedStorage<4, 12, ::BlockPos>                       mTargetPos;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Path>>         mPath;
    ::ll::TypedStorage<2, 2, ushort>                            mCooldownDurationTicks;
    ::ll::TypedStorage<2, 2, ushort>                            mDiggingDurationTicks;
    ::ll::TypedStorage<2, 2, ushort>                            mSpawnItemAfterTicks;
    ::ll::TypedStorage<8, 8, ::Tick>                            mCooldownEndTick;
    ::ll::TypedStorage<8, 8, ::Tick>                            mItemFoundEndTick;
    ::ll::TypedStorage<8, 8, ::Tick>                            mDiggingEndTick;
    ::ll::TypedStorage<8, 24, ::std::optional<::ExpiringTick>>  mDiggingParticleCooldown;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    RandomSearchAndDigGoal& operator=(RandomSearchAndDigGoal const&);
    RandomSearchAndDigGoal(RandomSearchAndDigGoal const&);
    RandomSearchAndDigGoal();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~RandomSearchAndDigGoal();
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
    MCNAPI explicit RandomSearchAndDigGoal(::Mob&);
#else // @header-generator platform
    MCAPI explicit RandomSearchAndDigGoal(::Mob& mob);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<BlockPos> _findWantedTargetPos() const;
#else // @header-generator platform
    MCAPI ::std::optional<::BlockPos> _findWantedTargetPos() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _isValidTarget(::BlockSource const&, ::BlockPos const) const;

    MCNAPI void _resetCooldownEndTick();
#else // @header-generator platform
    MCAPI bool _isValidTarget(::BlockSource const& region, ::BlockPos const pos) const;
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
