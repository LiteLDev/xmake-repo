#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ClipboardFeatureFlags : int {
    None              = 0,
    ClipboardSet      = 1,
    ClipboardGet      = 2,
    ClipboardAsyncGet = 4,
};
