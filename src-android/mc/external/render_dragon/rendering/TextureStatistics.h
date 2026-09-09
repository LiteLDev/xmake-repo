#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::rendering {

struct TextureStatistics {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>  mWasEverUsed;
    ::ll::TypedStorage<8, 8, ulong> mCpuUsedStorageInBytes;
    // NOLINTEND
};

} // namespace dragon::rendering
