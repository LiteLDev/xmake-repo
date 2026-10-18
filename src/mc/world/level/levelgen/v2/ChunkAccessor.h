#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/world/level/ChunkPos.h"
#endif // @header-generator platform
#include "mc/world/level/levelgen/v2/heightmap_projection/Type.h"

// auto generated forward declare list
// clang-format off
class BiomeSource;
#if defined(LL_PLAT_A) // @header-generator platform
class ChunkPos;
#else // @header-generator platform
#endif // @header-generator platform
class Dimension;
namespace br::worldgen { struct BlockVolumeCacheItem; }
// clang-format on

namespace br::worldgen {

class ChunkAccessor {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 8, ::gsl::not_null<Dimension*>> mDimension;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<const BiomeSource*>> mBiomeSource;
    ::ll::TypedStorage<8, 8, std::unique_ptr<std::unordered_map<ChunkPos, br::worldgen::BlockVolumeCacheItem>>> mBlockCache;
    ::ll::TypedStorage<8, 8, std::unique_ptr<std::unordered_map<ChunkPos, std::unique_ptr<std::vector<short>>>>> mChunkHeightCache;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::Dimension*>>         mDimension;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::BiomeSource const*>> mBiomeSource;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::std::unordered_map<::ChunkPos, ::br::worldgen::BlockVolumeCacheItem>>>
        mBlockCache;
    ::ll::TypedStorage<
        8,
        8,
        ::std::unique_ptr<::std::unordered_map<
            ::ChunkPos,
            ::std::unique_ptr<::std::vector<short>, ::std::default_delete<::std::vector<short>>>>>>
        mChunkHeightCache;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ChunkAccessor();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Dimension& dimension();
#else // @header-generator platform
    MCAPI ChunkAccessor(::Dimension& dimension, ::BiomeSource const& biomeSource);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int getFirstFreeHeight(int, int, ::br::worldgen::HeightmapProjection::Type) const;
#else // @header-generator platform
    MCAPI int getFirstFreeHeight(int x, int z, ::br::worldgen::HeightmapProjection::Type heightmapProjection) const;

    MCAPI ~ChunkAccessor();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Dimension& dimension, ::BiomeSource const& biomeSource);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace br::worldgen
