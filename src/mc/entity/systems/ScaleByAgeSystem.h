#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
class EntitySystems;
// clang-format on

namespace ScaleByAgeSystem {
// functions
// NOLINTBEGIN
MCAPI void registerSystems(::EntitySystems& systemRegistry, ::BaseGameVersion const& baseGameVersion);
// NOLINTEND

} // namespace ScaleByAgeSystem
#endif // @header-generator platform
