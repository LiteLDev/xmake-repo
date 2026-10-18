#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
// clang-format on

namespace PoplarLeavesUtils {
// functions
// NOLINTBEGIN
MCNAPI bool canPlayAmbientSound(::BlockSource const& region, ::BlockPos const& pos);
// NOLINTEND

} // namespace PoplarLeavesUtils
#endif // @header-generator platform
