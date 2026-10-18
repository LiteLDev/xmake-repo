#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/ExpressionNode.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace SharedTypes::v1_20_80 {

struct ColorExpr {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<8, 192, ::std::array<::SharedTypes::Legacy::ExpressionNode, 4>> mColorExpr;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_80
