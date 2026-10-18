#if defined(LL_PLAT_S) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct XTaskQueueObject;
// clang-format on

namespace ProcessGlobals {
// static variables
// NOLINTBEGIN
MCNAPI ::std::atomic<::XTaskQueueObject*>& g_defaultProcessQueue();

MCNAPI ::std::atomic<::XTaskQueueObject*>& g_processQueue();
// NOLINTEND

} // namespace ProcessGlobals
#endif // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
