#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/ExpressionNode.h"
#include "mc/deps/shared_types/legacy/FilterSubject.h"

namespace SharedTypes::v1_26_20::BlockDefinition {

struct DeprecatedBaseTrigger {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                           mType;
    ::ll::TypedStorage<8, 40, ::SharedTypes::Legacy::ExpressionNode> mCondition;
    ::ll::TypedStorage<2, 2, ::SharedTypes::Legacy::FilterSubject>   mTarget;
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_20::BlockDefinition
