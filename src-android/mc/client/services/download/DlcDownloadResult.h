#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class DlcDownloadResult : int {
    DownloadStarted = 0,
    Downloading     = 1,
    Completed       = 2,
    Cancelled       = 3,
    Failed          = 4,
};
