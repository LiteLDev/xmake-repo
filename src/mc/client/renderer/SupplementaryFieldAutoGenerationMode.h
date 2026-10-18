#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class SupplementaryFieldAutoGenerationMode : ushort {
    None               = 0,
    NormalsAndTangents = 1,
    UVBias             = 2,
};
#else // @header-generator platform
enum class SupplementaryFieldAutoGenerationMode : ushort {};
#endif // @header-generator platform
