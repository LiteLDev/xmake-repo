#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::platform {

struct FramePacingStatistics {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, long> mFlipCompletionTime;
    ::ll::TypedStorage<8, 8, long> mCpuFlipRequestTime;
    ::ll::TypedStorage<8, 8, long> mGpuFlipRequestTime;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnkf50a34;
    ::ll::UntypedStorage<8, 8> mUnkc42ca0;
    ::ll::UntypedStorage<8, 8> mUnkf824e0;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    FramePacingStatistics& operator=(FramePacingStatistics const&);
    FramePacingStatistics(FramePacingStatistics const&);
    FramePacingStatistics();
#endif // @header-generator platform
};

} // namespace dragon::platform
