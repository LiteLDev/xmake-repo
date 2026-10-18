#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/utility/ServiceReference.h"

template <typename T>
class ServiceLocator {
public:
    static MCAPI ServiceReference<T> get();
};
#endif // @header-generator platform
