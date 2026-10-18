#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
class ExpressionNode;
class RenderParams;
struct MolangScriptArg;
// clang-format on

#endif // @header-generator platform
namespace MolangQuery {

#if defined(LL_PLAT_A) // @header-generator platform
struct IsRidingAnyEntityOfType {};
#else // @header-generator platform
struct IsRidingAnyEntityOfType {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::MolangScriptArg const&
    evaluateQuery(::RenderParams& renderParams, ::std::vector<::ExpressionNode> const& arguments);
    // NOLINTEND
};
#endif // @header-generator platform

} // namespace MolangQuery
