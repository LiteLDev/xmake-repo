#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/actor/BaseGoalDefinition.h"
#include "mc/deps/shared_types/legacy/BlockDescriptor.h"
#include "mc/deps/shared_types/shared_types/IntRange.h"
#include "mc/deps/shared_types/v1_21_120/actor/ActorDefinitionTrigger.h"
#include "mc/deps/shared_types/v1_21_20/filter_groups/FilterGroupData.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_30 {

struct PlaceBlockGoalDefinition : public ::SharedTypes::BaseGoalDefinition {
public:
    // PlaceBlockGoalDefinition inner types declare
    // clang-format off
    struct WeightedBlockDescriptor;
    // clang-format on

    // PlaceBlockGoalDefinition inner types define
    struct WeightedBlockDescriptor {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 72, ::SharedTypes::Legacy::BlockDescriptor>    mBlock;
        ::ll::TypedStorage<8, 192, ::SharedTypes::v1_21_20::FilterGroupData> mFilter;
        ::ll::TypedStorage<4, 4, int>                                        mWeight;
        // NOLINTEND

    public:
        // prevent constructor by default
        WeightedBlockDescriptor(WeightedBlockDescriptor const&);

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ::SharedTypes::v1_26_30::PlaceBlockGoalDefinition::WeightedBlockDescriptor&
        operator=(::SharedTypes::v1_26_30::PlaceBlockGoalDefinition::WeightedBlockDescriptor&&);

        MCNAPI bool operator==(::SharedTypes::v1_26_30::PlaceBlockGoalDefinition::WeightedBlockDescriptor const&) const;

        MCNAPI ~WeightedBlockDescriptor();
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
        MCNAPI static void bindType(::cereal::ReflectionCtx&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::Legacy::BlockDescriptor>> mPlaceableCarriedBlocks;
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::v1_26_30::PlaceBlockGoalDefinition::WeightedBlockDescriptor>> mRandomlyPlaceableBlocks;
    ::ll::TypedStorage<8, 192, ::SharedTypes::v1_21_20::FilterGroupData> mCanPlace;
    ::ll::TypedStorage<8, 224, ::SharedTypes::v1_21_120::ActorDefinitionTrigger> mOnPlace;
    ::ll::TypedStorage<4, 8, ::SharedTypes::IntRange> mXZRange;
    ::ll::TypedStorage<4, 8, ::SharedTypes::IntRange> mYRange;
    ::ll::TypedStorage<4, 4, float> mChance;
    ::ll::TypedStorage<1, 1, bool> mAffectedByGriefingRule;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    PlaceBlockGoalDefinition& operator=(PlaceBlockGoalDefinition const&);
    PlaceBlockGoalDefinition(PlaceBlockGoalDefinition const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::SharedTypes::v1_26_30::PlaceBlockGoalDefinition&
    operator=(::SharedTypes::v1_26_30::PlaceBlockGoalDefinition&&);

    MCNAPI bool operator==(::SharedTypes::v1_26_30::PlaceBlockGoalDefinition const&) const;

    MCNAPI ~PlaceBlockGoalDefinition();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static bool const& DEFAULT_AFFECTED_BY_GRIEFING_RULE();

    MCNAPI static float const& DEFAULT_CHANCE();

    MCNAPI static std::string_view const& NAME();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_30
