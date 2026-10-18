#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class FaceSortingMetaDataType : int {
    Invalid                 = 0,
    Index16Bits             = 1,
    Index32Bits             = 2,
    Index16BitsWithCentroid = 3,
    Index32BitsWithCentroid = 4,
};
#else // @header-generator platform
enum class FaceSortingMetaDataType : int {};
#endif // @header-generator platform
