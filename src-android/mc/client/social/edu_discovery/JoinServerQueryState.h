#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/social/edu_discovery/Error.h"
#include "mc/client/social/edu_discovery/JoinStatus.h"
#include "mc/client/social/edu_discovery/ServerDetails.h"

namespace EDUDiscovery {

struct JoinServerQueryState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::EDUDiscovery::JoinStatus>                   status;
    ::ll::TypedStorage<8, 40, std::optional<EDUDiscovery::Error>>          error;
    ::ll::TypedStorage<8, 144, std::optional<EDUDiscovery::ServerDetails>> server;
    // NOLINTEND
};

} // namespace EDUDiscovery
