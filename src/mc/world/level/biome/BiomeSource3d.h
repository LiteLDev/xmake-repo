#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/biome/RTree.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/level/biome/biomeproviders/BlendedMultiNoiseBiomeProvider.h"
#include "mc/world/level/biome/source/BiomeSource.h"
#include "mc/world/level/biome/source/BiomeSourceType.h"
#include "mc/world/level/block/chunk_volume/VolumeOf.h"
#include "mc/world/level/dimension/DimensionHeightRange.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/levelgen/v1/ChunkLocalNoiseCache.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class Biome;
class BiomeArea;
class BlockPos;
class BoundingBox;
class ChunkLocalNoiseCache;
class LevelChunk;
struct BiomeHashType;
struct BiomeIdType;
struct GetBiomeOptions;
// clang-format on

class BiomeSource3d : public ::BiomeSource {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 216, ::BlendedMultiNoiseBiomeProvider> mBiomeProvider;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<2, 8>                                   mDimensionHeight;
#else // @header-generator platform
    ::ll::TypedStorage<2, 4, ::DimensionHeightRange const>       mDimensionHeight;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    BiomeSource3d();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~BiomeSource3d();
#else // @header-generator platform
    virtual ::ChunkVolume::VolumeOf<::Biome> getBiomeVolumeToFill(
        short                         chunkHeight,
        ::BlockPos                    chunkMin,
        uint                          levelSeed,
        ::ChunkLocalNoiseCache const* chunkLocalNoiseCache
    ) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ChunkVolume::VolumeOf<Biome> getBiomeVolumeToFill(short, ::BlockPos, uint, ::ChunkLocalNoiseCache const*) const;
#else // @header-generator platform
    virtual void fillBiomes(::LevelChunk& levelChunk, ::ChunkLocalNoiseCache const* chunkLocalNoiseCache) const
        /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fillBiomes(::LevelChunk&, ::ChunkLocalNoiseCache const*) const;
#else // @header-generator platform
    virtual ::BiomeArea getBiomeArea(::BoundingBox const& box, uint scale) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::BiomeArea getBiomeArea(::BoundingBox const&, uint, ::GetBiomeOptions const&) const;
#else // @header-generator platform
    virtual ::BiomeArea
    getBiomeArea(::BoundingBox const& box, uint scale, ::GetBiomeOptions const& getBiomeOptionsIn) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::BiomeArea getBiomeArea(::BoundingBox const&, uint) const;
#else // @header-generator platform
    virtual bool containsOnly(int xo, int yo, int zo, int r, ::gsl::span<::BiomeIdType const> allowed) const
        /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool containsOnly(int, int, int, int, ::gsl::span<const BiomeIdType>) const;
#else // @header-generator platform
    virtual bool hasBiomeById(::BiomeIdType id) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool hasBiomeById(::BiomeIdType) const;
#else // @header-generator platform
    virtual bool hasBiomeByNameHash(::BiomeHashType hash) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool hasBiomeByNameHash(::BiomeHashType) const;
#else // @header-generator platform
    virtual ::BiomeSourceType const getType() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::BiomeSourceType const getType() const;

    virtual ::Biome const* _getBiome(::GetBiomeOptions const&) const;
    // clang-format on
#else // @header-generator platform
    virtual ::Biome const* _getBiome(::GetBiomeOptions const& getBiomeOptions) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // destructor thunk
#else // @header-generator platform
    // member functions
#endif // @header-generator platform
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI BiomeSource3d(::BlendedMultiNoiseBiomeProvider biomeProvider, ::DimensionHeightRange dimensionHeight);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::BlendedMultiNoiseBiomeProvider biomeProvider, ::DimensionHeightRange dimensionHeight);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ChunkVolume::VolumeOf<Biome>
    $getBiomeVolumeToFill(short, ::BlockPos, uint, ::ChunkLocalNoiseCache const*) const;
#else // @header-generator platform
    MCAPI ::ChunkVolume::VolumeOf<::Biome> $getBiomeVolumeToFill(
        short                         chunkHeight,
        ::BlockPos                    chunkMin,
        uint                          levelSeed,
        ::ChunkLocalNoiseCache const* chunkLocalNoiseCache
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $fillBiomes(::LevelChunk&, ::ChunkLocalNoiseCache const*) const;
#else // @header-generator platform
    MCAPI void $fillBiomes(::LevelChunk& levelChunk, ::ChunkLocalNoiseCache const* chunkLocalNoiseCache) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BiomeArea $getBiomeArea(::BoundingBox const&, uint, ::GetBiomeOptions const&) const;
#else // @header-generator platform
    MCFOLD ::BiomeArea $getBiomeArea(::BoundingBox const& box, uint scale) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BiomeArea $getBiomeArea(::BoundingBox const&, uint) const;
#else // @header-generator platform
    MCAPI ::BiomeArea
    $getBiomeArea(::BoundingBox const& box, uint scale, ::GetBiomeOptions const& getBiomeOptionsIn) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $containsOnly(int, int, int, int, ::gsl::span<const BiomeIdType>) const;
#else // @header-generator platform
    MCAPI bool $containsOnly(int xo, int yo, int zo, int r, ::gsl::span<::BiomeIdType const> allowed) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $hasBiomeById(::BiomeIdType) const;
#else // @header-generator platform
    MCAPI bool $hasBiomeById(::BiomeIdType id) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $hasBiomeByNameHash(::BiomeHashType) const;
#else // @header-generator platform
    MCAPI bool $hasBiomeByNameHash(::BiomeHashType hash) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BiomeSourceType const $getType() const;
#else // @header-generator platform
    MCFOLD ::BiomeSourceType const $getType() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Biome const* $_getBiome(::GetBiomeOptions const&) const;
    // NOLINTEND
#else // @header-generator platform
    MCAPI ::Biome const* $_getBiome(::GetBiomeOptions const& getBiomeOptions) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};
