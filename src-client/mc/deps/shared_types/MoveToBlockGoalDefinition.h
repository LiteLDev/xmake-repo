#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/shared_types/actor/BaseGoalDefinition.h"
#include "mc/deps/shared_types/legacy/item/ItemDescriptor.h"
#include "mc/deps/shared_types/v1_21_120/actor/ActorDefinitionTrigger.h"
#include "mc/deps/shared_types/v1_21_20/filter_groups/FilterGroupData.h"

namespace SharedTypes::v1_26_40 {

struct MoveToBlockGoalDefinition : public ::SharedTypes::BaseGoalDefinition {
public:
    // MoveToBlockGoalDefinition inner types define
    enum class TargetSelectionMethod : int {
        Nearest = 0,
        Random  = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<4, 4, float> mSpeedMultiplier;
    ::ll::TypedStorage<4, 4, int> mSearchRange;
    ::ll::TypedStorage<4, 4, int> mSearchHeight;
    ::ll::TypedStorage<4, 4, int> mTickInterval;
    ::ll::TypedStorage<4, 4, float> mStayDuration;
    ::ll::TypedStorage<4, 4, float> mGoalRadius;
    ::ll::TypedStorage<4, 4, float> mStartChance;
    ::ll::TypedStorage<4, 4, ::SharedTypes::v1_26_40::MoveToBlockGoalDefinition::TargetSelectionMethod> mTargetSelectionMethod;
    ::ll::TypedStorage<4, 12, ::Vec3> mTargetOffset;
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::v1_21_120::ActorDefinitionTrigger>> mOnReachTriggers;
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::v1_21_120::ActorDefinitionTrigger>> mOnStayCompletedTriggers;
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::Legacy::ItemDescriptor>> mTargetBlockDescriptors;
    ::ll::TypedStorage<8, 192, ::SharedTypes::v1_21_20::FilterGroupData> mTargetBlockFilter;
    // clang-format on
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_40
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
