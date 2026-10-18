#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RepositoryLoading {

struct BuildTaskDataOptions {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, bool> mCreateNewRepositorySources;
#else // @header-generator platform
    ::ll::UntypedStorage<1, 1> mUnk453f64;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    BuildTaskDataOptions& operator=(BuildTaskDataOptions const&);
    BuildTaskDataOptions(BuildTaskDataOptions const&);
    BuildTaskDataOptions();
#endif // @header-generator platform
};

} // namespace RepositoryLoading
