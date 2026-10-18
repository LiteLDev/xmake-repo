#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace EDUDiscovery {

struct ServerInvalidationDetails {
public:
    // ServerInvalidationDetails inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum class Source : uchar {
        Host           = 0,
        RequestNewCode = 1,
        Heartbeat      = 2,
        User           = 3,
    };
#else // @header-generator platform
    enum class Reason : uchar {};
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    enum class Source : uchar {};
#endif // @header-generator platform
};

} // namespace EDUDiscovery
