#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/BoundingBox.h"

namespace br {

struct ChunkBoundingBox {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 24, ::BoundingBox> box;
    // NOLINTEND

public:
    // prevent constructor by default
    ChunkBoundingBox& operator=(ChunkBoundingBox const&);
};

} // namespace br
