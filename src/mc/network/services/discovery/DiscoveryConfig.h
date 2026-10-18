#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/options/DiscoveryEnvironment.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace Bedrock::Services {

struct DiscoveryConfig {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, ::DiscoveryEnvironment> environment;
    ::ll::TypedStorage<4, 4, int>                    maxRetryAttempts;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4> mUnk7faaa3;
    ::ll::UntypedStorage<4, 4> mUnk4680d8;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    DiscoveryConfig& operator=(DiscoveryConfig const&);
    DiscoveryConfig(DiscoveryConfig const&);
    DiscoveryConfig();
#endif // @header-generator platform
};

} // namespace Bedrock::Services
