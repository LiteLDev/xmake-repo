#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::rendering {

#if defined(LL_PLAT_A) // @header-generator platform
struct TextureStatistics {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>  mWasEverUsed;
    ::ll::TypedStorage<8, 8, ulong> mCpuUsedStorageInBytes;
    // NOLINTEND
};
#else // @header-generator platform
struct TextureStatistics {};
#endif // @header-generator platform

} // namespace dragon::rendering
