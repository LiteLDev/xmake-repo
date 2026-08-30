#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class LocalServerStartupState : int {
    NotStarted = 0,
    Starting   = 1,
    Started    = 2,
};
