#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ImportState : int {
    NotImported = 0,
    Importing   = 1,
    Imported    = 2,
    Failed      = 3,
};
