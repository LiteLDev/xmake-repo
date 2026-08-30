#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/molang/ExpressionNode.h"

// auto generated forward declare list
// clang-format off
struct PropertyValues;
// clang-format on

struct DefaultPropertyValues {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<std::variant<int, ExpressionNode>>>   mIntValueOrExpressions;
    ::ll::TypedStorage<8, 24, std::vector<std::variant<float, ExpressionNode>>> mFloatValueOrExpressions;
    ::ll::TypedStorage<8, 24, std::vector<std::variant<bool, ExpressionNode>>>  mBoolValueOrExpressions;
    ::ll::TypedStorage<8, 24, std::vector<std::variant<ulong, ExpressionNode>>> mEnumIndexValueOrExpressions;
    // NOLINTEND
};
