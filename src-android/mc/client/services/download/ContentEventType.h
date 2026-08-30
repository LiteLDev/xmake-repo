#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ContentEventType : int {
    DownloadStarted       = 0,
    DownloadResumed       = 1,
    DownloadCanceled      = 2,
    DownloadCompleted     = 3,
    DownloadErrorOccurred = 4,
    DownloadFailed        = 5,
    ImportStarted         = 6,
    ImportCompleted       = 7,
};
