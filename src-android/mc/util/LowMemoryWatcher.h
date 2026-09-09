#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LowMemoryWatcher {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void leakMemoryOnPurposeMB(ulong);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static bool& mPlatformToldUsLowMemory();

    MCNAPI static std::list<std::vector<char>>& mPleaseLeakMemory();

    MCNAPI static std::chrono::
        time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>&
        mTimeToResetWarning();
    // NOLINTEND
};
