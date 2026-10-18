#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/ExprTokenType.h"
#include "mc/client/gui/LiteralType.h"
#include "mc/client/gui/OperatorType.h"

// auto generated forward declare list
// clang-format off
class UiExpression;
namespace Json { class Value; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/ExprTokenType.h"
#include "mc/client/gui/LiteralType.h"
#include "mc/client/gui/OperatorType.h"
#include "mc/client/gui/UiExpression.h"
#include "mc/deps/json/Value.h"

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
class ExprToken {
public:
    // ExprToken inner types define
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    enum class StringOption : int {
        EvaluateAsExpression = 0,
        KeepAsString         = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::OperatorType>                                 mOperatorType;
    ::ll::TypedStorage<1, 1, ::LiteralType>                                  mLiteralType;
    ::ll::TypedStorage<1, 1, ::ExprTokenType>                                mTokenType;
    ::ll::TypedStorage<8, 40, ::std::variant<::Json::Value, ::UiExpression>> mValue;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::ExprToken createExpressionToken(::UiExpression expression);

    MCAPI static ::ExprToken createIntToken(int fromInt);

    MCAPI static ::ExprToken createStringToken(::std::string_view fromStr, ::ExprToken::StringOption evalString);
    // NOLINTEND
#else // @header-generator platform
    enum class StringOption : int {};
#endif // @header-generator platform
#endif // @header-generator platform
};
