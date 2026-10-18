#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ResourceLoadManagerOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkc1dcf2;
    ::ll::UntypedStorage<8, 8>  mUnk333f53;
    ::ll::UntypedStorage<8, 24> mUnkee3e79;
    // NOLINTEND

public:
    // prevent constructor by default
    ResourceLoadManagerOptions& operator=(ResourceLoadManagerOptions const&);
    ResourceLoadManagerOptions(ResourceLoadManagerOptions const&);
    ResourceLoadManagerOptions();
};
#endif // @header-generator platform
