#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/content/PackSelectResult.h"
#include "mc/resources/ContentTierIncompatibleReason.h"

struct AddDependenciesResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::PackSelectResult>              mPackSelectResult;
    ::ll::TypedStorage<4, 4, ::ContentTierIncompatibleReason> mReason;
    // NOLINTEND
};
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
