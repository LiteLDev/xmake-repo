#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/MultidimensionalArray.h"
#include "mc/world/level/levelgen/v1/BeardKernel.h"
#include "mc/world/level/levelgen/v1/OverworldGenerator.h"

// auto generated forward declare list
// clang-format off
class Aquifer;
class Biome;
class BiomeArea;
class BiomeSource;
class Block;
class BlockPos;
class BlockSource;
class BlockVolume;
class ChunkLocalNoiseCache;
class ChunkPos;
class Dimension;
class LevelChunk;
class PerlinNoise;
class PerlinSimplexNoise;
class Random;
class XoroshiroPositionalRandomFactory;
struct BiomeHeight;
// clang-format on

class OverworldGenerator2d : public ::OverworldGenerator {
public:
    // OverworldGenerator2d inner types define
    using NoiseBuffer = ::Util::MultidimensionalArray<float, 5, 5, 41>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<PerlinNoise>>        minLimitPerlinNoise;
    ::ll::TypedStorage<8, 8, std::unique_ptr<PerlinNoise>>        maxLimitPerlinNoise;
    ::ll::TypedStorage<8, 8, std::unique_ptr<PerlinNoise>>        mainPerlinNoise;
    ::ll::TypedStorage<8, 8, std::unique_ptr<PerlinSimplexNoise>> surfaceNoise;
    ::ll::TypedStorage<8, 8, std::unique_ptr<PerlinNoise>>        scaleNoise;
    ::ll::TypedStorage<8, 8, std::unique_ptr<PerlinNoise>>        depthNoise;
    ::ll::TypedStorage<8, 8, std::unique_ptr<PerlinNoise>>        forestNoise;
    ::ll::TypedStorage<8, 8, std::unique_ptr<PerlinSimplexNoise>> mMaterialAdjNoise;
    ::ll::UntypedStorage<1, 8>                                    mBeardKernel;
    ::ll::TypedStorage<8, 8, std::unique_ptr<BiomeSource>>        mBiomeSource;
    // NOLINTEND

public:
    // prevent constructor by default
    OverworldGenerator2d();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~OverworldGenerator2d();

    virtual ::BiomeSource const& getBiomeSource() const;

    virtual ::BlockPos findSpawnPosition() const;

    virtual void decorateWorldGenPostProcess(::Biome const&, ::LevelChunk&, ::BlockSource&, ::Random&) const;

    virtual ::Util::MultidimensionalArray<float, 5, 5, 41> generateDensityCellsForChunk(::ChunkPos const&) const;

    virtual int getLevelGenHeight() const;

    virtual std::optional<XoroshiroPositionalRandomFactory> getXoroshiroPositionalRandomFactory() const;

    virtual ::PerlinSimplexNoise const& getSurfaceNoise();

    virtual std::unique_ptr<PerlinSimplexNoise> const& getMaterialAdjNoise() const;

    virtual void _prepareHeights(::BlockVolume&, ::ChunkPos const&, ::ChunkLocalNoiseCache const&, ::Aquifer*, std::function<void (const BlockPos&, const Block&, int)>&&, bool, std::vector<short>*);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI OverworldGenerator2d(::Dimension&, uint, bool, ::Biome const*);

    MCNAPI ::Util::MultidimensionalArray<float, 5, 5, 41> _generateDensityCellsForChunk(::ChunkPos const&) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Dimension&, uint, bool, ::Biome const*);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::BiomeSource const& $getBiomeSource() const;

    MCNAPI ::BlockPos $findSpawnPosition() const;

    MCNAPI void $decorateWorldGenPostProcess(::Biome const&, ::LevelChunk&, ::BlockSource&, ::Random&) const;

    MCNAPI ::Util::MultidimensionalArray<float, 5, 5, 41> $generateDensityCellsForChunk(::ChunkPos const&) const;

    MCNAPI int $getLevelGenHeight() const;

    MCNAPI std::optional<XoroshiroPositionalRandomFactory> $getXoroshiroPositionalRandomFactory() const;

    MCNAPI ::PerlinSimplexNoise const& $getSurfaceNoise();

    MCNAPI std::unique_ptr<PerlinSimplexNoise> const& $getMaterialAdjNoise() const;

    MCNAPI void $_prepareHeights(
        ::BlockVolume&,
        ::ChunkPos const&,
        ::ChunkLocalNoiseCache const&,
        ::Aquifer*,
        std::function<void(const BlockPos&, const Block&, int)>&&,
        bool,
        std::vector<short>*
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
