#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace PlayerReportingSignal {

#if defined(LL_PLAT_A) // @header-generator platform
struct JsonData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mKey;
    ::ll::UntypedStorage<8, 16>            mValue;
    // NOLINTEND
};
#else // @header-generator platform
struct JsonData {};
#endif // @header-generator platform

} // namespace PlayerReportingSignal
