#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PortPair {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, int> v4;
    ::ll::TypedStorage<4, 4, int> v6;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4> mUnked3561;
    ::ll::UntypedStorage<4, 4> mUnk2fb04f;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    PortPair& operator=(PortPair const&);
    PortPair(PortPair const&);
    PortPair();
#endif // @header-generator platform
};
