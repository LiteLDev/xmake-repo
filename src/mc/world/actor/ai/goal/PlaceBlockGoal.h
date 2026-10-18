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
class Block;
class BlockPos;
class BlockSource;
#else // @header-generator platform
#endif // @header-generator platform
class Mob;
#if defined(LL_PLAT_A) // @header-generator platform
class Random;
struct VariantParameterList;
struct VariantParameterListConst;
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 168, ::BlockDescriptor> mBlock;
#else // @header-generator platform
        ::ll::TypedStorage<8, 176, ::BlockDescriptor> mBlock;
#endif // @header-generator platform
        ::ll::TypedStorage<8, 64, ::ActorFilterGroup> mFilter;
        ::ll::TypedStorage<4, 4, int>                 mWeight;
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

    public:
        // prevent constructor by default
        WeightedBlockDescriptor& operator=(WeightedBlockDescriptor const&);
#else // @header-generator platform
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Mob&>                                                mMob;
    ::ll::TypedStorage<8, 24, std::vector<BlockDescriptor>>                         mPlaceableCarriedBlocks;
    ::ll::TypedStorage<8, 24, std::vector<PlaceBlockGoal::WeightedBlockDescriptor>> mRandomlyPlaceableBlocks;
    ::ll::TypedStorage<8, 64, ::ActorFilterGroup>                                   mCanPlace;
    ::ll::TypedStorage<8, 96, ::ActorDefinitionTrigger>                             mOnPlace;
    ::ll::TypedStorage<4, 8, ::IntRange>                                            mXZRange;
    ::ll::TypedStorage<4, 8, ::IntRange>                                            mYRange;
    ::ll::TypedStorage<4, 4, float>                                                 mChance;
    ::ll::TypedStorage<1, 1, bool>                                                  mAffectedByGriefingRule;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Mob&>                                                    mMob;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockDescriptor>>                         mPlaceableCarriedBlocks;
    ::ll::TypedStorage<8, 24, ::std::vector<::PlaceBlockGoal::WeightedBlockDescriptor>> mRandomlyPlaceableBlocks;
    ::ll::TypedStorage<8, 64, ::ActorFilterGroup>                                       mCanPlace;
    ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger>                                mOnPlace;
    ::ll::TypedStorage<4, 8, ::IntRange>                                                mXZRange;
    ::ll::TypedStorage<4, 8, ::IntRange>                                                mYRange;
    ::ll::TypedStorage<4, 4, float>                                                     mChance;
    ::ll::TypedStorage<1, 1, bool>                                                      mAffectedByGriefingRule;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    PlaceBlockGoal& operator=(PlaceBlockGoal const&);
    PlaceBlockGoal(PlaceBlockGoal const&);
    PlaceBlockGoal();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~PlaceBlockGoal();
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
