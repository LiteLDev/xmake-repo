#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LowMemoryWatcher {
public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void leakMemoryOnPurposeMB(ulong);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI static void leakMemoryOnPurposeMB(uint64 memory);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool& mPlatformToldUsLowMemory();

    MCNAPI static std::list<std::vector<char>>& mPleaseLeakMemory();

    MCNAPI static std::chrono::
        time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>&
        mTimeToResetWarning();
#else // @header-generator platform
    MCNAPI static ::std::list<::std::vector<char>>& mPleaseLeakMemory();
#endif // @header-generator platform
    // NOLINTEND
};
