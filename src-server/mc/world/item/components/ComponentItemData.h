#if defined(LL_PLAT_S) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace ComponentItemData {
// functions
// NOLINTBEGIN
MCAPI void bindTypes(::cereal::ReflectionCtx& ctx);
// NOLINTEND

} // namespace ComponentItemData
#endif // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
