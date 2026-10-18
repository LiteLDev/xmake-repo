#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/IntRange.h"
#include "mc/world/actor/ActorDefinitionTrigger.h"
#include "mc/world/actor/ActorFilterGroup.h"
#include "mc/world/actor/ai/goal/BaseGoal.h"
#include "mc/world/level/block/BlockDescriptor.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class BlockPos;
class IRandom;
#else // @header-generator platform
#endif // @header-generator platform
class Mob;
// clang-format on

class TakeBlockGoal : public ::BaseGoal {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Mob&>                        mMob;
    ::ll::TypedStorage<8, 24, std::vector<BlockDescriptor>> mValidBlocks;
    ::ll::TypedStorage<8, 64, ::ActorFilterGroup>           mCanTake;
    ::ll::TypedStorage<8, 96, ::ActorDefinitionTrigger>     mOnTake;
    ::ll::TypedStorage<4, 8, ::IntRange>                    mXZRange;
    ::ll::TypedStorage<4, 8, ::IntRange>                    mYRange;
    ::ll::TypedStorage<4, 4, float>                         mChance;
    ::ll::TypedStorage<1, 1, bool>                          mAffectedByGriefingRule;
    ::ll::TypedStorage<1, 1, bool>                          mRequiresLineOfSight;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Mob&>                            mMob;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockDescriptor>> mValidBlocks;
    ::ll::TypedStorage<8, 64, ::ActorFilterGroup>               mCanTake;
    ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger>        mOnTake;
    ::ll::TypedStorage<4, 8, ::IntRange>                        mXZRange;
    ::ll::TypedStorage<4, 8, ::IntRange>                        mYRange;
    ::ll::TypedStorage<4, 4, float>                             mChance;
    ::ll::TypedStorage<1, 1, bool>                              mAffectedByGriefingRule;
    ::ll::TypedStorage<1, 1, bool>                              mRequiresLineOfSight;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    TakeBlockGoal& operator=(TakeBlockGoal const&);
    TakeBlockGoal(TakeBlockGoal const&);
    TakeBlockGoal();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~TakeBlockGoal();
#else // @header-generator platform
    virtual bool canUse() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canUse();
#else // @header-generator platform
    virtual void tick() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void tick();

    virtual void appendDebugInfo(std::string&) const;
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
