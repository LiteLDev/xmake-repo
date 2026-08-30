#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ItemInstallState : int {
    NotInstalled    = 0,
    Installed       = 1,
    UpdateAvailable = 2,
    _Unknown        = 3,
};
