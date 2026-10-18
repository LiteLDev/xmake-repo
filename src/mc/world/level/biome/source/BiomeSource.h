#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/source/BiomeSourceType.h"
#include "mc/world/level/block/chunk_volume/VolumeOf.h"
#include "mc/world/level/newbiome/OperationGraphResult.h"

// auto generated forward declare list
// clang-format off
class Biome;
class BiomeArea;
class BlockPos;
#if defined(LL_PLAT_A) // @header-generator platform
class BlockPosIterator;
#else // @header-generator platform
#endif // @header-generator platform
class BoundingBox;
class ChunkLocalNoiseCache;
class LevelChunk;
struct BiomeHashType;
struct BiomeIdType;
struct GetBiomeOptions;
// clang-format on

class BiomeSource {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~BiomeSource();
#else // @header-generator platform
    virtual ~BiomeSource() = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ChunkVolume::VolumeOf<Biome> getBiomeVolumeToFill(short, ::BlockPos, uint, ::ChunkLocalNoiseCache const*) const;
#else // @header-generator platform
    virtual ::ChunkVolume::VolumeOf<::Biome> getBiomeVolumeToFill(
        short                         chunkHeight,
        ::BlockPos                    chunkMin,
        uint                          levelSeed,
        ::ChunkLocalNoiseCache const* chunkLocalNoiseCache
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<const OperationGraphResult<const Biome*>> getBiomeAreaToFill(::LevelChunk const&) const;
#else // @header-generator platform
    virtual ::std::optional<::OperationGraphResult<::Biome const*> const>
    getBiomeAreaToFill(::LevelChunk const& levelChunk) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fillBiomes(::LevelChunk&, ::ChunkLocalNoiseCache const*) const = 0;
#else // @header-generator platform
    virtual void fillBiomes(::LevelChunk& levelChunk, ::ChunkLocalNoiseCache const* chunkLocalNoiseCache) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::BiomeArea getBiomeArea(::BoundingBox const&, uint, ::GetBiomeOptions const&) const = 0;
#else // @header-generator platform
    virtual ::BiomeArea getBiomeArea(::BoundingBox const& area, uint scale) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::BiomeArea getBiomeArea(::BoundingBox const&, uint) const = 0;
#else // @header-generator platform
#ifdef LL_PLAT_S
    virtual ::BiomeArea
    getBiomeArea(::BoundingBox const& area, uint scale, ::GetBiomeOptions const& getBiomeOptions) const = 0;
#else // LL_PLAT_C
    virtual ::BiomeArea
    getBiomeArea(::BoundingBox const& area, uint scale, ::GetBiomeOptions const& getBiomeOptionsIn) const = 0;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool containsOnly(int, int, int, int, ::gsl::span<const BiomeIdType>) const = 0;
#else // @header-generator platform
    virtual bool containsOnly(int xo, int yo, int zo, int r, ::gsl::span<::BiomeIdType const> allowed) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool hasBiomeById(::BiomeIdType) const = 0;
#else // @header-generator platform
    virtual bool hasBiomeById(::BiomeIdType id) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool hasBiomeByNameHash(::BiomeHashType) const = 0;
#else // @header-generator platform
    virtual bool hasBiomeByNameHash(::BiomeHashType hash) const = 0;
#endif // @header-generator platform

    virtual ::BiomeSourceType const getType() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Biome const* _getBiome(::GetBiomeOptions const&) const = 0;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Biome const* getBiome(::BlockPos const&) const;

    MCNAPI ::Biome const* getBiome(::GetBiomeOptions const&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::BlockPosIterator getAreaIterator(::BoundingBox const&, uint);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual ::Biome const* _getBiome(::GetBiomeOptions const& getBiomeOptions) const = 0;
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
    MCNAPI std::optional<const OperationGraphResult<const Biome*>> $getBiomeAreaToFill(::LevelChunk const&) const;
#else // @header-generator platform
    MCFOLD ::std::optional<::OperationGraphResult<::Biome const*> const>
    $getBiomeAreaToFill(::LevelChunk const& levelChunk) const;


#endif // @header-generator platform
    // NOLINTEND
};
