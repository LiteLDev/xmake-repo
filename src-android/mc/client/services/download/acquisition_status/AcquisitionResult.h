#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace AcquisitionStatus {

enum class AcquisitionResult : int {
    DownloadStarted  = 0,
    DownloadSuccess  = 1,
    DownloadFailure  = 2,
    DownloadCanceled = 3,
    DownloadResumed  = 4,
    ImportStarted    = 5,
    ImportComplete   = 6,
    ImportFailed     = 7,
    COUNT            = 8,
};

}
