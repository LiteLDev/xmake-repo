#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace FoodUtility {
// functions
// NOLINTBEGIN
MCNAPI float getFoodSaturationFromString(::std::string const& string);
// NOLINTEND

} // namespace FoodUtility
#endif // @header-generator platform
