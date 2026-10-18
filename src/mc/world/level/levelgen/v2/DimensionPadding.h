#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace br::worldgen {

struct DimensionPadding {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> mTop;
    ::ll::TypedStorage<4, 4, uint> mBottom;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit DimensionPadding(uint);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(uint);
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};

} // namespace br::worldgen
