#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace PlayerReportingSignal {

struct GetReportJsonFunctionData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<1, 48> mGetInfoFunction;
    ::ll::UntypedStorage<1, 16> isTest;
#else // @header-generator platform
    ::ll::UntypedStorage<1, 64> mUnk9356ab;
    ::ll::UntypedStorage<1, 8>  mUnk6758be;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    GetReportJsonFunctionData& operator=(GetReportJsonFunctionData const&);
    GetReportJsonFunctionData(GetReportJsonFunctionData const&);
    GetReportJsonFunctionData();
#endif // @header-generator platform
};

} // namespace PlayerReportingSignal
