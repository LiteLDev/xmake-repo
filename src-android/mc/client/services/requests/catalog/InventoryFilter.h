#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace catalog {

enum class InventoryFilter : uchar {
    None            = 0,
    InstalledOnly   = 1,
    UninstalledOnly = 2,
};

}
