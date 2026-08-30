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
        ::ll::TypedStorage<8, 24, std::string> mValue;
        ::ll::TypedStorage<2, 2, short>        mMolangVersion;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 40, std::variant<SharedTypes::Legacy::ExpressionNode::StringRepresentation, float>> mExpression;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ExpressionNode(float const);

    MCNAPI ExpressionNode(std::string const, short);

    MCNAPI ~ExpressionNode();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(float const);

    MCNAPI void* $ctor(std::string const, short);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::Legacy
