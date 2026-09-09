#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockVolume.h"
#include "mc/world/level/levelgen/WorldGenerator.h"

// auto generated forward declare list
// clang-format off
class Biome;
class BiomeArea;
class BiomeSource;
class Block;
class BlockPos;
class BlockSource;
class BlockVolumeTarget;
class BoundingBox;
class ChunkPos;
class ChunkViewSource;
class Dimension;
class LevelChunk;
class PerlinSimplexNoise;
class Random;
// clang-format on

class VoidGenerator : public ::WorldGenerator {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Biome const*>                      mBiome;
    ::ll::TypedStorage<8, 8, std::unique_ptr<BiomeSource>>        mBiomeSource;
    ::ll::TypedStorage<8, 8, std::unique_ptr<PerlinSimplexNoise>> mNoise;
    ::ll::TypedStorage<8, 24, std::vector<const Block*>>          mPrototypeBlocks;
    ::ll::TypedStorage<8, 40, ::BlockVolume>                      mPrototype;
    ::ll::TypedStorage<1, 1, bool>                                mIsLegacyWorld;
    // NOLINTEND

public:
    // prevent constructor by default
    VoidGenerator();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~VoidGenerator();

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
    MCNAPI explicit VoidGenerator(::Dimension&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Dimension&);
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
