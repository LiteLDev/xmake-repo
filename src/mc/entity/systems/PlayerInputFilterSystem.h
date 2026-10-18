#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct TickingSystemWithInfo;
// clang-format on

namespace PlayerInputFilterSystem {
// functions
// NOLINTBEGIN
MCAPI ::TickingSystemWithInfo create(bool isClientSide);
// NOLINTEND

} // namespace PlayerInputFilterSystem
#endif // @header-generator platform
