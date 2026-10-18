#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace NetherNet::Utils {
// functions
// NOLINTBEGIN
MCNAPI ::std::string ToString(uint64 const& guid);
// NOLINTEND

} // namespace NetherNet::Utils
#endif // @header-generator platform
