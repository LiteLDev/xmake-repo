#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockDisplayNameComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> mDisplayName;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string> mDisplayName;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    BlockDisplayNameComponent& operator=(BlockDisplayNameComponent const&);
    BlockDisplayNameComponent(BlockDisplayNameComponent const&);
    BlockDisplayNameComponent();
#else // @header-generator platform
#endif // @header-generator platform
};
