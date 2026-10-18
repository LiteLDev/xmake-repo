#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace DebugUtils {
// functions
// NOLINTBEGIN
MCNAPI bool
handleAssert_va(char const* msgFormat, char const* arg, int line, char const* file, char const* function, char* args);

MCNAPI void setThreadName(::std::string const& name);
// NOLINTEND

} // namespace DebugUtils
#endif // @header-generator platform
