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
