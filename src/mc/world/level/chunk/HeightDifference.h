#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/world/level/ChunkBlockPos.h"

struct HeightDifference {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 4, ::ChunkBlockPos const> before;
    ::ll::TypedStorage<2, 4, ::ChunkBlockPos const> after;
    // NOLINTEND

public:
    // prevent constructor by default
    HeightDifference();
};
#else // @header-generator platform
struct HeightDifference {};
#endif // @header-generator platform
