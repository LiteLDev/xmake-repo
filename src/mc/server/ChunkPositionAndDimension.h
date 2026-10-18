#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/ChunkPos.h"
#include "mc/world/level/dimension/DimensionType.h"

struct ChunkPositionAndDimension {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ChunkPos>      mPos;
    ::ll::TypedStorage<4, 4, ::DimensionType> mType;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    ChunkPositionAndDimension& operator=(ChunkPositionAndDimension const&);
    ChunkPositionAndDimension(ChunkPositionAndDimension const&);
    ChunkPositionAndDimension();
#else // @header-generator platform
#endif // @header-generator platform
};
