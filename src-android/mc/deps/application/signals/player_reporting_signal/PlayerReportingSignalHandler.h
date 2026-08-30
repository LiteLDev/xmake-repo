#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace PlayerReportingSignal {

class PlayerReportingSignalHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::map<std::string, std::string>> mInfo;
    ::ll::UntypedStorage<8, 24>                                   mJsonInfo;
    ::ll::TypedStorage<1, 1, bool>                                mIsTestHandler;
    // NOLINTEND
};

} // namespace PlayerReportingSignal
