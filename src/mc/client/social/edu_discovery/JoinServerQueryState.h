#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/social/edu_discovery/Error.h"
#include "mc/client/social/edu_discovery/JoinStatus.h"
#include "mc/client/social/edu_discovery/ServerDetails.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace EDUDiscovery {

#if defined(LL_PLAT_A) // @header-generator platform
struct JoinServerQueryState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::EDUDiscovery::JoinStatus>                   status;
    ::ll::TypedStorage<8, 40, std::optional<EDUDiscovery::Error>>          error;
    ::ll::TypedStorage<8, 144, std::optional<EDUDiscovery::ServerDetails>> server;
    // NOLINTEND
};
#else // @header-generator platform
struct JoinServerQueryState {};
#endif // @header-generator platform

} // namespace EDUDiscovery
