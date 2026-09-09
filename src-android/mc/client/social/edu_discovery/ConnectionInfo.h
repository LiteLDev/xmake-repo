#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/TransportLayer.h"

namespace EDUDiscovery {

struct ConnectionInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::TransportLayer>            transportType;
    ::ll::TypedStorage<8, 32, std::optional<std::string>> networkId;
    ::ll::TypedStorage<8, 32, std::optional<std::string>> port;
    // NOLINTEND
};

} // namespace EDUDiscovery
