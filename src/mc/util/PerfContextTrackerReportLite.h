#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PerfContextTrackerReportLite {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> mContext;
    ::ll::TypedStorage<4, 4, float>        mContextSeconds;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnk2c11f8;
    ::ll::UntypedStorage<4, 4>  mUnk5d4aad;
    // NOLINTEND

public:
    // prevent constructor by default
    PerfContextTrackerReportLite& operator=(PerfContextTrackerReportLite const&);
    PerfContextTrackerReportLite(PerfContextTrackerReportLite const&);
    PerfContextTrackerReportLite();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~PerfContextTrackerReportLite();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
