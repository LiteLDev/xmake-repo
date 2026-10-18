#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/buffer_span.h"
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
class FixedBiomeSource;
#if defined(LL_PLAT_A) // @header-generator platform
class FlatWorldOptions;
#else // @header-generator platform
#endif // @header-generator platform
class HashedString;
class LevelChunk;
class Random;
namespace Json { class Value; }
// clang-format on

class FlatWorldGenerator : public ::WorldGenerator {
public:
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    // FlatWorldGenerator inner types define
    using LayerList = ::std::vector<::Block const*>;

public:
#endif // @header-generator platform
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<const Block*>>        mPrototypeBlocks;
    ::ll::TypedStorage<8, 40, ::BlockVolume>                    mPrototype;
    ::ll::TypedStorage<1, 1, bool>                              mIsVoidWorld;
    ::ll::TypedStorage<8, 8, ::Biome const*>                    mBiome;
    ::ll::TypedStorage<8, 8, std::unique_ptr<FixedBiomeSource>> mBiomeSource;
    ::ll::TypedStorage<2, 2, short>                             mMaxHeight;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::Block const*>>        mPrototypeBlocks;
    ::ll::TypedStorage<8, 40, ::BlockVolume>                        mPrototype;
    ::ll::TypedStorage<1, 1, bool>                                  mIsVoidWorld;
    ::ll::TypedStorage<8, 8, ::Biome const*>                        mBiome;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::FixedBiomeSource>> mBiomeSource;
    ::ll::TypedStorage<2, 2, short>                                 mMaxHeight;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    FlatWorldGenerator();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~FlatWorldGenerator();
#else // @header-generator platform
    virtual void loadChunk(::LevelChunk& lc, bool forceImmediateReplacementDataLoad) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool structurePostProcessChunk(::ChunkViewSource&);
#else // @header-generator platform
    virtual bool structurePostProcessChunk(::ChunkViewSource&) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool decorationPostProcessChunk(::ChunkViewSource&);
#else // @header-generator platform
    virtual bool decorationPostProcessChunk(::ChunkViewSource& neighborhood) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void loadChunk(::LevelChunk&, bool);
#else // @header-generator platform
    virtual ::HashedString findStructureFeatureTypeAt(::BlockPos const& pos) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::HashedString findStructureFeatureTypeAt(::BlockPos const&);
#else // @header-generator platform
    virtual bool isStructureFeatureTypeAt(::BlockPos const& pos, ::HashedString type) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isStructureFeatureTypeAt(::BlockPos const&, ::HashedString) const;
#else // @header-generator platform
    virtual bool findNearestStructureFeature(
        ::HashedString                  feature,
        ::BlockPos const&               origin,
        ::BlockPos&                     pos,
        bool                            mustBeInNewChunks,
        ::std::optional<::HashedString> biomeTag
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool findNearestStructureFeature(::HashedString, ::BlockPos const&, ::BlockPos&, bool, std::optional<HashedString>);
#else // @header-generator platform
    virtual void
    prepareHeights(::BlockVolume& box, ::ChunkPos const&, ::std::vector<short>* zxHeights, bool) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void garbageCollectBlueprints(::buffer_span<ChunkPos>);
#else // @header-generator platform
    virtual void garbageCollectBlueprints(::buffer_span<::ChunkPos> activeChunks) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void prepareHeights(::BlockVolume&, ::ChunkPos const&, std::vector<short>*, bool);
#else // @header-generator platform
    virtual ::BiomeArea getBiomeArea(::BoundingBox const& area, uint scale) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::BiomeArea getBiomeArea(::BoundingBox const&, uint) const;
#else // @header-generator platform
    virtual ::BlockPos findSpawnPosition() const /*override*/;
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
    virtual void
    decorateWorldGenLoadChunk(::Biome const&, ::LevelChunk&, ::BlockVolumeTarget&, ::Random&, ::ChunkPos const&) const
        /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void decorateWorldGenLoadChunk(::Biome const&, ::LevelChunk&, ::BlockVolumeTarget&, ::Random&, ::ChunkPos const&) const;

    virtual void decorateWorldGenPostProcess(::Biome const&, ::LevelChunk&, ::BlockSource&, ::Random&) const;
    // clang-format on
#else // @header-generator platform
    virtual void decorateWorldGenPostProcess(::Biome const&, ::LevelChunk&, ::BlockSource&, ::Random&) const
        /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI FlatWorldGenerator(::Dimension&, uint, ::Json::Value const&);
#else // @header-generator platform
    MCAPI FlatWorldGenerator(::Dimension& dimension, uint, ::Json::Value const& generationOptionsJSON);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::Dimension&, uint, ::Json::Value const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(::Dimension& dimension, uint, ::Json::Value const& generationOptionsJSON);
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
    MCFOLD bool $structurePostProcessChunk(::ChunkViewSource&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $loadChunk(::LevelChunk&, bool);
#else // @header-generator platform
    MCAPI bool $decorationPostProcessChunk(::ChunkViewSource& neighborhood);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::HashedString $findStructureFeatureTypeAt(::BlockPos const&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCAPI ::HashedString $findStructureFeatureTypeAt(::BlockPos const& pos);
#else // LL_PLAT_C
    MCFOLD ::HashedString $findStructureFeatureTypeAt(::BlockPos const& pos);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isStructureFeatureTypeAt(::BlockPos const&, ::HashedString) const;
#else // @header-generator platform
    MCAPI bool $isStructureFeatureTypeAt(::BlockPos const& pos, ::HashedString type) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool
    $findNearestStructureFeature(::HashedString, ::BlockPos const&, ::BlockPos&, bool, std::optional<HashedString>);
#else // @header-generator platform
    MCAPI bool $findNearestStructureFeature(
        ::HashedString                  feature,
        ::BlockPos const&               origin,
        ::BlockPos&                     pos,
        bool                            mustBeInNewChunks,
        ::std::optional<::HashedString> biomeTag
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $garbageCollectBlueprints(::buffer_span<ChunkPos>);
#else // @header-generator platform
    MCAPI void $prepareHeights(::BlockVolume& box, ::ChunkPos const&, ::std::vector<short>* zxHeights, bool);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $prepareHeights(::BlockVolume&, ::ChunkPos const&, std::vector<short>*, bool);
#else // @header-generator platform
    MCFOLD void $garbageCollectBlueprints(::buffer_span<::ChunkPos> activeChunks);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BiomeArea $getBiomeArea(::BoundingBox const&, uint) const;
#else // @header-generator platform
    MCAPI ::BiomeArea $getBiomeArea(::BoundingBox const& area, uint scale) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BiomeSource const& $getBiomeSource() const;
#else // @header-generator platform
    MCAPI ::BlockPos $findSpawnPosition() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::WorldGenerator::BlockVolumeDimensions $getBlockVolumeDimensions() const;
#else // @header-generator platform
    MCAPI ::BiomeSource const& $getBiomeSource() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BlockPos $findSpawnPosition() const;
#else // @header-generator platform
    MCAPI ::WorldGenerator::BlockVolumeDimensions $getBlockVolumeDimensions() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void
#else // @header-generator platform
    MCFOLD void
#endif // @header-generator platform
    $decorateWorldGenLoadChunk(::Biome const&, ::LevelChunk&, ::BlockVolumeTarget&, ::Random&, ::ChunkPos const&) const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $decorateWorldGenPostProcess(::Biome const&, ::LevelChunk&, ::BlockSource&, ::Random&) const;
    // NOLINTEND
#else // @header-generator platform
    MCFOLD void $decorateWorldGenPostProcess(::Biome const&, ::LevelChunk&, ::BlockSource&, ::Random&) const;
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
