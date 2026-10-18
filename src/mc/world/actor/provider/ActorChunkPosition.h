#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ChunkPos;
class EntityContext;
// clang-format on

namespace ActorChunkPosition {
// functions
// NOLINTBEGIN
MCAPI ::ChunkPos const& getChunkPosition(::EntityContext const& provider);

MCAPI void setChunkPosition(::EntityContext& provider, ::ChunkPos const& chunkPosition);
// NOLINTEND

} // namespace ActorChunkPosition
#endif // @header-generator platform
