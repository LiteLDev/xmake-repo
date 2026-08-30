#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class FaceSortingMetaDataType : int {
    Invalid                 = 0,
    Index16Bits             = 1,
    Index32Bits             = 2,
    Index16BitsWithCentroid = 3,
    Index32BitsWithCentroid = 4,
};
