#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ContainerComponent;
// clang-format on

namespace ContainerUtility {
// functions
// NOLINTBEGIN
MCAPI ::ContainerComponent* getNotNoneTypeContainerComponentFromActor(::Actor* actor);
// NOLINTEND

} // namespace ContainerUtility
#endif // @header-generator platform
