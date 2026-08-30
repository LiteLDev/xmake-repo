#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/small_vector_base.h"
#include "mc/platform/threading/SharedLock.h"
#include "mc/platform/threading/UniqueLock.h"
#include "mc/world/level/biome/BiomeIdType.h"
#include "mc/world/level/block/chunk_volume/VolumeOf.h"
#include "mc/world/level/chunk/SubChunkStorage.h"
#include "mc/world/level/chunk/sub_chunk_storage_unit/PruneType.h"

// auto generated forward declare list
// clang-format off
class Biome;
class BiomeRegistry;
class ChunkBlockPos;
class IDataOutput;
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
        ::ll::TypedStorage<8, 8, ulong>  mBiomeData3DSize;
        ::ll::TypedStorage<8, 8, ulong>  mMinBiomePaletteSize;
        ::ll::TypedStorage<8, 8, double> mAverageBiomePaletteSize;
        ::ll::TypedStorage<8, 8, ulong>  mMaxBiomePaletteSize;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<2, 512>                                                    m2DBiomes;
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<SubChunkStorage<Biome>>>> mBiomeSubchunks;
    ::ll::UntypedStorage<1, 140>                                                    mBiomesMutex;
    ::ll::TypedStorage<2, 2, ushort>                                                m3dBiomeStackSize;
    // NOLINTEND

public:
    // prevent constructor by default
    LevelChunkBiomes& operator=(LevelChunkBiomes const&);
    LevelChunkBiomes();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void fetchBiomes(::Bedrock::small_vector_base<gsl::not_null<const Biome*>>&) const;

    MCNAPI void makeUniformBiomes(::Biome const&);

    MCNAPI void pruneBiomesSubChunk3D(ushort, ::SubChunkStorageUnit::PruneType);

    MCNAPI void setAllBiomesFrom2D(std::array<BiomeIdType, 256>&, ::Biome const&, ::BiomeRegistry const&, ushort);

    MCNAPI void setBiomeFromVolume(::ChunkVolume::VolumeOf<Biome> const&, ushort);

    MCNAPI void setBiomeInSubChunk3D(
        ::Biome const&,
        ushort,
        ushort,
        ushort,
        ::Bedrock::Threading::UniqueLock<std::shared_timed_mutex> const&,
        bool
    );

    MCNAPI ~LevelChunkBiomes();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
