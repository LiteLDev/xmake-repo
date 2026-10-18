#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class UiExpression;
namespace Json { class Value; }
// clang-format on

class UIEval {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::UiExpression const
    evalExpression(std::string const&, std::vector<Json::Value*> const&, ::Json::Value const&);

    MCNAPI static ::Json::Value const&
    evalVariable(std::string const&, std::vector<Json::Value*> const&, ::Json::Value const&);
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
class UiExpression;
namespace Json { class Value; }
// clang-format on

class UIEval {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::UiExpression const evalExpression(
        ::std::string const&                 expressionString,
        ::std::vector<::Json::Value*> const& variablesStack,
        ::Json::Value const&                 localStack
    );

    MCAPI static ::Json::Value const& evalVariable(
        ::std::string const&                 valueStr,
        ::std::vector<::Json::Value*> const& variablesStack,
        ::Json::Value const&                 localStack
    );
    // NOLINTEND
};
#else // @header-generator platform
class UIEval {};
#endif // @header-generator platform
#endif // @header-generator platform
