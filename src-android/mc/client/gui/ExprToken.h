#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/ExprTokenType.h"
#include "mc/client/gui/LiteralType.h"
#include "mc/client/gui/OperatorType.h"

// auto generated forward declare list
// clang-format off
class UiExpression;
namespace Json { class Value; }
// clang-format on

class ExprToken {
public:
    // ExprToken inner types define
    enum class StringOption : int {
        EvaluateAsExpression = 0,
        KeepAsString         = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::OperatorType>  mOperatorType;
    ::ll::TypedStorage<1, 1, ::LiteralType>   mLiteralType;
    ::ll::TypedStorage<1, 1, ::ExprTokenType> mTokenType;
    ::ll::UntypedStorage<8, 40>               mValue;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _parseToken(std::string_view);

    MCNAPI std::string_view asString() const;

    MCNAPI ::ExprToken& operator=(::ExprToken&&);

    MCNAPI ~ExprToken();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::ExprToken createExpressionToken(::UiExpression);

    MCNAPI static ::ExprToken createIntToken(int);

    MCNAPI static ::ExprToken createStringToken(std::string_view, ::ExprToken::StringOption);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
