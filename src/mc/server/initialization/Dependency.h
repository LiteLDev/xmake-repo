#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace DedicatedServerInitialization {

#if defined(LL_PLAT_C) // @header-generator platform
struct Dependency {};
#else // @header-generator platform
struct Dependency {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Dependency() = default;
    // NOLINTEND
};
#endif // @header-generator platform

} // namespace DedicatedServerInitialization
#endif // @header-generator platform
