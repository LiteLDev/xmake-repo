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
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/levelgen/v1/ChunkLocalNoiseCache.h"
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
class PerlinSimplexNoise;
#else // @header-generator platform
#endif // @header-generator platform
class Random;
class SurfaceLevelCache;
class XoroshiroPositionalRandomFactory;
struct TerrainInfo;
// clang-format on

class OverworldGeneratorMultinoise : public ::OverworldGenerator {
public:
    // OverworldGeneratorMultinoise inner types declare
    // clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
    struct Noises;
#else // @header-generator platform
#endif // @header-generator platform
    struct BlockGenerationResult;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct Noises;
#endif // @header-generator platform
    // clang-format on

    // OverworldGeneratorMultinoise inner types define
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct BlockGenerationResult {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::Block const*> block;
        ::ll::TypedStorage<1, 1, bool const>     shouldTickUpdate;
        // NOLINTEND
    };

#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 856, ::OverworldNoises3d const>      mCommonNoise;
#else // @header-generator platform
        ::ll::TypedStorage<8, 904, ::OverworldNoises3d const>      mCommonNoise;
#endif // @header-generator platform
        ::ll::TypedStorage<8, 32, ::DepthBasedBlockSupplier const> mDeepslateSupplier;
        // NOLINTEND

    public:
#if defined(LL_PLAT_A) // @header-generator platform
        // prevent constructor by default
        Noises& operator=(Noises const&);
        Noises(Noises const&);
        Noises();

