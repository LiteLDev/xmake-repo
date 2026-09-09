#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ProcessSortOrder : int {
    DownloadPriority_High = 1,
    DownloadPriority_Low  = 2,
    ImportPriority        = 3,
    Unknown               = 100,
};
