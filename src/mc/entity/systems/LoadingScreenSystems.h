#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class EntitySystems;
namespace LoadingScreenSystems { class IClientFactory; }
// clang-format on

namespace LoadingScreenSystems {
// functions
// NOLINTBEGIN
#ifdef LL_PLAT_C
MCAPI void registerClientSystems(::EntitySystems& entitySystems, ::LoadingScreenSystems::IClientFactory const& factory);
#endif

MCAPI void registerServerSystems(::EntitySystems& entitySystems);
// NOLINTEND

} // namespace LoadingScreenSystems
#endif // @header-generator platform