    public:
        // member functions
#else // @header-generator platform
        // static functions
#endif // @header-generator platform
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
        MCAPI static ::OverworldGeneratorMultinoise::Noises
        make(::XoroshiroPositionalRandomFactory const& randomFactory);
#endif // @header-generator platform
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 2712, std::optional<OverworldGeneratorMultinoise::Noises>> mNoises;
    ::ll::TypedStorage<8, 8, std::unique_ptr<BiomeSource>>                           mBiomeSource;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Cavifier>>                              mCavifier;
    ::ll::TypedStorage<8, 8, std::unique_ptr<PerlinSimplexNoise>>                    mMaterialAdjNoise;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ChunkBlender>>                          mFixedChunkBlender;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ChunkBlenderFactory>>                   mChunkBlenderFactory;
#else // @header-generator platform
    ::ll::TypedStorage<8, 2760, ::std::optional<::OverworldGeneratorMultinoise::Noises>> mNoises;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::BiomeSource>>                           mBiomeSource;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Cavifier>>                              mCavifier;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PerlinSimplexNoise>>                    mMaterialAdjNoise;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ChunkBlender>>                          mFixedChunkBlender;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ChunkBlenderFactory>>                   mChunkBlenderFactory;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    OverworldGeneratorMultinoise();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~OverworldGeneratorMultinoise();
#else // @header-generator platform
    virtual ~OverworldGeneratorMultinoise() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool chunkPosNeedsBlending(::ChunkPos const&);
#else // @header-generator platform
    virtual ::BiomeSource const& getBiomeSource() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void _clearBlendingCache();
#else // @header-generator platform
    virtual ::BlockPos findSpawnPosition() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::BiomeSource const& getBiomeSource() const;
#else // @header-generator platform
    virtual ::std::optional<short> getPreliminarySurfaceLevel(::DividedPos2d<4> worldQuartPos) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::BlockPos findSpawnPosition() const;
#else // @header-generator platform
    virtual int getLevelGenHeight() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<short> getPreliminarySurfaceLevel(::DividedPos2d<4>) const;
#else // @header-generator platform
    virtual ::Util::MultidimensionalArray<float, 5, 5, 41>
    generateDensityCellsForChunk(::ChunkPos const& chunkPos) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void propagateCombinedChunkSource(::ChunkSource*);
#else // @header-generator platform
    virtual void propagateCombinedChunkSource(::ChunkSource* chunkSource) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void decorateWorldGenPostProcess(::Biome const&, ::LevelChunk&, ::BlockSource&, ::Random&) const;
#else // @header-generator platform
    virtual bool chunkPosNeedsBlending(::ChunkPos const& cp) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Util::MultidimensionalArray<float, 5, 5, 41> generateDensityCellsForChunk(::ChunkPos const&) const;
#else // @header-generator platform
    virtual ::ChunkLocalNoiseCache createNoiseCache(::ChunkPos chunkPos) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int getLevelGenHeight() const;
#else // @header-generator platform
    virtual ::PerlinSimplexNoise const& getSurfaceNoise() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<XoroshiroPositionalRandomFactory> getXoroshiroPositionalRandomFactory() const;
#else // @header-generator platform
    virtual ::std::unique_ptr<::PerlinSimplexNoise> const& getMaterialAdjNoise() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unique_ptr<Aquifer> tryMakeAquifer(::ChunkPos const&, ::SurfaceLevelCache const&, short, short, short) const;
#else // @header-generator platform
    virtual void
    decorateWorldGenPostProcess(::Biome const&, ::LevelChunk& lc, ::BlockSource& source, ::Random& random) const
        /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ChunkLocalNoiseCache createNoiseCache(::ChunkPos) const;
#else // @header-generator platform
    virtual void _prepareHeights(
        ::BlockVolume&                                                  box,
        ::ChunkPos const&                                               chunkPos,
        ::ChunkLocalNoiseCache const&                                   chunkLocalNoiseCache,
        ::Aquifer*                                                      aquiferPtr,
        ::std::function<void(::BlockPos const&, ::Block const&, int)>&& tickUpdateFn,
        bool                                                            factorInBeardsAndShavers,
        ::std::vector<short>*                                           ZXheights
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::PerlinSimplexNoise const& getSurfaceNoise();
#else // @header-generator platform
    virtual ::std::unique_ptr<::Aquifer> tryMakeAquifer(
        ::ChunkPos const&          chunkPos,
        ::SurfaceLevelCache const& surfaceLevelCache,
        short                      minHeight,
        short                      levelGenHeight,
        short                      seaLevel
    ) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unique_ptr<PerlinSimplexNoise> const& getMaterialAdjNoise() const;
#else // @header-generator platform
    virtual ::std::optional<::XoroshiroPositionalRandomFactory> getXoroshiroPositionalRandomFactory() const
        /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void _prepareHeights(::BlockVolume&, ::ChunkPos const&, ::ChunkLocalNoiseCache const&, ::Aquifer*, std::function<void (const BlockPos&, const Block&, int)>&&, bool, std::vector<short>*);
    // clang-format on
#else // @header-generator platform
    virtual void _clearBlendingCache() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI OverworldGeneratorMultinoise(::Dimension&, ::LevelSeed64, ::Biome const*);
#else // @header-generator platform
    MCAPI OverworldGeneratorMultinoise(::Dimension& dimension, ::LevelSeed64 seed, ::Biome const* biomeOverride);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Util::MultidimensionalArray<float, 5, 5, 41> _generateDensityCellsForChunk(
        ::ChunkPos const&,
        ::ChunkLocalNoiseCache const&,
        ::NoodleCavifier*,
        ::OreVeinifier*
#else // @header-generator platform
    MCAPI ::Util::MultidimensionalArray<float, 5, 5, 41> _generateDensityCellsForChunk(
        ::ChunkPos const&             chunkPos,
        ::ChunkLocalNoiseCache const& chunkLocalNoiseCache,
        ::NoodleCavifier*             noodleCavifier,
        ::OreVeinifier*               oreVeinifier
#endif // @header-generator platform
    ) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::TerrainInfo
    _attenuateOffsetAndFactor(::DividedPos2d<4>, ::TerrainInfo, ::ChunkBlender const*, ::ChunkBlenderFactory&);
#else // @header-generator platform
    MCAPI static ::TerrainInfo _attenuateOffsetAndFactor(
        ::DividedPos2d<4>      worldQuartPos,
        ::TerrainInfo          defaultTerrainInfo,
        ::ChunkBlender const*  testFixedChunkBlender,
        ::ChunkBlenderFactory& chunkBlenderFactory
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::ChunkLocalNoiseCache
    createNoiseCache(::ChunkPos, ::OverworldNoises3d const&, ::ChunkBlender const*, ::ChunkBlenderFactory&);
#else // @header-generator platform
    MCAPI static ::ChunkLocalNoiseCache createNoiseCache(
        ::ChunkPos                 chunkPos,
        ::OverworldNoises3d const& overworldNoises3d,
        ::ChunkBlender const*      testFixedChunkBlender,
        ::ChunkBlenderFactory&     chunkBlenderFactory
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::unique_ptr<BiomeSource> makeBiomeSource(
        ::XoroshiroPositionalRandomFactory const&,
        ::BiomeRegistry const&,
        ::Biome const*,
        ::BaseGameVersion const&,
        ::Experiments const&,
        ::OverworldNoises3d const&,
        ::ChunkBlenderFactory&,
        ::DimensionHeightRange const&
#else // @header-generator platform
    MCAPI static ::std::unique_ptr<::BiomeSource> makeBiomeSource(
        ::XoroshiroPositionalRandomFactory const& random,
        ::BiomeRegistry const&                    biomeRegistry,
        ::Biome const*                            overrideBiome,
        ::BaseGameVersion const&                  baseGameVersion,
        ::Experiments const&                      experiments,
        ::OverworldNoises3d const&                overworldNoises,
        ::ChunkBlenderFactory&                    chunkBlenderFactory,
        ::DimensionHeightRange const&             heightRange
#endif // @header-generator platform
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::Dimension&, ::LevelSeed64, ::Biome const*);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(::Dimension& dimension, ::LevelSeed64 seed, ::Biome const* biomeOverride);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $chunkPosNeedsBlending(::ChunkPos const&);
#else // @header-generator platform
    MCAPI ::BiomeSource const& $getBiomeSource() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $_clearBlendingCache();
#else // @header-generator platform
    MCAPI ::BlockPos $findSpawnPosition() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BiomeSource const& $getBiomeSource() const;
#else // @header-generator platform
    MCAPI ::std::optional<short> $getPreliminarySurfaceLevel(::DividedPos2d<4> worldQuartPos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BlockPos $findSpawnPosition() const;
#else // @header-generator platform
    MCFOLD int $getLevelGenHeight() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<short> $getPreliminarySurfaceLevel(::DividedPos2d<4>) const;
#else // @header-generator platform
    MCAPI ::Util::MultidimensionalArray<float, 5, 5, 41>
    $generateDensityCellsForChunk(::ChunkPos const& chunkPos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $propagateCombinedChunkSource(::ChunkSource*);
#else // @header-generator platform
    MCAPI void $propagateCombinedChunkSource(::ChunkSource* chunkSource);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $decorateWorldGenPostProcess(::Biome const&, ::LevelChunk&, ::BlockSource&, ::Random&) const;
#else // @header-generator platform
    MCAPI bool $chunkPosNeedsBlending(::ChunkPos const& cp);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Util::MultidimensionalArray<float, 5, 5, 41> $generateDensityCellsForChunk(::ChunkPos const&) const;
#else // @header-generator platform
    MCAPI ::ChunkLocalNoiseCache $createNoiseCache(::ChunkPos chunkPos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getLevelGenHeight() const;
#else // @header-generator platform
    MCAPI ::PerlinSimplexNoise const& $getSurfaceNoise();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<XoroshiroPositionalRandomFactory> $getXoroshiroPositionalRandomFactory() const;
#else // @header-generator platform
    MCAPI ::std::unique_ptr<::PerlinSimplexNoise> const& $getMaterialAdjNoise() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<Aquifer>
           $tryMakeAquifer(::ChunkPos const&, ::SurfaceLevelCache const&, short, short, short) const;
#else // @header-generator platform
    MCAPI void
    $decorateWorldGenPostProcess(::Biome const&, ::LevelChunk& lc, ::BlockSource& source, ::Random& random) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI void $_prepareHeights(
        ::BlockVolume&                                                  box,
        ::ChunkPos const&                                               chunkPos,
        ::ChunkLocalNoiseCache const&                                   chunkLocalNoiseCache,
        ::Aquifer*                                                      aquiferPtr,
        ::std::function<void(::BlockPos const&, ::Block const&, int)>&& tickUpdateFn,
        bool                                                            factorInBeardsAndShavers,
        ::std::vector<short>*                                           ZXheights
#endif // @header-generator platform
    );
#if defined(LL_PLAT_A) // @header-generator platform
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform
    MCAPI ::std::unique_ptr<::Aquifer> $tryMakeAquifer(
        ::ChunkPos const&          chunkPos,
        ::SurfaceLevelCache const& surfaceLevelCache,
        short                      minHeight,
        short                      levelGenHeight,
        short                      seaLevel
    ) const;

    MCAPI ::std::optional<::XoroshiroPositionalRandomFactory> $getXoroshiroPositionalRandomFactory() const;

    MCAPI void $_clearBlendingCache();


#endif // @header-generator platform
    // NOLINTEND
};
