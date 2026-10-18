#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/actor/BaseGoalDefinition.h"
#include "mc/deps/shared_types/legacy/ExpressionNode.h"
#include "mc/deps/shared_types/v1_21_120/actor/ActorDefinitionTrigger.h"

namespace SharedTypes::v1_26_40 {

struct EatBlockGoalDefinition : public ::SharedTypes::BaseGoalDefinition {
public:
    // EatBlockGoalDefinition inner types declare
    // clang-format off
    struct EatAndReplaceBlockPair;
    // clang-format on

    // EatBlockGoalDefinition inner types define
    struct EatAndReplaceBlockPair {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::string> mEatBlock;
        ::ll::TypedStorage<8, 24, std::string> mReplaceBlock;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<4, 4, float> mTimeUntilEat;
    ::ll::TypedStorage<8, 224, ::SharedTypes::v1_21_120::ActorDefinitionTrigger> mOnEat;
    ::ll::TypedStorage<8, 40, ::SharedTypes::Legacy::ExpressionNode> mSuccessChance;
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::v1_26_40::EatBlockGoalDefinition::EatAndReplaceBlockPair>> mEatAndReplaceBlockPairs;
    // clang-format on
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_40
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
