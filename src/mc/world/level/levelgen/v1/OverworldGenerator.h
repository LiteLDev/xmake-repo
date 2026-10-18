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
#include "mc/world/level/levelgen/feature/CanyonFeature.h"
#include "mc/world/level/levelgen/feature/MonsterRoomFeature.h"
#include "mc/world/level/levelgen/feature/UnderwaterCanyonFeature.h"

// auto generated forward declare list
// clang-format off
class Aquifer;
class Biome;
class BiomeArea;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class Block;
#endif // @header-generator platform
class BlockPos;
#if defined(LL_PLAT_A) // @header-generator platform
class BlockSource;
class BlockTickingQueue;
#else // @header-generator platform
#endif // @header-generator platform
class BlockVolume;
class BlockVolumeTarget;
class BoundingBox;
class ChunkLocalNoiseCache;
class ChunkPos;
class ChunkViewSource;
#if defined(LL_PLAT_A) // @header-generator platform
class Dimension;
#else // @header-generator platform
#endif // @header-generator platform
class LevelChunk;
class PerlinSimplexNoise;
class SurfaceLevelCache;
class XoroshiroPositionalRandomFactory;
// clang-format on

class OverworldGenerator : public ::WorldGenerator {
public:
    // OverworldGenerator inner types declare
    // clang-format off
    struct ThreadData;
    // clang-format on

    // OverworldGenerator inner types define
    struct ThreadData {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<4, 4096, std::array<float, 1024>>           buffer;
        ::ll::TypedStorage<4, 1024, std::array<float, 256>>            depthBuffer;
        ::ll::TypedStorage<4, 1024, std::array<float, 256>>            dataBuffer;
        ::ll::TypedStorage<8, 655360, std::array<const Block*, 81920>> blockBuffer;
        ::ll::TypedStorage<8, 8, float*>                               fi;
        ::ll::TypedStorage<8, 8, float*>                               fis;
        ::ll::TypedStorage<8, 2544, ::Random>                          random;
#else // @header-generator platform
        ::ll::TypedStorage<4, 4096, ::std::array<float, 1024>>             buffer;
        ::ll::TypedStorage<4, 1024, ::std::array<float, 256>>              depthBuffer;
        ::ll::TypedStorage<4, 1024, ::std::array<float, 256>>              dataBuffer;
        ::ll::TypedStorage<8, 655360, ::std::array<::Block const*, 81920>> blockBuffer;
        ::ll::TypedStorage<8, 8, float*>                                   fi;
        ::ll::TypedStorage<8, 8, float*>                                   fis;
        ::ll::TypedStorage<8, 2544, ::Random>                              random;
#endif // @header-generator platform
        // NOLINTEND
    };

