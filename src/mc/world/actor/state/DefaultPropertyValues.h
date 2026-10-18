#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/molang/ExpressionNode.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
struct PropertyValues;
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
struct DefaultPropertyValues {
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
public:
    // DefaultPropertyValues inner types define
    using BoolOrMolang = ::std::variant<bool, ::ExpressionNode>;

    using FloatOrMolang = ::std::variant<float, ::ExpressionNode>;

    using IntOrMolang = ::std::variant<int, ::ExpressionNode>;

    using SizeTOrMolang = ::std::variant<uint64, ::ExpressionNode>;

#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<std::variant<int, ExpressionNode>>>   mIntValueOrExpressions;
    ::ll::TypedStorage<8, 24, std::vector<std::variant<float, ExpressionNode>>> mFloatValueOrExpressions;
    ::ll::TypedStorage<8, 24, std::vector<std::variant<bool, ExpressionNode>>>  mBoolValueOrExpressions;
    ::ll::TypedStorage<8, 24, std::vector<std::variant<ulong, ExpressionNode>>> mEnumIndexValueOrExpressions;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::std::variant<int, ::ExpressionNode>>>    mIntValueOrExpressions;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::variant<float, ::ExpressionNode>>>  mFloatValueOrExpressions;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::variant<bool, ::ExpressionNode>>>   mBoolValueOrExpressions;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::variant<uint64, ::ExpressionNode>>> mEnumIndexValueOrExpressions;
#endif // @header-generator platform
    // NOLINTEND
};
