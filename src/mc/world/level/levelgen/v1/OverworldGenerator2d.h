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
#if defined(LL_PLAT_A) // @header-generator platform
class BiomeArea;
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
struct BiomeHeight;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class OverworldGenerator2d : public ::OverworldGenerator {
public:
    // OverworldGenerator2d inner types define
    using NoiseBuffer = ::Util::MultidimensionalArray<float, 5, 5, 41>;

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PerlinNoise>>        minLimitPerlinNoise;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PerlinNoise>>        maxLimitPerlinNoise;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PerlinNoise>>        mainPerlinNoise;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PerlinSimplexNoise>> surfaceNoise;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PerlinNoise>>        scaleNoise;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PerlinNoise>>        depthNoise;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PerlinNoise>>        forestNoise;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PerlinSimplexNoise>> mMaterialAdjNoise;
    ::ll::TypedStorage<1, 1, ::BeardKernel>                           mBeardKernel;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::BiomeSource>>        mBiomeSource;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    OverworldGenerator2d();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~OverworldGenerator2d();
#else // @header-generator platform
    virtual ::BiomeSource const& getBiomeSource() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::BiomeSource const& getBiomeSource() const;
#else // @header-generator platform
    virtual ::BlockPos findSpawnPosition() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::BlockPos findSpawnPosition() const;
#else // @header-generator platform
    virtual int getLevelGenHeight() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void decorateWorldGenPostProcess(::Biome const&, ::LevelChunk&, ::BlockSource&, ::Random&) const;
#else // @header-generator platform
    virtual ::Util::MultidimensionalArray<float, 5, 5, 41>
    generateDensityCellsForChunk(::ChunkPos const& chunkPos) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Util::MultidimensionalArray<float, 5, 5, 41> generateDensityCellsForChunk(::ChunkPos const&) const;
#else // @header-generator platform
    virtual ::PerlinSimplexNoise const& getSurfaceNoise() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int getLevelGenHeight() const;
#else // @header-generator platform
    virtual ::std::unique_ptr<::PerlinSimplexNoise> const& getMaterialAdjNoise() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<XoroshiroPositionalRandomFactory> getXoroshiroPositionalRandomFactory() const;
#else // @header-generator platform
    virtual void
    decorateWorldGenPostProcess(::Biome const& biome, ::LevelChunk& lc, ::BlockSource& source, ::Random& random) const
        /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::PerlinSimplexNoise const& getSurfaceNoise();
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
    virtual std::unique_ptr<PerlinSimplexNoise> const& getMaterialAdjNoise() const;

    virtual void _prepareHeights(::BlockVolume&, ::ChunkPos const&, ::ChunkLocalNoiseCache const&, ::Aquifer*, std::function<void (const BlockPos&, const Block&, int)>&&, bool, std::vector<short>*);
    // clang-format on
#else // @header-generator platform
    virtual ::std::optional<::XoroshiroPositionalRandomFactory> getXoroshiroPositionalRandomFactory() const
        /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI OverworldGenerator2d(::Dimension&, uint, bool, ::Biome const*);
#else // @header-generator platform
    MCAPI OverworldGenerator2d(::Dimension& dimension, uint seed, bool isLegacyWorld, ::Biome const* biomeOverride);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Util::MultidimensionalArray<float, 5, 5, 41> _generateDensityCellsForChunk(::ChunkPos const&) const;
#else // @header-generator platform
    MCAPI ::Util::MultidimensionalArray<float, 5, 5, 41>
    _generateDensityCellsForChunk(::ChunkPos const& chunkPos) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::Dimension&, uint, bool, ::Biome const*);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(::Dimension& dimension, uint seed, bool isLegacyWorld, ::Biome const* biomeOverride);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BiomeSource const& $getBiomeSource() const;
#else // @header-generator platform
    MCAPI ::BiomeSource const& $getBiomeSource() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BlockPos $findSpawnPosition() const;
#else // @header-generator platform
    MCAPI ::BlockPos $findSpawnPosition() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $decorateWorldGenPostProcess(::Biome const&, ::LevelChunk&, ::BlockSource&, ::Random&) const;
#else // @header-generator platform
    MCFOLD int $getLevelGenHeight() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Util::MultidimensionalArray<float, 5, 5, 41> $generateDensityCellsForChunk(::ChunkPos const&) const;
#else // @header-generator platform
    MCAPI ::Util::MultidimensionalArray<float, 5, 5, 41>
    $generateDensityCellsForChunk(::ChunkPos const& chunkPos) const;
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
    MCNAPI ::PerlinSimplexNoise const& $getSurfaceNoise();
#else // @header-generator platform
    MCAPI void
    $decorateWorldGenPostProcess(::Biome const& biome, ::LevelChunk& lc, ::BlockSource& source, ::Random& random) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
    MCAPI ::std::optional<::XoroshiroPositionalRandomFactory> $getXoroshiroPositionalRandomFactory() const;


#endif // @header-generator platform
    // NOLINTEND
};