    using NoiseBuffer = ::Util::MultidimensionalArray<float, 5, 5, 41>;

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 36, float[9]>                  mBiomeBlendKernel;
    ::ll::UntypedStorage<1, 16>                          mIsLegacyWorld;
    ::ll::UntypedStorage<8, 112>                         generatorHelpersPool;
#else // @header-generator platform
    ::ll::TypedStorage<4, 36, float[9]>  mBiomeBlendKernel;
    ::ll::TypedStorage<1, 1, bool const> mIsLegacyWorld;
    ::ll::TypedStorage<
        8,
        168,
        ::Bedrock::Threading::
            InstancedThreadLocal<::OverworldGenerator::ThreadData, ::std::allocator<::OverworldGenerator::ThreadData>>>
                                                         generatorHelpersPool;
#endif // @header-generator platform
    ::ll::TypedStorage<8, 32, ::MonsterRoomFeature>      monsterRoomFeature;
    ::ll::TypedStorage<8, 16, ::CanyonFeature>           canyonFeature;
    ::ll::TypedStorage<8, 16, ::UnderwaterCanyonFeature> underwaterCanyonFeature;
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    OverworldGenerator();

public:
#else // @header-generator platform
#endif // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~OverworldGenerator();
#else // @header-generator platform
    virtual ~OverworldGenerator() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool structurePostProcessChunk(::ChunkViewSource&);
#else // @header-generator platform
    virtual void loadChunk(::LevelChunk& lc, bool forceImmediateReplacementDataLoad) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool decorationPostProcessChunk(::ChunkViewSource&);
#else // @header-generator platform
    virtual bool structurePostProcessChunk(::ChunkViewSource& neighborhoodIn) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void loadChunk(::LevelChunk&, bool);
#else // @header-generator platform
    virtual bool decorationPostProcessChunk(::ChunkViewSource& neighborhoodIn) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void prepareHeights(::BlockVolume&, ::ChunkPos const&, std::vector<short>*, bool);
#else // @header-generator platform
    virtual ::Util::MultidimensionalArray<float, 5, 5, 41>
    generateDensityCellsForChunk(::ChunkPos const& chunkPos) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::BiomeArea getBiomeArea(::BoundingBox const&, uint) const;
#else // @header-generator platform
    virtual ::WorldGenerator::BlockVolumeDimensions getBlockVolumeDimensions() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::WorldGenerator::BlockVolumeDimensions getBlockVolumeDimensions() const;
#else // @header-generator platform
    virtual void prepareHeights(
        ::BlockVolume&        box,
        ::ChunkPos const&     chunkPos,
        ::std::vector<short>* ZXheights,
        bool                  factorInBeardsAndShavers
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void decorateWorldGenLoadChunk(::Biome const&, ::LevelChunk&, ::BlockVolumeTarget&, ::Random&, ::ChunkPos const&) const;

    virtual ::Util::MultidimensionalArray<float, 5, 5, 41> generateDensityCellsForChunk(::ChunkPos const&) const = 0;
#else // @header-generator platform
    virtual ::BiomeArea getBiomeArea(::BoundingBox const& area, uint scale) const /*override*/;
#endif // @header-generator platform

    virtual int getLevelGenHeight() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<XoroshiroPositionalRandomFactory> getXoroshiroPositionalRandomFactory() const = 0;
#else // @header-generator platform
    virtual ::std::optional<::XoroshiroPositionalRandomFactory> getXoroshiroPositionalRandomFactory() const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unique_ptr<Aquifer> tryMakeAquifer(::ChunkPos const&, ::SurfaceLevelCache const&, short, short, short) const;
#else // @header-generator platform
    virtual ::std::unique_ptr<::Aquifer> tryMakeAquifer(
        ::ChunkPos const&          chunkPos,
        ::SurfaceLevelCache const& surfaceLevelCache,
        short                      minHeight,
        short                      levelGenHeight,
        short                      seaLevel
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ChunkLocalNoiseCache createNoiseCache(::ChunkPos) const;
#else // @header-generator platform
    virtual void decorateWorldGenLoadChunk(
        ::Biome const&       biome,
        ::LevelChunk&        lc,
        ::BlockVolumeTarget& target,
        ::Random&            random,
        ::ChunkPos const&    pos
    ) const /*override*/;

    virtual ::ChunkLocalNoiseCache createNoiseCache(::ChunkPos chunkPos) const;
#endif // @header-generator platform

    virtual ::PerlinSimplexNoise const& getSurfaceNoise() = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unique_ptr<PerlinSimplexNoise> const& getMaterialAdjNoise() const = 0;
#else // @header-generator platform
    virtual ::std::unique_ptr<::PerlinSimplexNoise> const& getMaterialAdjNoise() const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void _prepareHeights(::BlockVolume&, ::ChunkPos const&, ::ChunkLocalNoiseCache const&, ::Aquifer*, std::function<void (const BlockPos&, const Block&, int)>&&, bool, std::vector<short>*) = 0;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI OverworldGenerator(::Dimension&, bool);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Dimension&, bool);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual void _prepareHeights(
        ::BlockVolume&                                                  box,
        ::ChunkPos const&                                               chunkPos,
        ::ChunkLocalNoiseCache const&                                   chunkLocalNoiseCache,
        ::Aquifer*                                                      aquiferPtr,
        ::std::function<void(::BlockPos const&, ::Block const&, int)>&& tickUpdateFn,
        bool                                                            factorInBeardsAndShavers,
        ::std::vector<short>*                                           ZXheights
    ) = 0;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $structurePostProcessChunk(::ChunkViewSource&);
#else // @header-generator platform
    MCAPI void $loadChunk(::LevelChunk& lc, bool forceImmediateReplacementDataLoad);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $decorationPostProcessChunk(::ChunkViewSource&);
#else // @header-generator platform
    MCAPI bool $structurePostProcessChunk(::ChunkViewSource& neighborhoodIn);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $loadChunk(::LevelChunk&, bool);
#else // @header-generator platform
    MCAPI bool $decorationPostProcessChunk(::ChunkViewSource& neighborhoodIn);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $prepareHeights(::BlockVolume&, ::ChunkPos const&, std::vector<short>*, bool);
#else // @header-generator platform
    MCAPI ::WorldGenerator::BlockVolumeDimensions $getBlockVolumeDimensions() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BiomeArea $getBiomeArea(::BoundingBox const&, uint) const;
#else // @header-generator platform
    MCAPI void $prepareHeights(
        ::BlockVolume&        box,
        ::ChunkPos const&     chunkPos,
        ::std::vector<short>* ZXheights,
        bool                  factorInBeardsAndShavers
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::WorldGenerator::BlockVolumeDimensions $getBlockVolumeDimensions() const;
#else // @header-generator platform
    MCAPI ::BiomeArea $getBiomeArea(::BoundingBox const& area, uint scale) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void
    $decorateWorldGenLoadChunk(::Biome const&, ::LevelChunk&, ::BlockVolumeTarget&, ::Random&, ::ChunkPos const&) const;
#else // @header-generator platform
    MCFOLD ::std::unique_ptr<::Aquifer> $tryMakeAquifer(
        ::ChunkPos const&          chunkPos,
        ::SurfaceLevelCache const& surfaceLevelCache,
        short                      minHeight,
        short                      levelGenHeight,
        short                      seaLevel
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<Aquifer>
           $tryMakeAquifer(::ChunkPos const&, ::SurfaceLevelCache const&, short, short, short) const;
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
    MCNAPI ::ChunkLocalNoiseCache $createNoiseCache(::ChunkPos) const;
    // NOLINTEND
#else // @header-generator platform
    MCAPI ::ChunkLocalNoiseCache $createNoiseCache(::ChunkPos chunkPos) const;
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
