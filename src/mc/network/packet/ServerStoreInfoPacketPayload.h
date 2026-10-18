#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/config/gathering/server_configuration/ClientStoreEntryPointConfiguration.h"

struct ServerStoreInfoPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 56, std::optional<ServerConfiguration::ClientStoreEntryPointConfiguration>> mClientStoreEntryPointConfiguration;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<8, 72, ::std::optional<::ServerConfiguration::ClientStoreEntryPointConfiguration>>
        mClientStoreEntryPointConfiguration;
#endif // @header-generator platform
    // NOLINTEND
};
