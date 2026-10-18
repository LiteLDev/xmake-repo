#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/InstancedThreadLocal.h"
#include "mc/util/MultidimensionalArray.h"
#include "mc/world/level/DividedPos2d.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/block/Block.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/level/levelgen/WorldGenerator.h"

// auto generated forward declare list
// clang-format off
class Biome;
class BiomeArea;
class BiomeSource;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class Block;
#endif // @header-generator platform
class BlockPos;
class BlockSource;
class BlockVolume;
class BlockVolumeTarget;
class BoundingBox;
class ChunkPos;
class ChunkViewSource;
class Dimension;
class FixedBiomeSource;
class LevelChunk;
class PerlinNoise;
class PerlinSimplexNoise;
class Random;
class SimplexNoise;
// clang-format on

class TheEndGenerator : public ::WorldGenerator {
public:
    // TheEndGenerator inner types declare
    // clang-format off
    struct ThreadData;
    // clang-format on

    // TheEndGenerator inner types define
    struct ThreadData {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 262144, std::array<const Block*, 32768>> blockBuffer;
#else // @header-generator platform
        ::ll::TypedStorage<8, 262144, ::std::array<::Block const*, 32768>> blockBuffer;
#endif // @header-generator platform
        // NOLINTEND
    };
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    using CellPos2d = ::DividedPos2d<8>;
#endif // @header-generator platform

