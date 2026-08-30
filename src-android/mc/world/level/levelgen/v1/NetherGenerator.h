#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/InstancedThreadLocal.h"
#include "mc/util/MultidimensionalArray.h"
#include "mc/util/Random.h"
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
        ::ll::TypedStorage<8, 2544, ::Random>                          random;
        ::ll::TypedStorage<8, 262144, std::array<const Block*, 32768>> blockBuffer;
        // NOLINTEND
    };

    using NoiseBuffer = ::Util::MultidimensionalArray<float, 5, 5, 17>;

public:
    // member variables
    // NOLINTBEGIN
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
    // NOLINTEND

public:
    // prevent constructor by default
    NetherGenerator();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~NetherGenerator();

    virtual bool structurePostProcessChunk(::ChunkViewSource&);

    virtual bool decorationPostProcessChunk(::ChunkViewSource&);

    virtual void loadChunk(::LevelChunk&, bool);

    virtual void prepareHeights(::BlockVolume&, ::ChunkPos const&, std::vector<short>*, bool);

    virtual ::BiomeArea getBiomeArea(::BoundingBox const&, uint) const;

    virtual ::BiomeSource const& getBiomeSource() const;

    virtual ::WorldGenerator::BlockVolumeDimensions getBlockVolumeDimensions() const;

    virtual ::BlockPos findSpawnPosition() const;

    virtual void decorateWorldGenLoadChunk(::Biome const&, ::LevelChunk&, ::BlockVolumeTarget&, ::Random&, ::ChunkPos const&) const;

    virtual void decorateWorldGenPostProcess(::Biome const&, ::LevelChunk&, ::BlockSource&, ::Random&) const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI NetherGenerator(::Dimension&, uint, ::Biome const*);
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

    MCNAPI void $prepareHeights(::BlockVolume&, ::ChunkPos const&, std::vector<short>*, bool);

    MCNAPI ::BiomeArea $getBiomeArea(::BoundingBox const&, uint) const;

    MCNAPI ::BiomeSource const& $getBiomeSource() const;

    MCNAPI ::WorldGenerator::BlockVolumeDimensions $getBlockVolumeDimensions() const;

    MCNAPI ::BlockPos $findSpawnPosition() const;

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
