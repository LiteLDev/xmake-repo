#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/small_vector.h"

// auto generated forward declare list
// clang-format off
namespace VoxelShapes { struct MergerIndexPair; }
// clang-format on

namespace VoxelShapes {

class IndexMerger {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mCoords;
    ::ll::UntypedStorage<8, 64> mIndices;
    // NOLINTEND
};

} // namespace VoxelShapes
