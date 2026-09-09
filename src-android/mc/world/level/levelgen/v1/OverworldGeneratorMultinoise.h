#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/MultidimensionalArray.h"
#include "mc/world/level/DividedPos2d.h"
#include "mc/world/level/levelgen/synth/AquiferNoises.h"
#include "mc/world/level/levelgen/synth/CavifierNoises.h"
#include "mc/world/level/levelgen/synth/LegacyBlendedNoise.h"
#include "mc/world/level/levelgen/synth/OverworldNoises3d.h"
#include "mc/world/level/levelgen/synth/PerlinSimplexNoise.h"
#include "mc/world/level/levelgen/v1/ChunkLocalNoiseCache.h"
#include "mc/world/level/levelgen/v1/DepthBasedBlockSupplier.h"
#include "mc/world/level/levelgen/v1/NoodleCavifierNoises.h"
#include "mc/world/level/levelgen/v1/OreVeinifierNoises.h"
#include "mc/world/level/levelgen/v1/OverworldGenerator.h"

// auto generated forward declare list
// clang-format off
class Aquifer;
class BaseGameVersion;
class Biome;
class BiomeRegistry;
class BiomeSource;
class Block;
class BlockPos;
class BlockSource;
class BlockVolume;
class Cavifier;
class ChunkBlender;
class ChunkBlenderFactory;
class ChunkLocalNoiseCache;
class ChunkPos;
class ChunkSource;
class Dimension;
class DimensionHeightRange;
class Experiments;
class LevelChunk;
class LevelSeed64;
class NoodleCavifier;
class OreVeinifier;
class PerlinSimplexNoise;
class Random;
class SurfaceLevelCache;
class XoroshiroPositionalRandomFactory;
struct TerrainInfo;
// clang-format on

class OverworldGeneratorMultinoise : public ::OverworldGenerator {
public:
    // OverworldGeneratorMultinoise inner types declare
    // clang-format off
    struct Noises;
    struct BlockGenerationResult;
    // clang-format on

    // OverworldGeneratorMultinoise inner types define
    struct Noises {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 120, ::LegacyBlendedNoise const>     mTerrainNoise;
        ::ll::TypedStorage<8, 896, ::CavifierNoises const>         mCavifierNoises;
        ::ll::TypedStorage<8, 248, ::AquiferNoises const>          mAquiferNoises;
        ::ll::TypedStorage<8, 224, ::NoodleCavifierNoises const>   mNoodleCavifierNoises;
        ::ll::TypedStorage<8, 248, ::OreVeinifierNoises const>     mOreVeinifierNoises;
        ::ll::TypedStorage<8, 40, ::PerlinSimplexNoise const>      mBlendNoise;
        ::ll::TypedStorage<8, 40, ::PerlinSimplexNoise const>      mSurfaceNoise;
        ::ll::TypedStorage<8, 856, ::OverworldNoises3d const>      mCommonNoise;
        ::ll::TypedStorage<8, 32, ::DepthBasedBlockSupplier const> mDeepslateSupplier;
        // NOLINTEND

