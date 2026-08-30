#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/InstancedThreadLocal.h"
#include "mc/util/Random.h"
#include "mc/util/random/XoroshiroRandom.h"
#include "mc/world/level/DividedPos2d.h"
#include "mc/world/level/levelgen/WorldGenerator.h"
#include "mc/world/level/levelgen/density/DensityCalculators.h"
#include "mc/world/level/levelgen/density/DensityVolume.h"
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
class DensityFunctionRegistry;
class Dimension;
class LevelChunk;
class Pos;
class SurfaceLevelCache;
struct DensityFunctionPtr;
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
    ::ll::UntypedStorage<8, 112>                            generatorHelpersPool;
    ::ll::TypedStorage<8, 8, std::unique_ptr<BiomeSource>>  mBiomeSource;
    ::ll::UntypedStorage<1, 144>                            mCalculatorMutex;
    ::ll::TypedStorage<8, 32, ::DensityCalculators>         mDensityCalculators;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<const Block*>> mFillBlock;
    ::ll::TypedStorage<8, 40, ::PerlinSimplexNoise>         mMaterialAdjNoise;
    ::ll::TypedStorage<8, 40, ::XoroshiroRandom>            mSurfaceRandom;
    ::ll::UntypedStorage<8, 48>                             mSurfaceNoise;
    // NOLINTEND

public:
    // prevent constructor by default
    DensityFunctionWorldGenerator();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~DensityFunctionWorldGenerator() = default;

    virtual bool structurePostProcessChunk(::ChunkViewSource&);

    virtual bool decorationPostProcessChunk(::ChunkViewSource&);

    virtual void loadChunk(::LevelChunk&, bool);

    virtual void prepareHeights(::BlockVolume&, ::ChunkPos const&, std::vector<short>*, bool);

    virtual ::BiomeArea getBiomeArea(::BoundingBox const&, uint) const;

    virtual ::BiomeSource const& getBiomeSource() const;

    virtual ::WorldGenerator::BlockVolumeDimensions getBlockVolumeDimensions() const;

    virtual ::BlockPos findSpawnPosition() const;

    virtual std::optional<short> getPreliminarySurfaceLevel(::DividedPos2d<4>) const;

    virtual void decorateWorldGenLoadChunk(::Biome const&, ::LevelChunk&, ::BlockVolumeTarget&, ::Random&, ::ChunkPos const&) const;

    virtual void decorateWorldGenPostProcess(::Biome const&, ::LevelChunk&, ::BlockSource&, ::Random&) const;
    // clang-format on
    // NOLINTEND
};
