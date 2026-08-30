#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Realms {

enum class RealmsRegionSettingsState : int {
    Idle       = 0,
    Fetching   = 1,
    FetchError = 2,
};

}
