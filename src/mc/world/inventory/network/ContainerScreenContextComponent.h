#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/network/ContainerScreenContext.h"

struct ContainerScreenContextComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::ContainerScreenContext> mContext;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    ContainerScreenContextComponent& operator=(ContainerScreenContextComponent const&);
    ContainerScreenContextComponent(ContainerScreenContextComponent const&);
#else // @header-generator platform
#endif // @header-generator platform
};
