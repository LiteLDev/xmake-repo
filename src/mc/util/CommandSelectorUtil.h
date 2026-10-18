#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CommandSelectorUtil {
// functions
// NOLINTBEGIN
MCNAPI bool isValidSelector(::std::string_view selector);
// NOLINTEND

} // namespace CommandSelectorUtil
#endif // @header-generator platform
