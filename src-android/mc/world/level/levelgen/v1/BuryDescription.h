#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/BoundingBox.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
// clang-format on

class BuryDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 24, ::BoundingBox> mCachedPieceBounds;
    // NOLINTEND

public:
    // prevent constructor by default
    BuryDescription& operator=(BuryDescription const&);
    BuryDescription();
};
