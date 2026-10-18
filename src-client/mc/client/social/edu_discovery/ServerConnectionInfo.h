#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/ConnectionType.h"

namespace EDUDiscovery {

struct ServerConnectionInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>             netherNetId;
    ::ll::TypedStorage<8, 24, std::string>             playerMessagingId;
    ::ll::TypedStorage<2, 2, ::Social::ConnectionType> connectionType;
    // NOLINTEND
};

} // namespace EDUDiscovery
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
