#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/social/edu_discovery/Error.h"
#include "mc/client/social/edu_discovery/ServerDetails.h"

namespace EDUDiscovery {

struct ListServersResponse {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, std::optional<EDUDiscovery::Error>>                      error;
    ::ll::TypedStorage<8, 32, std::optional<std::vector<EDUDiscovery::ServerDetails>>> servers;
    ::ll::TypedStorage<1, 1, bool>                                                     hasMorePages;
    ::ll::TypedStorage<4, 4, int>                                                      totalPages;
    // NOLINTEND
};

} // namespace EDUDiscovery
