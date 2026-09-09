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
};

} // namespace br::worldgen
