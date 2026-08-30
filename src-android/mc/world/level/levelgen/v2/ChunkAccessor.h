#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/v2/heightmap_projection/Type.h"

// auto generated forward declare list
// clang-format off
class BiomeSource;
class ChunkPos;
class Dimension;
namespace br::worldgen { struct BlockVolumeCacheItem; }
// clang-format on

namespace br::worldgen {

class ChunkAccessor {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 8, ::gsl::not_null<Dimension*>> mDimension;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<const BiomeSource*>> mBiomeSource;
    ::ll::TypedStorage<8, 8, std::unique_ptr<std::unordered_map<ChunkPos, br::worldgen::BlockVolumeCacheItem>>> mBlockCache;
    ::ll::TypedStorage<8, 8, std::unique_ptr<std::unordered_map<ChunkPos, std::unique_ptr<std::vector<short>>>>> mChunkHeightCache;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    ChunkAccessor();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Dimension& dimension();

    MCNAPI int getFirstFreeHeight(int, int, ::br::worldgen::HeightmapProjection::Type) const;
    // NOLINTEND
};

} // namespace br::worldgen
