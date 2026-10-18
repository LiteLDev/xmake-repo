#if defined(LL_PLAT_S) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ApiRefs {
// functions
// NOLINTBEGIN
MCNAPI void GlobalRelease();
// NOLINTEND

// static variables
// NOLINTBEGIN
MCNAPI ::std::atomic<uint>& g_globalApiRefs();

MCNAPI ::std::condition_variable& g_waitCv();

MCNAPI ::std::mutex& g_waitMutex();
// NOLINTEND

} // namespace ApiRefs
#endif // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
