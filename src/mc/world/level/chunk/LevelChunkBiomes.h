#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/small_vector_base.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/platform/threading/SharedLock.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/platform/threading/UniqueLock.h"
#include "mc/world/level/biome/BiomeIdType.h"
#include "mc/world/level/block/chunk_volume/VolumeOf.h"
#include "mc/world/level/chunk/SubChunkStorage.h"
#include "mc/world/level/chunk/sub_chunk_storage_unit/PruneType.h"

// auto generated forward declare list
// clang-format off
class Biome;
#if defined(LL_PLAT_A) // @header-generator platform
class BiomeRegistry;
class ChunkBlockPos;
class IDataOutput;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class LevelChunkBiomes {
public:
    // LevelChunkBiomes inner types declare
    // clang-format off
    struct MemoryEstimateData;
    // clang-format on

    // LevelChunkBiomes inner types define
    struct MemoryEstimateData {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 8, ulong>  mBiomeData3DSize;
        ::ll::TypedStorage<8, 8, ulong>  mMinBiomePaletteSize;
#else // @header-generator platform
        ::ll::TypedStorage<8, 8, uint64> mBiomeData3DSize;
        ::ll::TypedStorage<8, 8, uint64> mMinBiomePaletteSize;
#endif // @header-generator platform
        ::ll::TypedStorage<8, 8, double> mAverageBiomePaletteSize;
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 8, ulong>  mMaxBiomePaletteSize;
#else // @header-generator platform
        ::ll::TypedStorage<8, 8, uint64> mMaxBiomePaletteSize;
#endif // @header-generator platform
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<2, 512>                                                    m2DBiomes;
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<SubChunkStorage<Biome>>>> mBiomeSubchunks;
    ::ll::UntypedStorage<1, 140>                                                    mBiomesMutex;
    ::ll::TypedStorage<2, 2, ushort>                                                m3dBiomeStackSize;
#else // @header-generator platform
    ::ll::TypedStorage<2, 512, ::std::array<::BiomeIdType, 256>>                            m2DBiomes;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::SubChunkStorage<::Biome>>>> mBiomeSubchunks;
    ::ll::TypedStorage<8, 8, ::std::shared_mutex>                                           mBiomesMutex;
    ::ll::TypedStorage<2, 2, ushort>                                                        m3dBiomeStackSize;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    LevelChunkBiomes& operator=(LevelChunkBiomes const&);
    LevelChunkBiomes();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void fetchBiomes(::Bedrock::small_vector_base<gsl::not_null<const Biome*>>&) const;
#else // @header-generator platform
    MCAPI void fetchBiomes(::Bedrock::small_vector_base<::gsl::not_null<::Biome const*>>& output) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void makeUniformBiomes(::Biome const&);
#else // @header-generator platform
    MCAPI void makeUniformBiomes(::Biome const& biome);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void pruneBiomesSubChunk3D(ushort, ::SubChunkStorageUnit::PruneType);
#else // @header-generator platform
    MCAPI void pruneBiomesSubChunk3D(ushort subChunkIndex, ::SubChunkStorageUnit::PruneType pruneType);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setAllBiomesFrom2D(std::array<BiomeIdType, 256>&, ::Biome const&, ::BiomeRegistry const&, ushort);

    MCNAPI void setBiomeFromVolume(::ChunkVolume::VolumeOf<Biome> const&, ushort);

    MCNAPI void setBiomeInSubChunk3D(
        ::Biome const&,
        ushort,
        ushort,
        ushort,
        ::Bedrock::Threading::UniqueLock<std::shared_timed_mutex> const&,
        bool
#else // @header-generator platform
    MCAPI void rebuildMissingBiomeSubChunks(
        ushort                                                       numSubChunksToCreate,
        ushort                                                       dimensionSubchunkHeight,
        ::Bedrock::Threading::UniqueLock<::std::shared_mutex> const& lock
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~LevelChunkBiomes();
    // NOLINTEND
#else // @header-generator platform
    MCAPI void setBiomeFromVolume(::ChunkVolume::VolumeOf<::Biome> const& volume, ushort dimensionNumSubChunks);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void setBiomeSubChunk3D(
        ::Biome const& biome,
        ushort         subChunkIndex,
        ushort         dimensionSubchunkHeight,
        bool           allowRebuildingAdditionalSubChunk
    );

#ifdef LL_PLAT_C
    MCAPI void setBiomes(::std::vector<::std::unique_ptr<::SubChunkStorage<::Biome>>> biomes, ushort biomeStackSize);
#endif
#endif // @header-generator platform
    // NOLINTEND
};
