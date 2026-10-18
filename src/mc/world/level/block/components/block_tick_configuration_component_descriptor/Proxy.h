#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace BlockTickConfigurationComponentDescriptor {

struct Proxy {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 8, std::array<int, 2>> mDelayIntervalRange;
    ::ll::TypedStorage<1, 1, bool>               mLooping;
#else // @header-generator platform
    ::ll::TypedStorage<4, 8, ::std::array<int, 2>> mDelayIntervalRange;
    ::ll::TypedStorage<1, 1, bool>                 mLooping;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace BlockTickConfigurationComponentDescriptor
