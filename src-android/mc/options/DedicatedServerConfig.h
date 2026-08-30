#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct DedicatedServerConfig {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                               enabled;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1>>> refreshAfterSeconds;
    // NOLINTEND
};
