#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
