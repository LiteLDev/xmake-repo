#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/world/level/block/chunk_volume/SubVolumeViewOf.h"

#endif // @header-generator platform
namespace ChunkVolume {

#if defined(LL_PLAT_A) // @header-generator platform
template <typename T0>
class VolumeOf {};
#else // @header-generator platform
template <typename T>
class VolumeOf {
public:
    using ElementType      = T const*;
    using SubViewType      = SubVolumeViewOf<T const*>;
    using ConstSubViewType = SubVolumeViewOf<T const* const>;

    size_t                             mNumSubChunks;
    std::vector<std::vector<T const*>> mSubChunkVectors;

public:
    MCAPI void build(size_t numSubChunks, ElementType const& initValue);
};
#endif // @header-generator platform

} // namespace ChunkVolume
