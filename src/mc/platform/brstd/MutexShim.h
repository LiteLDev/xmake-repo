#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/platform/brstd/move_only_function.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace brstd::detail {

struct MutexShim {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 64> lock;
    ::ll::UntypedStorage<8, 64> unlock;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 64> mUnk459236;
    ::ll::UntypedStorage<8, 64> mUnk39b827;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    MutexShim& operator=(MutexShim const&);
    MutexShim(MutexShim const&);
    MutexShim();
#endif // @header-generator platform
};

} // namespace brstd::detail
