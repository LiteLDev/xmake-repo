#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct DownloadStoragePendingInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, uchar> numTemp;
    ::ll::TypedStorage<8, 8, ulong> totalBytes;
    // NOLINTEND
};
