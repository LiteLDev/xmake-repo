#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class ChunkPos;
class ChunkSource;
class ChunkViewSource;
class LevelChunk;
class Vec3;
// clang-format on

class NetworkChunkRelighter {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _spawnLightingTask(std::shared_ptr<ChunkViewSource>, ::LevelChunk&, int);

    MCNAPI static void chunkFinalize(::LevelChunk&, ::ChunkSource&, ::BlockSource&, ::Vec3 const&);
    // NOLINTEND
};
#else // @header-generator platform
class NetworkChunkRelighter {};
#endif // @header-generator platform
