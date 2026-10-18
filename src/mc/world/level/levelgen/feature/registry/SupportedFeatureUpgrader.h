#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/sem_ver/SemVersion.h"

struct SupportedFeatureUpgrader {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 24> mFromVersion;
    ::ll::UntypedStorage<8, 24> mToVersion;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::SemVersion> mFromVersion;
    ::ll::TypedStorage<8, 24, ::SemVersion> mToVersion;
#endif // @header-generator platform
    // NOLINTEND
};
