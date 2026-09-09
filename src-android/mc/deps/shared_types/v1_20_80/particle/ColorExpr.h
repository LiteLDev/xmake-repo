#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/ExpressionNode.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_20_80 {

struct ColorExpr {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 160, std::array<SharedTypes::Legacy::ExpressionNode, 4>> mColorExpr;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ColorExpr();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_80
