#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace PlayerReportingSignal {

struct ReportFunctionData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mReportFunction;
    ::ll::UntypedStorage<8, 48> mResultCallbackFunction;
    ::ll::UntypedStorage<1, 16> isTest;
    // NOLINTEND
};

} // namespace PlayerReportingSignal
