#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class EntitySystems;
// clang-format on

namespace DolphinBoostSystem {
// functions
// NOLINTBEGIN
MCAPI void registerSystems(::EntitySystems& systemRegistry, bool isClientSide);
// NOLINTEND

} // namespace DolphinBoostSystem
#endif // @header-generator platform
