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
class BlockPosIterator;
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
    // clang-format off
    virtual ~BiomeSource();

    virtual ::ChunkVolume::VolumeOf<Biome> getBiomeVolumeToFill(short, ::BlockPos, uint, ::ChunkLocalNoiseCache const*) const;

    virtual std::optional<const OperationGraphResult<const Biome*>> getBiomeAreaToFill(::LevelChunk const&) const;

    virtual void fillBiomes(::LevelChunk&, ::ChunkLocalNoiseCache const*) const = 0;

    virtual ::BiomeArea getBiomeArea(::BoundingBox const&, uint, ::GetBiomeOptions const&) const = 0;

    virtual ::BiomeArea getBiomeArea(::BoundingBox const&, uint) const = 0;

    virtual bool containsOnly(int, int, int, int, ::gsl::span<const BiomeIdType>) const = 0;

    virtual bool hasBiomeById(::BiomeIdType) const = 0;

    virtual bool hasBiomeByNameHash(::BiomeHashType) const = 0;

    virtual ::BiomeSourceType const getType() const = 0;

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
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::ChunkVolume::VolumeOf<Biome>
    $getBiomeVolumeToFill(short, ::BlockPos, uint, ::ChunkLocalNoiseCache const*) const;

    MCNAPI std::optional<const OperationGraphResult<const Biome*>> $getBiomeAreaToFill(::LevelChunk const&) const;
    // NOLINTEND
};
