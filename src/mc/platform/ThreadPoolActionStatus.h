#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OS {

#if defined(LL_PLAT_C) // @header-generator platform
struct ThreadPoolActionStatus {};
#else // @header-generator platform
struct ThreadPoolActionStatus {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void Complete() = 0;

    virtual void MayRunLong() = 0;
    // NOLINTEND
};
#endif // @header-generator platform

} // namespace OS
#endif // @header-generator platform
