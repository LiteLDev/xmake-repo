#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/DefinitionTrigger.h"
#include "mc/deps/shared_types/legacy/ExpressionNode.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::Legacy { struct EventResponseBase; }
// clang-format on

namespace SharedTypes::v1_26_20::BlockDefinition {

struct DeprecatedDefinitionEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                                                                 mProbability;
    ::ll::TypedStorage<8, 40, ::SharedTypes::Legacy::ExpressionNode>                                mCondition;
    ::ll::TypedStorage<4, 4, int>                                                                   mType;
    ::ll::TypedStorage<8, 72, ::SharedTypes::Legacy::DefinitionTrigger>                             mTrigger;
    ::ll::UntypedStorage<8, 24>                                                                     mChildren;
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<SharedTypes::Legacy::EventResponseBase>>> mResponses;
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_20::BlockDefinition
