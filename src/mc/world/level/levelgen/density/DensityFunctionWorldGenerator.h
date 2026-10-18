#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/InstancedThreadLocal.h"
#include "mc/util/Random.h"
#include "mc/util/random/XoroshiroRandom.h"
#include "mc/world/level/DividedPos2d.h"
#include "mc/world/level/levelgen/WorldGenerator.h"
#include "mc/world/level/levelgen/density/DensityCalculators.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/levelgen/density/DensityVolume.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/level/levelgen/synth/PerlinSimplexNoise.h"

// auto generated forward declare list
// clang-format off
class Biome;
class BiomeArea;
class BiomeSource;
class Block;
class BlockPos;
class BlockSource;
class BlockVolume;
class BlockVolumeTarget;
class BoundingBox;
class ChunkPos;
class ChunkViewSource;
#if defined(LL_PLAT_A) // @header-generator platform
class DensityFunctionRegistry;
class Dimension;
#else // @header-generator platform
#endif // @header-generator platform
class LevelChunk;
#if defined(LL_PLAT_A) // @header-generator platform
class Pos;
class SurfaceLevelCache;
struct DensityFunctionPtr;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class DensityFunctionWorldGenerator : public ::WorldGenerator {
public:
    // DensityFunctionWorldGenerator inner types declare
    // clang-format off
    struct ThreadData;
    // clang-format on

    // DensityFunctionWorldGenerator inner types define
    struct ThreadData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 2544, ::Random> random;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 112>                            generatorHelpersPool;
    ::ll::TypedStorage<8, 8, std::unique_ptr<BiomeSource>>  mBiomeSource;
    ::ll::UntypedStorage<1, 144>                            mCalculatorMutex;
    ::ll::TypedStorage<8, 32, ::DensityCalculators>         mDensityCalculators;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<const Block*>> mFillBlock;
    ::ll::TypedStorage<8, 40, ::PerlinSimplexNoise>         mMaterialAdjNoise;
    ::ll::TypedStorage<8, 40, ::XoroshiroRandom>            mSurfaceRandom;
    ::ll::UntypedStorage<8, 48>                             mSurfaceNoise;
#else // @header-generator platform
    ::ll::TypedStorage<
        8,
        168,
        ::Bedrock::Threading::InstancedThreadLocal<
            ::DensityFunctionWorldGenerator::ThreadData,
            ::std::allocator<::DensityFunctionWorldGenerator::ThreadData>>>
                                                               generatorHelpersPool;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::BiomeSource>> mBiomeSource;
    ::ll::TypedStorage<8, 8, ::std::shared_mutex>              mCalculatorMutex;
    ::ll::TypedStorage<8, 32, ::DensityCalculators>            mDensityCalculators;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::Block const*>>  mFillBlock;
    ::ll::TypedStorage<8, 40, ::PerlinSimplexNoise>            mMaterialAdjNoise;
    ::ll::TypedStorage<8, 40, ::XoroshiroRandom>               mSurfaceRandom;
    ::ll::TypedStorage<8, 40, ::PerlinSimplexNoise>            mSurfaceNoise;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    DensityFunctionWorldGenerator();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~DensityFunctionWorldGenerator() = default;
#else // @header-generator platform
    virtual ~DensityFunctionWorldGenerator() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool structurePostProcessChunk(::ChunkViewSource&);
#else // @header-generator platform
    virtual void loadChunk(::LevelChunk& lc, bool forceImmediateReplacementDataLoad) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool decorationPostProcessChunk(::ChunkViewSource&);
#else // @header-generator platform
    virtual bool structurePostProcessChunk(::ChunkViewSource&) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void loadChunk(::LevelChunk&, bool);
#else // @header-generator platform
    virtual bool decorationPostProcessChunk(::ChunkViewSource&) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void prepareHeights(::BlockVolume&, ::ChunkPos const&, std::vector<short>*, bool);
#else // @header-generator platform
    virtual void prepareHeights(::BlockVolume&, ::ChunkPos const&, ::std::vector<short>*, bool) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::BiomeArea getBiomeArea(::BoundingBox const&, uint) const;
#else // @header-generator platform
    virtual ::BiomeArea getBiomeArea(::BoundingBox const&, uint) const /*override*/;
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
    virtual std::optional<short> getPreliminarySurfaceLevel(::DividedPos2d<4>) const;
#else // @header-generator platform
    virtual ::std::optional<short> getPreliminarySurfaceLevel(::DividedPos2d<4>) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void decorateWorldGenLoadChunk(::Biome const&, ::LevelChunk&, ::BlockVolumeTarget&, ::Random&, ::ChunkPos const&) const;
#else // @header-generator platform
    virtual void
    decorateWorldGenLoadChunk(::Biome const&, ::LevelChunk&, ::BlockVolumeTarget&, ::Random&, ::ChunkPos const&) const
        /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void decorateWorldGenPostProcess(::Biome const&, ::LevelChunk&, ::BlockSource&, ::Random&) const;
    // clang-format on
#else // @header-generator platform
    virtual void decorateWorldGenPostProcess(::Biome const&, ::LevelChunk&, ::BlockSource&, ::Random&) const
        /*override*/;
#endif // @header-generator platform
    // NOLINTEND
};
