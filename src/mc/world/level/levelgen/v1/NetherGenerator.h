#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/InstancedThreadLocal.h"
#include "mc/util/MultidimensionalArray.h"
#include "mc/util/Random.h"
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
class LevelChunk;
class PerlinNoise;
class PerlinSimplexNoise;
// clang-format on

class NetherGenerator : public ::WorldGenerator {
public:
    // NetherGenerator inner types declare
    // clang-format off
    struct ThreadData;
    // clang-format on

    // NetherGenerator inner types define
    struct ThreadData {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 2544, ::Random>                          random;
        ::ll::TypedStorage<8, 262144, std::array<const Block*, 32768>> blockBuffer;
#else // @header-generator platform
        ::ll::TypedStorage<8, 2544, ::Random>                              random;
        ::ll::TypedStorage<8, 262144, ::std::array<::Block const*, 32768>> blockBuffer;
#endif // @header-generator platform
        // NOLINTEND
    };

    using NoiseBuffer = ::Util::MultidimensionalArray<float, 5, 5, 17>;

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::unique_ptr<PerlinNoise>>        lperlinNoise1;
    ::ll::TypedStorage<8, 8, std::unique_ptr<PerlinNoise>>        lperlinNoise2;
    ::ll::TypedStorage<8, 8, std::unique_ptr<PerlinNoise>>        perlinNoise1;
    ::ll::TypedStorage<8, 8, std::unique_ptr<PerlinNoise>>        perlinNoise2;
    ::ll::TypedStorage<8, 8, std::unique_ptr<PerlinNoise>>        scaleNoise;
    ::ll::TypedStorage<8, 8, std::unique_ptr<PerlinNoise>>        depthNoise;
    ::ll::TypedStorage<8, 8, std::unique_ptr<PerlinSimplexNoise>> surfaceNoise;
    ::ll::TypedStorage<8, 8, std::unique_ptr<PerlinSimplexNoise>> mMaterialAdjNoise;
    ::ll::UntypedStorage<8, 112>                                  generatorHelpersPool;
    ::ll::UntypedStorage<8, 16>                                   mBiomeSource;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PerlinNoise>>        lperlinNoise1;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PerlinNoise>>        lperlinNoise2;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PerlinNoise>>        perlinNoise1;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PerlinNoise>>        perlinNoise2;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PerlinNoise>>        scaleNoise;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PerlinNoise>>        depthNoise;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PerlinSimplexNoise>> surfaceNoise;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PerlinSimplexNoise>> mMaterialAdjNoise;
    ::ll::TypedStorage<
        8,
        168,
        ::Bedrock::Threading::
            InstancedThreadLocal<::NetherGenerator::ThreadData, ::std::allocator<::NetherGenerator::ThreadData>>>
                                                               generatorHelpersPool;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::BiomeSource>> mBiomeSource;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    NetherGenerator();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~NetherGenerator();
#else // @header-generator platform
    virtual ~NetherGenerator() /*override*/ = default;
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
    virtual ::BiomeArea getBiomeArea(::BoundingBox const& area, uint scale) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::BiomeSource const& getBiomeSource() const;
#else // @header-generator platform
    virtual ::BiomeSource const& getBiomeSource() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::WorldGenerator::BlockVolumeDimensions getBlockVolumeDimensions() const;
#else // @header-generator platform
    virtual ::WorldGenerator::BlockVolumeDimensions getBlockVolumeDimensions() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::BlockPos findSpawnPosition() const;
#else // @header-generator platform
    virtual ::BlockPos findSpawnPosition() const /*override*/;
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
    MCNAPI NetherGenerator(::Dimension&, uint, ::Biome const*);
#else // @header-generator platform
    MCAPI NetherGenerator(::Dimension& dimension, uint seed, ::Biome const* biomeOverride);
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
    MCAPI void* $ctor(::Dimension& dimension, uint seed, ::Biome const* biomeOverride);
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
    MCAPI ::BiomeArea $getBiomeArea(::BoundingBox const& area, uint scale) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BiomeSource const& $getBiomeSource() const;
#else // @header-generator platform
    MCAPI ::BiomeSource const& $getBiomeSource() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::WorldGenerator::BlockVolumeDimensions $getBlockVolumeDimensions() const;
#else // @header-generator platform
    MCAPI ::WorldGenerator::BlockVolumeDimensions $getBlockVolumeDimensions() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BlockPos $findSpawnPosition() const;
#else // @header-generator platform
    MCAPI ::BlockPos $findSpawnPosition() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void
    $decorateWorldGenLoadChunk(::Biome const&, ::LevelChunk&, ::BlockVolumeTarget&, ::Random&, ::ChunkPos const&) const;
#else // @header-generator platform
    MCAPI void $decorateWorldGenLoadChunk(
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
