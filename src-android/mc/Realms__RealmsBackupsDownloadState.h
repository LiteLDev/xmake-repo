#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Realms {

enum class RealmsBackupsDownloadState : uchar {
    Idle         = 0,
    CheckingDisk = 1,
    InProgress   = 2,
    Error        = 3,
    Success      = 4,
};

}