    public:
        // prevent constructor by default
        Noises& operator=(Noises const&);
        Noises(Noises const&);
        Noises();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~Noises();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct BlockGenerationResult {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::Block const*> block;
        ::ll::TypedStorage<1, 1, bool const>     shouldTickUpdate;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 2712, std::optional<OverworldGeneratorMultinoise::Noises>> mNoises;
    ::ll::TypedStorage<8, 8, std::unique_ptr<BiomeSource>>                           mBiomeSource;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Cavifier>>                              mCavifier;
    ::ll::TypedStorage<8, 8, std::unique_ptr<PerlinSimplexNoise>>                    mMaterialAdjNoise;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ChunkBlender>>                          mFixedChunkBlender;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ChunkBlenderFactory>>                   mChunkBlenderFactory;
    // NOLINTEND

public:
    // prevent constructor by default
    OverworldGeneratorMultinoise();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~OverworldGeneratorMultinoise();

    virtual bool chunkPosNeedsBlending(::ChunkPos const&);

    virtual void _clearBlendingCache();

    virtual ::BiomeSource const& getBiomeSource() const;

    virtual ::BlockPos findSpawnPosition() const;

    virtual std::optional<short> getPreliminarySurfaceLevel(::DividedPos2d<4>) const;

    virtual void propagateCombinedChunkSource(::ChunkSource*);

    virtual void decorateWorldGenPostProcess(::Biome const&, ::LevelChunk&, ::BlockSource&, ::Random&) const;

    virtual ::Util::MultidimensionalArray<float, 5, 5, 41> generateDensityCellsForChunk(::ChunkPos const&) const;

    virtual int getLevelGenHeight() const;

    virtual std::optional<XoroshiroPositionalRandomFactory> getXoroshiroPositionalRandomFactory() const;

    virtual std::unique_ptr<Aquifer> tryMakeAquifer(::ChunkPos const&, ::SurfaceLevelCache const&, short, short, short) const;

    virtual ::ChunkLocalNoiseCache createNoiseCache(::ChunkPos) const;

    virtual ::PerlinSimplexNoise const& getSurfaceNoise();

    virtual std::unique_ptr<PerlinSimplexNoise> const& getMaterialAdjNoise() const;

    virtual void _prepareHeights(::BlockVolume&, ::ChunkPos const&, ::ChunkLocalNoiseCache const&, ::Aquifer*, std::function<void (const BlockPos&, const Block&, int)>&&, bool, std::vector<short>*);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI OverworldGeneratorMultinoise(::Dimension&, ::LevelSeed64, ::Biome const*);

    MCNAPI ::Util::MultidimensionalArray<float, 5, 5, 41> _generateDensityCellsForChunk(
        ::ChunkPos const&,
        ::ChunkLocalNoiseCache const&,
        ::NoodleCavifier*,
        ::OreVeinifier*
    ) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::TerrainInfo
    _attenuateOffsetAndFactor(::DividedPos2d<4>, ::TerrainInfo, ::ChunkBlender const*, ::ChunkBlenderFactory&);

    MCNAPI static ::ChunkLocalNoiseCache
    createNoiseCache(::ChunkPos, ::OverworldNoises3d const&, ::ChunkBlender const*, ::ChunkBlenderFactory&);

    MCNAPI static std::unique_ptr<BiomeSource> makeBiomeSource(
        ::XoroshiroPositionalRandomFactory const&,
        ::BiomeRegistry const&,
        ::Biome const*,
        ::BaseGameVersion const&,
        ::Experiments const&,
        ::OverworldNoises3d const&,
        ::ChunkBlenderFactory&,
        ::DimensionHeightRange const&
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Dimension&, ::LevelSeed64, ::Biome const*);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $chunkPosNeedsBlending(::ChunkPos const&);

    MCNAPI void $_clearBlendingCache();

    MCNAPI ::BiomeSource const& $getBiomeSource() const;

    MCNAPI ::BlockPos $findSpawnPosition() const;

    MCNAPI std::optional<short> $getPreliminarySurfaceLevel(::DividedPos2d<4>) const;

    MCNAPI void $propagateCombinedChunkSource(::ChunkSource*);

    MCNAPI void $decorateWorldGenPostProcess(::Biome const&, ::LevelChunk&, ::BlockSource&, ::Random&) const;

    MCNAPI ::Util::MultidimensionalArray<float, 5, 5, 41> $generateDensityCellsForChunk(::ChunkPos const&) const;

    MCNAPI int $getLevelGenHeight() const;

    MCNAPI std::optional<XoroshiroPositionalRandomFactory> $getXoroshiroPositionalRandomFactory() const;

    MCNAPI std::unique_ptr<Aquifer>
           $tryMakeAquifer(::ChunkPos const&, ::SurfaceLevelCache const&, short, short, short) const;

    MCNAPI ::ChunkLocalNoiseCache $createNoiseCache(::ChunkPos) const;

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
