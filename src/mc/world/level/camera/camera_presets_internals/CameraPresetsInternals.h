#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CameraPresetsInternals {
// static variables
// NOLINTBEGIN
MCNAPI ::std::vector<::std::string>& ALLOWED_MC_EASE_TARGET();

MCNAPI ::std::vector<::std::string> const& VANILLA_CAMERAS();
// NOLINTEND

} // namespace CameraPresetsInternals
#endif // @header-generator platform
