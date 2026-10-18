#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
enum class RoutePrerequisiteState : int {
    AllConditionsMet_NoFurtherActionsNeeded = 0,
    ConditionsNotMet_NewScreenPushed        = 1,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class RoutePrerequisiteState : int {
    AllConditionsMetNoFurtherActionsNeeded = 0,
    ConditionsNotMetNewScreenPushed        = 1,
};
#else // @header-generator platform
enum class RoutePrerequisiteState : int {};
#endif // @header-generator platform
#endif // @header-generator platform

}
