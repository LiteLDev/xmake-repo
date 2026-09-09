#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/social/edu_discovery/JoinCode.h"

namespace EDUDiscovery {

struct JoinRequest {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>              productId;
    ::ll::TypedStorage<8, 32, ::EDUDiscovery::JoinCode> code;
    // NOLINTEND
};

} // namespace EDUDiscovery
