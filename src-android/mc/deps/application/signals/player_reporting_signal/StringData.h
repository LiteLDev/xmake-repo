#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace PlayerReportingSignal {

struct StringData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mKey;
    ::ll::TypedStorage<8, 24, std::string> mValue;
    // NOLINTEND
};

} // namespace PlayerReportingSignal
