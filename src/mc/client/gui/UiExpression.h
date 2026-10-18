#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/ExprToken.h"

// auto generated forward declare list
// clang-format off
class UIPropertyBag;
namespace Json { class Value; }
// clang-format on

class UiExpression {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<ExprToken>> mTokens;
    ::ll::TypedStorage<1, 1, bool>                    mIsStatic;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void addToken(::ExprToken);

    MCNAPI bool empty() const;

    MCNAPI ::Json::Value evaluate(::UIPropertyBag*) const;

    MCNAPI ulong forEachPropertyName(std::function<void(const std::string&)>) const;

    MCNAPI ulong forEachPropertyToken(std::function<void(ExprToken&)>);

    MCNAPI bool isStatic() const;

    MCNAPI ~UiExpression();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
class ExprToken;
class UIPropertyBag;
namespace Json { class Value; }
// clang-format on

class UiExpression {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::ExprToken>> mTokens;
    ::ll::TypedStorage<1, 1, bool>                        mIsStatic;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Json::Value evaluate(::UIPropertyBag* bag) const;

    MCAPI uint64 forEachPropertyName(::std::function<void(::std::string const&)> callback) const;

    MCAPI uint64 forEachPropertyToken(::std::function<void(::ExprToken&)> callback);

    MCAPI ~UiExpression();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
class UiExpression {};
#endif // @header-generator platform
#endif // @header-generator platform
