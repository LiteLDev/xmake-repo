#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/options/DiscoveryEnvironment.h"

namespace Bedrock::Services {

struct DiscoveryConfig {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::DiscoveryEnvironment> environment;
    ::ll::TypedStorage<4, 4, int>                    maxRetryAttempts;
    // NOLINTEND
};

} // namespace Bedrock::Services
