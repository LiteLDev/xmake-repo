#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace PlayerReportingSignal {

struct ReportFunctionData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 48> mReportFunction;
    ::ll::UntypedStorage<8, 48> mResultCallbackFunction;
    ::ll::UntypedStorage<1, 16> isTest;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 64> mUnk9e209c;
    ::ll::UntypedStorage<8, 64> mUnk6b63f9;
    ::ll::UntypedStorage<1, 1>  mUnkbae8df;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    ReportFunctionData& operator=(ReportFunctionData const&);
    ReportFunctionData(ReportFunctionData const&);
    ReportFunctionData();
#endif // @header-generator platform
};

} // namespace PlayerReportingSignal
