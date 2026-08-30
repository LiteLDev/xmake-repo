#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

enum class RoutePrerequisiteState : int {
    AllConditionsMet_NoFurtherActionsNeeded = 0,
    ConditionsNotMet_NewScreenPushed        = 1,
};

}
