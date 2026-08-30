#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SkinHash {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ulong>     geoLength;
    ::ll::TypedStorage<8, 64, ulong[8]> shaData;
    // NOLINTEND
};
