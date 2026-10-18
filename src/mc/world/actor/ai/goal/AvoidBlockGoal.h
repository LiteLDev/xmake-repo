#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/deps/shared_types/shared_types/FloatRange.h"
#include "mc/util/TargetSelectionMethod.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/actor/ActorDefinitionTrigger.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/actor/ai/goal/BaseGoal.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/item/ItemDescriptor.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/Tick.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class Block;
class BlockSource;
#else // @header-generator platform
class ActorDefinitionTrigger;
class ItemDescriptor;
#endif // @header-generator platform
class Mob;
class Path;
#if defined(LL_PLAT_A) // @header-generator platform
struct GoalId;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class AvoidBlockGoal : public ::BaseGoal {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 12, ::Vec3>                                mTargetPos;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Path>>                  mPath;
    ::ll::TypedStorage<8, 8, ::Mob&>                                 mMob;
    ::ll::TypedStorage<8, 8, ::Tick>                                 mNextStartTick;
    ::ll::TypedStorage<4, 12, ::BlockPos>                            mTargetBlockToAvoidPos;
    ::ll::TypedStorage<4, 4, float>                                  mWalkSpeedModifier;
    ::ll::TypedStorage<4, 4, float>                                  mSprintSpeedModifier;
    ::ll::TypedStorage<4, 4, int>                                    mSearchRange;
    ::ll::TypedStorage<4, 4, int>                                    mSearchHeight;
    ::ll::TypedStorage<4, 4, int>                                    mInterval;
    ::ll::TypedStorage<1, 1, ::TargetSelectionMethod>                mMethod;
    ::ll::TypedStorage<8, 24, std::vector<ItemDescriptor>>           mTargetBlockDescriptors;
    ::ll::TypedStorage<8, 24, std::vector<ActorDefinitionTrigger>>   mOnEscapedTriggers;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::LevelSoundEvent> mSoundEvent;
    ::ll::TypedStorage<4, 8, ::SharedTypes::FloatRange>              mSoundIntervalRange;
    ::ll::TypedStorage<8, 8, ::Tick>                                 mNextSoundEventTick;
#else // @header-generator platform
    ::ll::TypedStorage<4, 12, ::Vec3>                                  mTargetPos;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Path>>                mPath;
    ::ll::TypedStorage<8, 8, ::Mob&>                                   mMob;
    ::ll::TypedStorage<8, 8, ::Tick>                                   mNextStartTick;
    ::ll::TypedStorage<4, 12, ::BlockPos>                              mTargetBlockToAvoidPos;
    ::ll::TypedStorage<4, 4, float>                                    mWalkSpeedModifier;
    ::ll::TypedStorage<4, 4, float>                                    mSprintSpeedModifier;
    ::ll::TypedStorage<4, 4, int>                                      mSearchRange;
    ::ll::TypedStorage<4, 4, int>                                      mSearchHeight;
    ::ll::TypedStorage<4, 4, int>                                      mInterval;
    ::ll::TypedStorage<1, 1, ::TargetSelectionMethod>                  mMethod;
    ::ll::TypedStorage<8, 24, ::std::vector<::ItemDescriptor>>         mTargetBlockDescriptors;
    ::ll::TypedStorage<8, 24, ::std::vector<::ActorDefinitionTrigger>> mOnEscapedTriggers;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::LevelSoundEvent>   mSoundEvent;
    ::ll::TypedStorage<4, 8, ::SharedTypes::FloatRange>                mSoundIntervalRange;
    ::ll::TypedStorage<8, 8, ::Tick>                                   mNextSoundEventTick;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    AvoidBlockGoal& operator=(AvoidBlockGoal const&);
    AvoidBlockGoal(AvoidBlockGoal const&);
    AvoidBlockGoal();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~AvoidBlockGoal();
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
#else // @header-generator platform
    virtual void stop() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void appendDebugInfo(std::string&) const;
#else // @header-generator platform
    virtual ~AvoidBlockGoal() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit AvoidBlockGoal(::Mob&);

    MCNAPI bool _findTargetBlock();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Mob&);
#else // @header-generator platform
    MCAPI bool _findTargetBlock();
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
#else // @header-generator platform
    MCAPI void $stop();


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
