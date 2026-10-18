#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::Legacy {

struct ExpressionNode {
public:
    // ExpressionNode inner types declare
    // clang-format off
    struct StringRepresentation;
    // clang-format on

    // ExpressionNode inner types define
    struct StringRepresentation {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 24, std::string> mValue;
        ::ll::TypedStorage<2, 2, short>        mMolangVersion;
#else // @header-generator platform
        ::ll::TypedStorage<8, 32, ::std::string> mValue;
        ::ll::TypedStorage<2, 2, short>          mMolangVersion;
#endif // @header-generator platform
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 40, std::variant<SharedTypes::Legacy::ExpressionNode::StringRepresentation, float>> mExpression;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<8, 48, ::std::variant<::SharedTypes::Legacy::ExpressionNode::StringRepresentation, float>>
        mExpression;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    ExpressionNode();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit ExpressionNode(float const);
#else // @header-generator platform
    MCAPI ExpressionNode(::std::string string, short molangVersion);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ExpressionNode(std::string const, short);

    MCNAPI ~ExpressionNode();
#else // @header-generator platform
    MCAPI ~ExpressionNode();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
#else // @header-generator platform
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(float const);

    MCNAPI void* $ctor(std::string const, short);
#else // @header-generator platform
    MCAPI void* $ctor(::std::string string, short molangVersion);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCFOLD void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::Legacy
