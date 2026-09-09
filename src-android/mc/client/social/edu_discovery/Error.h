#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/social/edu_discovery/ErrorType.h"

namespace EDUDiscovery {

struct Error {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::EDUDiscovery::ErrorType> type;
    ::ll::TypedStorage<4, 4, int>                       code;
    ::ll::TypedStorage<8, 24, std::string>              reason;
    // NOLINTEND

public:
    // prevent constructor by default
    Error();
};

} // namespace EDUDiscovery
