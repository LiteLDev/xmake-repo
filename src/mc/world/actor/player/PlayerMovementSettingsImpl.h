#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace PlayerMovementSettingsImpl {
// functions
// NOLINTBEGIN
MCAPI bool _isServerAuthBlockBreakingEnabled();

#ifdef LL_PLAT_C
MCAPI bool _isStrictDismount();

MCAPI bool _isStrictEntityInteractions();

MCAPI bool _isStrictMovement();
#endif
// NOLINTEND

} // namespace PlayerMovementSettingsImpl
#endif // @header-generator platform
