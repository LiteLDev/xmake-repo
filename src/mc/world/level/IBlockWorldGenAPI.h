#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

// auto generated inclusion list
#include "mc/world/level/BlockDataFetchResult.h"
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class Biome;
class Block;
class BlockPos;
class BoundingBox;
class ChunkPos;
class Feature;
class LevelChunk;
class LevelData;
class Pos;
class Random;
class StructureSettings;
class StructureTemplate;
struct WorldGenContext;
// clang-format on

class IBlockWorldGenAPI {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
#else // @header-generator platform
#endif // @header-generator platform
    virtual ~IBlockWorldGenAPI() = default;

    virtual bool canGetChunk() const;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::LevelChunk* getChunk(::ChunkPos const&);
#else // @header-generator platform
    virtual ::LevelChunk* getChunk(::ChunkPos const& pos);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Block const* tryGetLiquidBlock(::BlockPos const&) const = 0;
#else // @header-generator platform
    virtual ::Block const* tryGetLiquidBlock(::BlockPos const& pos) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Block const& getBlock(::BlockPos const&) const = 0;
#else // @header-generator platform
    virtual ::Block const& getBlock(::BlockPos const& pos) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Block const& getBlockNoBoundsCheck(::BlockPos const&) const = 0;
#else // @header-generator platform
    virtual ::Block const& getBlockNoBoundsCheck(::BlockPos const& pos) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Block const& getExtraBlock(::BlockPos const&) const = 0;
#else // @header-generator platform
    virtual ::Block const& getExtraBlock(::BlockPos const& pos) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::gsl::span<const BlockDataFetchResult<Block>> fetchBlocksInBox(::BoundingBox const&, std::function<bool (const Block&)>) = 0;
#else // @header-generator platform
    virtual ::gsl::span<::BlockDataFetchResult<::Block> const>
    fetchBlocksInBox(::BoundingBox const& box, ::std::function<bool(::Block const&)> predicate) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool hasBiomeTag(ulong, ::BlockPos const&) const = 0;
#else // @header-generator platform
    virtual bool hasBiomeTag(uint64 tagNameHash, ::BlockPos const& pos) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool setBlock(::BlockPos const&, ::Block const&, int) = 0;
#else // @header-generator platform
    virtual bool setBlock(::BlockPos const& pos, ::Block const& newBlock, int updateFlags) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool setBlockSimple(::BlockPos const&, ::Block const&) = 0;
#else // @header-generator platform
    virtual bool setBlockSimple(::BlockPos const& pos, ::Block const& block) = 0;
#endif // @header-generator platform

    virtual bool apply() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool placeStructure(::BlockPos const&, ::StructureTemplate&, ::StructureSettings&) = 0;
#else // @header-generator platform
    virtual bool
    placeStructure(::BlockPos const& pos, ::StructureTemplate& structure, ::StructureSettings& settings) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool mayPlace(::BlockPos const&, ::Block const&) const = 0;
#else // @header-generator platform
    virtual bool mayPlace(::BlockPos const& pos, ::Block const& block) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool mayPlacePlacementFilterComponent(::BlockPos const&, ::Block const&) const = 0;
#else // @header-generator platform
    virtual bool mayPlacePlacementFilterComponent(::BlockPos const& pos, ::Block const& block) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canSurvive(::BlockPos const&, ::Block const&) const = 0;
#else // @header-generator platform
    virtual bool canSurvive(::BlockPos const& pos, ::Block const& block) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canBeBuiltOver(::BlockPos const&, ::Block const&) const = 0;
#else // @header-generator platform
    virtual bool canBeBuiltOver(::BlockPos const& pos, ::Block const& block) const = 0;
#endif // @header-generator platform

    virtual short getMaxHeight() const = 0;

    virtual short getMinHeight() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool shimPlaceForOldFeatures(::Feature const&, ::BlockPos const&, ::Random&) const = 0;
#else // @header-generator platform
    virtual bool shimPlaceForOldFeatures(::Feature const& feature, ::BlockPos const& pos, ::Random& random) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual short getHeightmap(int, int) = 0;
#else // @header-generator platform
    virtual short getHeightmap(int x, int z) = 0;
#endif // @header-generator platform

    virtual bool isLegacyLevel() = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Biome const* getBiome(::BlockPos const&) const = 0;
#else // @header-generator platform
    virtual ::Biome const* getBiome(::BlockPos const& pos) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isInBounds(::Pos const&) const = 0;
#else // @header-generator platform
    virtual bool isInBounds(::Pos const& pos) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual short getLocalWaterLevel(::BlockPos const&) const = 0;
#else // @header-generator platform
    virtual short getLocalWaterLevel(::BlockPos const& pos) const = 0;
#endif // @header-generator platform

    virtual ::LevelData const& getLevelData() const = 0;

    virtual ::WorldGenContext const& getContext() = 0;

    virtual void disableBlockSimple() = 0;
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format on
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $canGetChunk() const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::LevelChunk* $getChunk(::ChunkPos const&);
#else // @header-generator platform
    MCNAPI ::LevelChunk* $getChunk(::ChunkPos const& pos);


#endif // @header-generator platform
    // NOLINTEND
};
