#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/RTree.h"
#include "mc/world/level/biome/biomeproviders/BlendedMultiNoiseBiomeProvider.h"
#include "mc/world/level/biome/source/BiomeSource.h"
#include "mc/world/level/biome/source/BiomeSourceType.h"
#include "mc/world/level/block/chunk_volume/VolumeOf.h"
#include "mc/world/level/dimension/DimensionHeightRange.h"
#include "mc/world/level/levelgen/v1/ChunkLocalNoiseCache.h"

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
    ::ll::UntypedStorage<2, 8>                                   mDimensionHeight;
    // NOLINTEND

public:
    // prevent constructor by default
    BiomeSource3d();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~BiomeSource3d();

    virtual ::ChunkVolume::VolumeOf<Biome> getBiomeVolumeToFill(short, ::BlockPos, uint, ::ChunkLocalNoiseCache const*) const;

    virtual void fillBiomes(::LevelChunk&, ::ChunkLocalNoiseCache const*) const;

    virtual ::BiomeArea getBiomeArea(::BoundingBox const&, uint, ::GetBiomeOptions const&) const;

    virtual ::BiomeArea getBiomeArea(::BoundingBox const&, uint) const;

    virtual bool containsOnly(int, int, int, int, ::gsl::span<const BiomeIdType>) const;

    virtual bool hasBiomeById(::BiomeIdType) const;

    virtual bool hasBiomeByNameHash(::BiomeHashType) const;

    virtual ::BiomeSourceType const getType() const;

    virtual ::Biome const* _getBiome(::GetBiomeOptions const&) const;
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::ChunkVolume::VolumeOf<Biome>
    $getBiomeVolumeToFill(short, ::BlockPos, uint, ::ChunkLocalNoiseCache const*) const;

    MCNAPI void $fillBiomes(::LevelChunk&, ::ChunkLocalNoiseCache const*) const;

    MCNAPI ::BiomeArea $getBiomeArea(::BoundingBox const&, uint, ::GetBiomeOptions const&) const;

    MCNAPI ::BiomeArea $getBiomeArea(::BoundingBox const&, uint) const;

    MCNAPI bool $containsOnly(int, int, int, int, ::gsl::span<const BiomeIdType>) const;

    MCNAPI bool $hasBiomeById(::BiomeIdType) const;

    MCNAPI bool $hasBiomeByNameHash(::BiomeHashType) const;

    MCNAPI ::BiomeSourceType const $getType() const;

    MCNAPI ::Biome const* $_getBiome(::GetBiomeOptions const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
