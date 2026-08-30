#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
