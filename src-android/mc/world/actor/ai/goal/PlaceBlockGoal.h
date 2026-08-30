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
class Block;
class BlockPos;
class BlockSource;
class Mob;
class Random;
struct VariantParameterList;
struct VariantParameterListConst;
// clang-format on

class PlaceBlockGoal : public ::BaseGoal {
public:
    // PlaceBlockGoal inner types declare
    // clang-format off
    struct WeightedBlockDescriptor;
    // clang-format on

    // PlaceBlockGoal inner types define
    struct WeightedBlockDescriptor {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 168, ::BlockDescriptor> mBlock;
        ::ll::TypedStorage<8, 64, ::ActorFilterGroup> mFilter;
        ::ll::TypedStorage<4, 4, int>                 mWeight;
        // NOLINTEND

    public:
        // prevent constructor by default
        WeightedBlockDescriptor& operator=(WeightedBlockDescriptor const&);
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Mob&>                                                mMob;
    ::ll::TypedStorage<8, 24, std::vector<BlockDescriptor>>                         mPlaceableCarriedBlocks;
    ::ll::TypedStorage<8, 24, std::vector<PlaceBlockGoal::WeightedBlockDescriptor>> mRandomlyPlaceableBlocks;
    ::ll::TypedStorage<8, 64, ::ActorFilterGroup>                                   mCanPlace;
    ::ll::TypedStorage<8, 96, ::ActorDefinitionTrigger>                             mOnPlace;
    ::ll::TypedStorage<4, 8, ::IntRange>                                            mXZRange;
    ::ll::TypedStorage<4, 8, ::IntRange>                                            mYRange;
    ::ll::TypedStorage<4, 4, float>                                                 mChance;
    ::ll::TypedStorage<1, 1, bool>                                                  mAffectedByGriefingRule;
    // NOLINTEND

public:
    // prevent constructor by default
    PlaceBlockGoal& operator=(PlaceBlockGoal const&);
    PlaceBlockGoal(PlaceBlockGoal const&);
    PlaceBlockGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PlaceBlockGoal();

    virtual bool canUse();

    virtual void tick();

    virtual void appendDebugInfo(std::string&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit PlaceBlockGoal(::Mob&);
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

    MCNAPI void $tick();

    MCNAPI void $appendDebugInfo(std::string&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
