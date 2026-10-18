#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/containers/FullContainerName.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

// auto generated forward declare list
// clang-format off
struct FullContainerName;
// clang-format on
#endif // @header-generator platform

struct ContainerRegistryCleanupPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<FullContainerName>> mRemovedContainers;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::FullContainerName>> mRemovedContainers;
#endif // @header-generator platform
    // NOLINTEND
};
