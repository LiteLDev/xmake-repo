#if defined(LL_PLAT_S) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ClientSideChunkGeneration {
// static variables
// NOLINTBEGIN
MCNAPI ::std::optional<float>& ServerBuildRatioOverride();
// NOLINTEND

} // namespace ClientSideChunkGeneration
#endif // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
