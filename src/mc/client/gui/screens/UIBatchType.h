#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class UIBatchType : int {
    Default    = 0,
    SharedMesh = 1,
    Images     = 2,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class UIBatchType : int {
    Default    = 0,
    SharedMesh = 1,
    Images     = 2,
};
#else // @header-generator platform
enum class UIBatchType : int {};
#endif // @header-generator platform
#endif // @header-generator platform
