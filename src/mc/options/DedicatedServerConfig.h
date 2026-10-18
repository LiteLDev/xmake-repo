#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct DedicatedServerConfig {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>                                               enabled;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1>>> refreshAfterSeconds;
#else // @header-generator platform
    ::ll::UntypedStorage<1, 1> mUnk1879a1;
    ::ll::UntypedStorage<8, 8> mUnk1f73e2;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    DedicatedServerConfig& operator=(DedicatedServerConfig const&);
    DedicatedServerConfig(DedicatedServerConfig const&);
    DedicatedServerConfig();
#endif // @header-generator platform
};
