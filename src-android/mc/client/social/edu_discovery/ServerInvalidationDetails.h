#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace EDUDiscovery {

struct ServerInvalidationDetails {
public:
    // ServerInvalidationDetails inner types define
    enum class Source : uchar {
        Host           = 0,
        RequestNewCode = 1,
        Heartbeat      = 2,
        User           = 3,
    };

    enum class Reason : uchar {
        NetworkError = 0,
        ServiceError = 1,
        StopHosting  = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::EDUDiscovery::ServerInvalidationDetails::Source> source;
    ::ll::TypedStorage<1, 1, ::EDUDiscovery::ServerInvalidationDetails::Reason> reason;
    // NOLINTEND
};

} // namespace EDUDiscovery
