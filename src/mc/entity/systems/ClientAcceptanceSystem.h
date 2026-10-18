#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class EntitySystems;
struct EntitySystemTickingMode;
// clang-format on

namespace ClientAcceptanceSystem {
// functions
// NOLINTBEGIN
MCAPI void registerSystems(::EntitySystems& systems, ::EntitySystemTickingMode const& mode);
// NOLINTEND

} // namespace ClientAcceptanceSystem
#endif // @header-generator platform
