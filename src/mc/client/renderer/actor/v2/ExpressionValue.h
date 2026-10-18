#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class ExpressionNode;
class RenderParams;
// clang-format on

struct ExpressionValue {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ExpressionNode const*> mExpression;
    ::ll::TypedStorage<8, 8, ::RenderParams*>         mRenderParams;
    ::ll::TypedStorage<8, 8, uint*>                   mOutput;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
class ExpressionNode;
class RenderParams;
// clang-format on

struct ExpressionValue {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ExpressionNode const*> mExpression;
    ::ll::TypedStorage<8, 8, ::RenderParams*>         mRenderParams;
    ::ll::TypedStorage<8, 8, uint*>                   mOutput;
    // NOLINTEND
};
#else // @header-generator platform
struct ExpressionValue {};
#endif // @header-generator platform
#endif // @header-generator platform
