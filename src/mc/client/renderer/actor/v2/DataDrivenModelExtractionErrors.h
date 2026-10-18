#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
struct DataDrivenModelExtractionErrors {
public:
    // member variables
    // NOLINTBEGIN
    bool hasSideEffects                   : 1;
    bool hasUnsupportedTempComponent      : 1;
    bool overMaxPartVisibility            : 1;
    bool invalidRenderControllerResources : 1;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct DataDrivenModelExtractionErrors {
public:
    // member variables
    // NOLINTBEGIN
    bool hasSideEffects                   : 1;
    bool hasUnsupportedTempComponent      : 1;
    bool overMaxPartVisibility            : 1;
    bool invalidRenderControllerResources : 1;
    // NOLINTEND
};
#else // @header-generator platform
struct DataDrivenModelExtractionErrors {};
#endif // @header-generator platform
#endif // @header-generator platform
