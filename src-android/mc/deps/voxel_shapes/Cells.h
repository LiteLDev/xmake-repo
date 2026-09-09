#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/small_vector.h"
#include "mc/platform/brstd/dynamic_bitset.h"

namespace VoxelShapes {

class Cells {
public:
    // Cells inner types define
    using size_type = uint;

    using BitsetContainer = ::Bedrock::small_vector<uchar, 48>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, schar> mXSize;
    ::ll::TypedStorage<1, 1, schar> mYSize;
    ::ll::TypedStorage<1, 1, schar> mZSize;
    ::ll::UntypedStorage<8, 72>     mStorage;
    // NOLINTEND
};

} // namespace VoxelShapes
