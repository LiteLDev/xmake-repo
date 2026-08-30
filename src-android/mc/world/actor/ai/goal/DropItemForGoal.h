#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/shared_types/shared_types/FloatRange.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/actor/ActorDefinitionTrigger.h"
#include "mc/world/actor/ai/goal/BaseMoveToBlockGoal.h"
#include "mc/world/actor/ai/goal/MobDescriptor.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class BlockSource;
class LootTable;
class Mob;
struct GoalId;
// clang-format on

class DropItemForGoal : public ::BaseMoveToBlockGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                        mHasDroppedItem;
    ::ll::TypedStorage<4, 4, int>                         mCooldownRemaining;
    ::ll::TypedStorage<4, 4, int>                         mTicksBeforePickup;
    ::ll::TypedStorage<4, 4, int>                         mTotalCooldownTicks;
    ::ll::TypedStorage<4, 4, float>                       mDropItemChance;
    ::ll::TypedStorage<4, 4, float>                       mPreferredSquareDistance;
    ::ll::TypedStorage<4, 4, float>                       mMinimumTeleportDistance;
    ::ll::TypedStorage<4, 4, float>                       mLookAtTargetMaxHeadHeight;
    ::ll::TypedStorage<8, 24, std::string>                mLootTable;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>             mDropForID;
    ::ll::TypedStorage<8, 96, ::ActorDefinitionTrigger>   mOnDropAttempt;
    ::ll::TypedStorage<4, 8, ::SharedTypes::FloatRange>   mTimeOfDayRange;
    ::ll::TypedStorage<4, 12, ::Vec3>                     mTargetRange;
    ::ll::TypedStorage<4, 12, ::Vec3>                     mTeleportDistanceFromTarget;
    ::ll::TypedStorage<8, 24, std::vector<MobDescriptor>> mTargetFilter;
    // NOLINTEND

public:
    // prevent constructor by default
    DropItemForGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DropItemForGoal();

    virtual bool canUse();

    virtual bool canContinueToUse();

    virtual void start();

    virtual void stop();

    virtual void tick();

    virtual void appendDebugInfo(std::string&) const;

    virtual bool isValidTarget(::BlockSource&, ::BlockPos const&);

    virtual bool findTargetBlock();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit DropItemForGoal(::Mob&);

    MCNAPI void _checkWhereHaveYouBeenAchievement(::Actor*);

    MCNAPI ::LootTable* _getLootTable();
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

    MCNAPI bool $isValidTarget(::BlockSource&, ::BlockPos const&);

    MCNAPI bool $findTargetBlock();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
