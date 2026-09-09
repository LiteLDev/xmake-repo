#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/social/edu_discovery/JoinCode.h"

namespace EDUDiscovery {

struct ServerID {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::EDUDiscovery::JoinCode> joinCode;
    ::ll::TypedStorage<8, 24, std::string>              passcode;
    ::ll::TypedStorage<8, 24, std::string>              token;
    // NOLINTEND
};

} // namespace EDUDiscovery
