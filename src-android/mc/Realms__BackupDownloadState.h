#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Realms {

enum class BackupDownloadState : uchar {
    Idle         = 0,
    Initializing = 1,
    Downloading  = 2,
    Importing    = 3,
    Done         = 4,
    Failed       = 5,
    Canceled     = 6,
};

}
