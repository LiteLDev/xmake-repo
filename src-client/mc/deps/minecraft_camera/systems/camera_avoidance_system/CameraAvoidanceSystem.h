#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class EntityRegistry;
struct CameraActivationEvent;
struct TickingSystemWithInfo;
// clang-format on

namespace CameraAvoidanceSystem {
// functions
// NOLINTBEGIN
MCAPI ::TickingSystemWithInfo createSystem();

MCAPI void startAvoidance(::EntityRegistry&, ::CameraActivationEvent const& event);
// NOLINTEND

} // namespace CameraAvoidanceSystem
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
