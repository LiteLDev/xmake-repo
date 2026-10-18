#if defined(LL_PLAT_S) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class IContentAccessibilityProvider;
// clang-format on

namespace ServerContentKeyProvider {
// functions
// NOLINTBEGIN
MCNAPI ::std::unique_ptr<::IContentAccessibilityProvider> create();
// NOLINTEND

} // namespace ServerContentKeyProvider
#endif // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
