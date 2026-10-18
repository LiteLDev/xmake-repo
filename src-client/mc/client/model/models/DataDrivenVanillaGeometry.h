#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace DataDrivenVanillaGeometry {
// static variables
// NOLINTBEGIN
MCAPI ::std::vector<::std::string> const& GeometryModels();
// NOLINTEND

} // namespace DataDrivenVanillaGeometry
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
