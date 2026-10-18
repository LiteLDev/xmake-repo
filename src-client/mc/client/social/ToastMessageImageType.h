#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ToastMessageImageType {
// static variables
// NOLINTBEGIN
MCNAPI ::std::string const& KeyArt();

MCNAPI ::std::string const& ResourcePackIcon();
// NOLINTEND

} // namespace ToastMessageImageType
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
