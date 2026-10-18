#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/util/molang/ExpressionNode.h"

struct AttachablesResources {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<ExpressionNode>> mParentSetupExpressionNodes;
    // NOLINTEND

public:
    // prevent constructor by default
    AttachablesResources(AttachablesResources const&);
    AttachablesResources();
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
class ExpressionNode;
// clang-format on

struct AttachablesResources {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::ExpressionNode>> mParentSetupExpressionNodes;
    // NOLINTEND
};
#else // @header-generator platform
struct AttachablesResources {};
#endif // @header-generator platform
#endif // @header-generator platform
