#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct TickingSystemWithInfo;
// clang-format on

namespace ServerAnimationSystem {
// functions
// NOLINTBEGIN
MCAPI ::TickingSystemWithInfo createInputDependentActorServerAnimationSystem();

MCAPI ::TickingSystemWithInfo createInputIndependentActorServerAnimationSystem();
// NOLINTEND

} // namespace ServerAnimationSystem
#endif // @header-generator platform
