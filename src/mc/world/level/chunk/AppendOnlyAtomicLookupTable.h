#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/platform/threading/SpinLock.h"

template <typename T0, int T1>
class AppendOnlyAtomicLookupTable {
public:
    alignas(8) double mArray[T1]{};
    std::atomic_size_t mSize;
    SpinLock           mAppendLock;
};
#endif // @header-generator platform
