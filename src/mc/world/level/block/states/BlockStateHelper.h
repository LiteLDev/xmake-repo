#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
// clang-format on

namespace BlockStateHelper {
// functions
// NOLINTBEGIN
MCAPI bool isOrientationSensitiveBlock(::Block const& block);
// NOLINTEND

} // namespace BlockStateHelper
#endif // @header-generator platform
