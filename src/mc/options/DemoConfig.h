#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct DemoConfig {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>       worldId;
    ::ll::TypedStorage<4, 8, std::optional<int>> limitedWorldWidth;
    ::ll::TypedStorage<4, 8, std::optional<int>> limitedWorldDepth;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnk62cbe8;
    ::ll::UntypedStorage<4, 8>  mUnk2851fc;
    ::ll::UntypedStorage<4, 8>  mUnke51b1a;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    DemoConfig& operator=(DemoConfig const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    DemoConfig(DemoConfig const&);
#endif // @header-generator platform
    DemoConfig();
};
