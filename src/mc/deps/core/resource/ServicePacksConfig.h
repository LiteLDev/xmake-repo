#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/resource/ServicePack.h"
#else // @header-generator platform
#endif // @header-generator platform

struct ServicePacksConfig {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<ServicePack>> mServicePacks;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 24> mUnke9f9d8;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ServicePacksConfig& operator=(ServicePacksConfig const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ServicePacksConfig(ServicePacksConfig const&);
#endif // @header-generator platform
    ServicePacksConfig();
};
