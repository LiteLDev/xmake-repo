#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/chunks/RenderChunkBits.h"
#include "mc/world/level/BlockPos.h"

struct AirAndSimpleBlockBits {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::BlockPos const>   mOriginPos;
    ::ll::TypedStorage<8, 736, ::RenderChunkBits> mAirBlocks;
    ::ll::TypedStorage<8, 736, ::RenderChunkBits> mSimpleBlocks;
    // NOLINTEND

public:
    // prevent constructor by default
    AirAndSimpleBlockBits();
};
#else // @header-generator platform
struct AirAndSimpleBlockBits {};
#endif // @header-generator platform
