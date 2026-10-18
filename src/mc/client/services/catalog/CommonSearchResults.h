#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
struct CommonSearchResults {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mTotalCount;
    ::ll::TypedStorage<4, 4, int> mFilteredCount;
    ::ll::TypedStorage<4, 4, int> mUnfilteredDocumentCount;
    // NOLINTEND
};
#else // @header-generator platform
struct CommonSearchResults {};
#endif // @header-generator platform
