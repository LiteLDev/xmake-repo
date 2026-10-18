#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/sem_ver/SemVersion.h"

namespace BlockDefinitionValidate {

struct ValidateContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUpcomingCreatorFeaturesEnabled;
    ::ll::UntypedStorage<8, 24> mOriginalJsonVersion;
    // NOLINTEND
};

} // namespace BlockDefinitionValidate
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
