#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace VoxelShapes {

struct SerializableCells {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, uchar>               mXSize;
    ::ll::TypedStorage<1, 1, uchar>               mYSize;
    ::ll::TypedStorage<1, 1, uchar>               mZSize;
    ::ll::TypedStorage<8, 24, std::vector<uchar>> mStorage;
    // NOLINTEND
};

} // namespace VoxelShapes
