#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

struct PlayFabBanDetails {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>         banReason;
    ::ll::TypedStorage<8, 16, std::optional<long>> banExpiration;
    // NOLINTEND
};

} // namespace Social
