#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
// clang-format on

namespace DecayingBlocksUtil {
// functions
// NOLINTBEGIN
MCAPI void runDecay(::BlockSource& region, ::BlockPos const& pos, int range);
// NOLINTEND

} // namespace DecayingBlocksUtil
#endif // @header-generator platform
