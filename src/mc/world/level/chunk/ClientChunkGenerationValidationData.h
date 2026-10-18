#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ChunkPos;
class ChunkSource;
// clang-format on

struct ClientChunkGenerationValidationData {
public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _captureChunkData(std::map<ChunkPos, std::vector<std::string>>&, ::ChunkSource&);

    MCNAPI void captureClientChunkData(::ChunkSource&);

    MCNAPI void captureServerChunkData(::ChunkSource&);
#else // @header-generator platform
    MCAPI void
    _captureChunkData(::std::map<::ChunkPos, ::std::vector<::std::string>>& data, ::ChunkSource& chunkSource);
#endif // @header-generator platform
    // NOLINTEND
};
