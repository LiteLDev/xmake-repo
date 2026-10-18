#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class IConstBlockSource;
// clang-format on

namespace BoatFrictionUtility {
// functions
// NOLINTBEGIN
MCNAPI float getFrictionBasedOnCollision(::IConstBlockSource const& region, ::BlockPos const& pos);
// NOLINTEND

} // namespace BoatFrictionUtility
#endif // @header-generator platform
