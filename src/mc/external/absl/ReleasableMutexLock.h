#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace absl {

class ReleasableMutexLock {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk732d6a;
    // NOLINTEND

public:
    // prevent constructor by default
    ReleasableMutexLock& operator=(ReleasableMutexLock const&);
    ReleasableMutexLock(ReleasableMutexLock const&);
    ReleasableMutexLock();
};

} // namespace absl
#endif // @header-generator platform
