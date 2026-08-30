#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/InstancedThreadLocal.h"
#include "mc/util/MultidimensionalArray.h"
#include "mc/world/level/DividedPos2d.h"
#include "mc/world/level/block/Block.h"
#include "mc/world/level/levelgen/WorldGenerator.h"

// auto generated forward declare list
// clang-format off
class Biome;
class BiomeArea;
class BiomeSource;
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
        ::ll::TypedStorage<8, 262144, std::array<const Block*, 32768>> blockBuffer;
        // NOLINTEND
    };

    using NoiseBuffer = ::Util::MultidimensionalArray<float, 3, 3, 33>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<PerlinNoise>>  mLPerlinNoise1;
    ::ll::TypedStorage<8, 8, std::unique_ptr<PerlinNoise>>  mLPerlinNoise2;
    ::ll::TypedStorage<8, 8, std::unique_ptr<PerlinNoise>>  mPerlinNoise1;
    ::ll::TypedStorage<8, 8, std::unique_ptr<SimplexNoise>> mIslandNoise;
    ::ll::UntypedStorage<8, 16>                             mMaterialAdjNoise;
    ::ll::UntypedStorage<8, 112>                            generatorHelpersPool;
    ::ll::UntypedStorage<8, 16>                             mBiomeSource;
    // NOLINTEND

public:
    // prevent constructor by default
    TheEndGenerator();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~TheEndGenerator();

    virtual bool structurePostProcessChunk(::ChunkViewSource&);

    virtual bool decorationPostProcessChunk(::ChunkViewSource&);

    virtual void loadChunk(::LevelChunk&, bool);

    virtual void postProcessMobsAt(::BlockSource&, int, int, ::Random&);

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

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI TheEndGenerator(::Dimension&, uint, ::Biome const*);

    MCNAPI float getIslandHeightValue(int const, int const, int const, int const) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool isOutsideCentralIslandArea(::ChunkPos const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Dimension&, uint, ::Biome const*);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $structurePostProcessChunk(::ChunkViewSource&);

    MCNAPI bool $decorationPostProcessChunk(::ChunkViewSource&);

    MCNAPI void $loadChunk(::LevelChunk&, bool);

    MCNAPI void $postProcessMobsAt(::BlockSource&, int, int, ::Random&);

    MCNAPI void $prepareHeights(::BlockVolume&, ::ChunkPos const&, std::vector<short>*, bool);

    MCNAPI ::BiomeArea $getBiomeArea(::BoundingBox const&, uint) const;

    MCNAPI ::BiomeSource const& $getBiomeSource() const;

    MCNAPI ::WorldGenerator::BlockVolumeDimensions $getBlockVolumeDimensions() const;

    MCNAPI ::BlockPos $findSpawnPosition() const;

    MCNAPI std::optional<short> $getPreliminarySurfaceLevel(::DividedPos2d<4>) const;

    MCNAPI void
    $decorateWorldGenLoadChunk(::Biome const&, ::LevelChunk&, ::BlockVolumeTarget&, ::Random&, ::ChunkPos const&) const;

    MCNAPI void $decorateWorldGenPostProcess(::Biome const&, ::LevelChunk&, ::BlockSource&, ::Random&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
