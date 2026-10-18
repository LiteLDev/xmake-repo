#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace PlayerReportingSignal {

#if defined(LL_PLAT_A) // @header-generator platform
struct StringData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mKey;
    ::ll::TypedStorage<8, 24, std::string> mValue;
    // NOLINTEND
};
#else // @header-generator platform
struct StringData {};
#endif // @header-generator platform

} // namespace PlayerReportingSignal