    using NoiseBuffer = ::Util::MultidimensionalArray<float, 3, 3, 33>;

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::unique_ptr<PerlinNoise>>  mLPerlinNoise1;
    ::ll::TypedStorage<8, 8, std::unique_ptr<PerlinNoise>>  mLPerlinNoise2;
    ::ll::TypedStorage<8, 8, std::unique_ptr<PerlinNoise>>  mPerlinNoise1;
    ::ll::TypedStorage<8, 8, std::unique_ptr<SimplexNoise>> mIslandNoise;
    ::ll::UntypedStorage<8, 16>                             mMaterialAdjNoise;
    ::ll::UntypedStorage<8, 112>                            generatorHelpersPool;
    ::ll::UntypedStorage<8, 16>                             mBiomeSource;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PerlinNoise>>        mLPerlinNoise1;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PerlinNoise>>        mLPerlinNoise2;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PerlinNoise>>        mPerlinNoise1;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::SimplexNoise>>       mIslandNoise;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PerlinSimplexNoise>> mMaterialAdjNoise;
    ::ll::TypedStorage<
        8,
        168,
        ::Bedrock::Threading::
            InstancedThreadLocal<::TheEndGenerator::ThreadData, ::std::allocator<::TheEndGenerator::ThreadData>>>
                                                                    generatorHelpersPool;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::FixedBiomeSource>> mBiomeSource;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    TheEndGenerator();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~TheEndGenerator();
#else // @header-generator platform
    virtual ~TheEndGenerator() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool structurePostProcessChunk(::ChunkViewSource&);
#else // @header-generator platform
    virtual void loadChunk(::LevelChunk& levelChunk, bool forceImmediateReplacementDataLoad) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool decorationPostProcessChunk(::ChunkViewSource&);
#else // @header-generator platform
    virtual bool structurePostProcessChunk(::ChunkViewSource& neighborhoodIn) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void loadChunk(::LevelChunk&, bool);
#else // @header-generator platform
    virtual bool decorationPostProcessChunk(::ChunkViewSource& neighborhood) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void postProcessMobsAt(::BlockSource&, int, int, ::Random&);
#else // @header-generator platform
    virtual void
    postProcessMobsAt(::BlockSource& region, int chunkWestBlock, int chunkNorthBlock, ::Random& random) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void prepareHeights(::BlockVolume&, ::ChunkPos const&, std::vector<short>*, bool);
#else // @header-generator platform
    virtual void prepareHeights(
        ::BlockVolume&        box,
        ::ChunkPos const&     chunkPos,
        ::std::vector<short>* ZXheights,
        bool                  factorInBeardsAndShavers
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::BiomeArea getBiomeArea(::BoundingBox const&, uint) const;
#else // @header-generator platform
    virtual ::std::optional<short> getPreliminarySurfaceLevel(::DividedPos2d<4> worldQuartPos) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::BiomeSource const& getBiomeSource() const;
#else // @header-generator platform
    virtual ::BiomeArea getBiomeArea(::BoundingBox const& area, uint scale) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::WorldGenerator::BlockVolumeDimensions getBlockVolumeDimensions() const;
#else // @header-generator platform
    virtual ::BiomeSource const& getBiomeSource() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::BlockPos findSpawnPosition() const;
#else // @header-generator platform
    virtual ::BlockPos findSpawnPosition() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<short> getPreliminarySurfaceLevel(::DividedPos2d<4>) const;
#else // @header-generator platform
    virtual ::WorldGenerator::BlockVolumeDimensions getBlockVolumeDimensions() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void decorateWorldGenLoadChunk(::Biome const&, ::LevelChunk&, ::BlockVolumeTarget&, ::Random&, ::ChunkPos const&) const;
#else // @header-generator platform
    virtual void decorateWorldGenLoadChunk(
        ::Biome const&       biome,
        ::LevelChunk&        lc,
        ::BlockVolumeTarget& target,
        ::Random&            random,
        ::ChunkPos const&    pos
    ) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void decorateWorldGenPostProcess(::Biome const&, ::LevelChunk&, ::BlockSource&, ::Random&) const;
    // clang-format on
#else // @header-generator platform
    virtual void
    decorateWorldGenPostProcess(::Biome const& biome, ::LevelChunk& lc, ::BlockSource& source, ::Random& random) const
        /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI TheEndGenerator(::Dimension&, uint, ::Biome const*);
#else // @header-generator platform
    MCAPI TheEndGenerator(::Dimension& dimension, uint seed, ::Biome const* overrideBiome);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float getIslandHeightValue(int const, int const, int const, int const) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool isOutsideCentralIslandArea(::ChunkPos const&);
#else // @header-generator platform
    MCAPI float
    getIslandHeightValue(int const chunkX, int const chunkZ, int const cellOffsetX, int const cellOffsetZ) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::Dimension&, uint, ::Biome const*);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(::Dimension& dimension, uint seed, ::Biome const* overrideBiome);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $structurePostProcessChunk(::ChunkViewSource&);
#else // @header-generator platform
    MCAPI void $loadChunk(::LevelChunk& levelChunk, bool forceImmediateReplacementDataLoad);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $decorationPostProcessChunk(::ChunkViewSource&);
#else // @header-generator platform
    MCAPI bool $structurePostProcessChunk(::ChunkViewSource& neighborhoodIn);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $loadChunk(::LevelChunk&, bool);
#else // @header-generator platform
    MCAPI bool $decorationPostProcessChunk(::ChunkViewSource& neighborhood);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $postProcessMobsAt(::BlockSource&, int, int, ::Random&);
#else // @header-generator platform
    MCAPI void $postProcessMobsAt(::BlockSource& region, int chunkWestBlock, int chunkNorthBlock, ::Random& random);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $prepareHeights(::BlockVolume&, ::ChunkPos const&, std::vector<short>*, bool);
#else // @header-generator platform
    MCAPI void $prepareHeights(
        ::BlockVolume&        box,
        ::ChunkPos const&     chunkPos,
        ::std::vector<short>* ZXheights,
        bool                  factorInBeardsAndShavers
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BiomeArea $getBiomeArea(::BoundingBox const&, uint) const;
#else // @header-generator platform
    MCAPI ::std::optional<short> $getPreliminarySurfaceLevel(::DividedPos2d<4> worldQuartPos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BiomeSource const& $getBiomeSource() const;
#else // @header-generator platform
    MCAPI ::BiomeArea $getBiomeArea(::BoundingBox const& area, uint scale) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::WorldGenerator::BlockVolumeDimensions $getBlockVolumeDimensions() const;
#else // @header-generator platform
    MCAPI ::BiomeSource const& $getBiomeSource() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BlockPos $findSpawnPosition() const;
#else // @header-generator platform
    MCFOLD ::BlockPos $findSpawnPosition() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<short> $getPreliminarySurfaceLevel(::DividedPos2d<4>) const;
#else // @header-generator platform
    MCAPI ::WorldGenerator::BlockVolumeDimensions $getBlockVolumeDimensions() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void
    $decorateWorldGenLoadChunk(::Biome const&, ::LevelChunk&, ::BlockVolumeTarget&, ::Random&, ::ChunkPos const&) const;
#else // @header-generator platform
    MCFOLD void $decorateWorldGenLoadChunk(
        ::Biome const&       biome,
        ::LevelChunk&        lc,
        ::BlockVolumeTarget& target,
        ::Random&            random,
        ::ChunkPos const&    pos
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $decorateWorldGenPostProcess(::Biome const&, ::LevelChunk&, ::BlockSource&, ::Random&) const;
    // NOLINTEND
#else // @header-generator platform
    MCAPI void
    $decorateWorldGenPostProcess(::Biome const& biome, ::LevelChunk& lc, ::BlockSource& source, ::Random& random) const;
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
