#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/v2/JigsawSectionDataKey.h"

namespace br::worldgen {

struct JigsawPieceState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::br::worldgen::JigsawSectionDataKey> mPieceKey;
    ::ll::TypedStorage<8, 8, ulong>                                mSpaceKey;
    ::ll::TypedStorage<4, 4, int>                                  mDepth;
    // NOLINTEND
};

} // namespace br::worldgen
