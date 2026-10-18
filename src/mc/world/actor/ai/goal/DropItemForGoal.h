#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/shared_types/shared_types/FloatRange.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/actor/ActorDefinitionTrigger.h"
#include "mc/world/actor/ai/goal/BaseMoveToBlockGoal.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/actor/ai/goal/MobDescriptor.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class Actor;
#else // @header-generator platform
#endif // @header-generator platform
class BlockPos;
class BlockSource;
#if defined(LL_PLAT_A) // @header-generator platform
class LootTable;
class Mob;
struct GoalId;
#else // @header-generator platform
struct MobDescriptor;
#endif // @header-generator platform
// clang-format on

class DropItemForGoal : public ::BaseMoveToBlockGoal {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>                            mHasDroppedItem;
    ::ll::TypedStorage<4, 4, int>                             mCooldownRemaining;
    ::ll::TypedStorage<4, 4, int>                             mTicksBeforePickup;
    ::ll::TypedStorage<4, 4, int>                             mTotalCooldownTicks;
    ::ll::TypedStorage<4, 4, float>                           mDropItemChance;
    ::ll::TypedStorage<4, 4, float>                           mPreferredSquareDistance;
    ::ll::TypedStorage<4, 4, float>                           mMinimumTeleportDistance;
    ::ll::TypedStorage<4, 4, float>                           mLookAtTargetMaxHeadHeight;
    ::ll::TypedStorage<8, 32, ::std::string>                  mLootTable;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                 mDropForID;
    ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger>      mOnDropAttempt;
    ::ll::TypedStorage<4, 8, ::SharedTypes::FloatRange>       mTimeOfDayRange;
    ::ll::TypedStorage<4, 12, ::Vec3>                         mTargetRange;
    ::ll::TypedStorage<4, 12, ::Vec3>                         mTeleportDistanceFromTarget;
    ::ll::TypedStorage<8, 24, ::std::vector<::MobDescriptor>> mTargetFilter;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    DropItemForGoal();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~DropItemForGoal();
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
#else // @header-generator platform
    virtual bool findTargetBlock() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void appendDebugInfo(std::string&) const;
#else // @header-generator platform
    virtual bool isValidTarget(::BlockSource& region, ::BlockPos const& pos) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
    MCAPI bool $findTargetBlock();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isValidTarget(::BlockSource&, ::BlockPos const&);
#else // @header-generator platform
    MCAPI bool $isValidTarget(::BlockSource& region, ::BlockPos const& pos);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $findTargetBlock();
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
