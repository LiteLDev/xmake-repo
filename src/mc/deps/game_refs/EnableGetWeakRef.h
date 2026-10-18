#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0>
#if defined(LL_PLAT_A) // @header-generator platform
class EnableGetWeakRef {};
#else // @header-generator platform
class EnableGetWeakRef {
public:
};
#endif // @header-generator platform
