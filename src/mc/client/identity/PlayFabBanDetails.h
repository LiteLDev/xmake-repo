#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

#if defined(LL_PLAT_A) // @header-generator platform
struct PlayFabBanDetails {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>         banReason;
    ::ll::TypedStorage<8, 16, std::optional<long>> banExpiration;
    // NOLINTEND
};
#else // @header-generator platform
struct PlayFabBanDetails {};
#endif // @header-generator platform

} // namespace Social
