#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ScreenContext;
// clang-format on

namespace ScreenContextHelper {
// functions
// NOLINTBEGIN
MCAPI ::ScreenContext makeScreenContextAlphaOverride(::ScreenContext& screenContext, float a);
// NOLINTEND

} // namespace ScreenContextHelper
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
