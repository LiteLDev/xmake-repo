#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/util/MolangQueryFunctionReturnType.h"

// auto generated forward declare list
// clang-format off
class ExpressionNode;
class RenderParams;
struct MolangScriptArg;
// clang-format on

struct MolangQueryFunctionPtr {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
#else // @header-generator platform
#endif // @header-generator platform
    ::ll::TypedStorage<8, 8, ::MolangQueryFunctionReturnType> mReturnType;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::function<const MolangScriptArg&(RenderParams&, const std::vector<ExpressionNode>&)> const*> mQueryFunctionPtr;
    ::ll::TypedStorage<8, 40, ::HashedString> mName;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<
        8,
        8,
        ::std::function<::MolangScriptArg const&(::RenderParams&, ::std::vector<::ExpressionNode> const&)> const*>
                                              mQueryFunctionPtr;
    ::ll::TypedStorage<8, 48, ::HashedString> mName;
#endif // @header-generator platform
    // NOLINTEND
};
