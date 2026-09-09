#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
