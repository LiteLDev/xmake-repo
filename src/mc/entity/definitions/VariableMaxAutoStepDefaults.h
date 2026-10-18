#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace VariableMaxAutoStepDefaults {
// static variables
// NOLINTBEGIN
MCAPI float const& BASE_VALUE();

MCAPI float const& CONTROLLED_VALUE();

MCAPI float const& JUMP_PREVENTED_VALUE();
// NOLINTEND

} // namespace VariableMaxAutoStepDefaults
#endif // @header-generator platform
