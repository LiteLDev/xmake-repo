#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace ControlScheme {
// functions
// NOLINTBEGIN
MCNAPI void bindControlSchemeType(::cereal::ReflectionCtx& ctx);
// NOLINTEND

} // namespace ControlScheme
#endif // @header-generator platform
