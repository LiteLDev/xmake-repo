#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/ChunkPos.h"
#else // @header-generator platform

// auto generated forward declare list
// clang-format off
class ChunkPos;
// clang-format on
#endif // @header-generator platform

struct NetworkChunkPublisherUpdatePacketPayload {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 12, ::BlockPos>            mPosition;
    ::ll::TypedStorage<4, 4, uint>                   mRadius;
    ::ll::TypedStorage<8, 24, std::vector<ChunkPos>> mServerBuiltChunks;
#else // @header-generator platform
    ::ll::TypedStorage<4, 12, ::BlockPos>                mPosition;
    ::ll::TypedStorage<4, 4, uint>                       mRadius;
    ::ll::TypedStorage<8, 24, ::std::vector<::ChunkPos>> mServerBuiltChunks;
#endif // @header-generator platform
    // NOLINTEND
};
