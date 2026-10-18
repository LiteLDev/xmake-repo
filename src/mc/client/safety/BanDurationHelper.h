#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
struct BanDuration;
// clang-format on

class BanDurationHelper {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::BanDuration calculateBanDurationFromBanExpirationString(std::string const&);

    MCNAPI static std::string getBanReasonLookupString(std::string const&);
    // NOLINTEND
};
#else // @header-generator platform
class BanDurationHelper {};
#endif // @header-generator platform
