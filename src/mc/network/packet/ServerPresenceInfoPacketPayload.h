#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/config/gathering/server_configuration/PresenceConfiguration.h"

struct ServerPresenceInfoPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, std::optional<ServerConfiguration::PresenceConfiguration>> mPresenceConfiguration;
#else // @header-generator platform
    ::ll::TypedStorage<8, 48, ::std::optional<::ServerConfiguration::PresenceConfiguration>> mPresenceConfiguration;
#endif // @header-generator platform
    // NOLINTEND
};
