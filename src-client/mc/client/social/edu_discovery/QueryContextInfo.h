#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/social/edu_discovery/Dialog.h"
#include "mc/client/social/edu_discovery/Error.h"

namespace EDUDiscovery {

struct QueryContextInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::string_view>                     name;
    ::ll::TypedStorage<4, 4, int>                                   startTimeMS;
    ::ll::TypedStorage<8, 40, std::optional<EDUDiscovery::Error>>   error;
    ::ll::TypedStorage<8, 160, std::optional<EDUDiscovery::Dialog>> dialog;
    ::ll::TypedStorage<4, 8, std::optional<int>>                    retryAfterSeconds;
    // NOLINTEND
};

} // namespace EDUDiscovery
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
