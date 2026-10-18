#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/world/level/BlockDataFetchResult.h"
#endif // @header-generator platform
#include "mc/world/level/IBlockWorldGenAPI.h"
#include "mc/world/level/WorldGenContext.h"

// auto generated forward declare list
// clang-format off
class Biome;
class Block;
class BlockPos;
class BlockSource;
class BoundingBox;
class ChunkPos;
class Feature;
class LevelChunk;
class LevelData;
class Pos;
class Random;
class StructureSettings;
class StructureTemplate;
// clang-format on

class WorldBlockTarget : public ::IBlockWorldGenAPI {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::BlockSource&> mBlockSource;
    ::ll::UntypedStorage<8, 80>              mWorldGenContext;
    ::ll::UntypedStorage<1, 16>              mBlockSimpleIsAllowed;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::BlockSource&>     mBlockSource;
    ::ll::TypedStorage<8, 80, ::WorldGenContext> mWorldGenContext;
    ::ll::TypedStorage<1, 1, bool>               mBlockSimpleIsAllowed;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    WorldBlockTarget& operator=(WorldBlockTarget const&);
    WorldBlockTarget(WorldBlockTarget const&);
    WorldBlockTarget();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~WorldBlockTarget();
#else // @header-generator platform
    virtual ~WorldBlockTarget() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canGetChunk() const;
#else // @header-generator platform
    virtual bool canGetChunk() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::LevelChunk* getChunk(::ChunkPos const&);
#else // @header-generator platform
    virtual ::LevelChunk* getChunk(::ChunkPos const& pos) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Block const* tryGetLiquidBlock(::BlockPos const&) const;
#else // @header-generator platform
    virtual ::Block const& getBlock(::BlockPos const& pos) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Block const& getBlock(::BlockPos const&) const;
#else // @header-generator platform
    virtual ::Block const& getBlockNoBoundsCheck(::BlockPos const& pos) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Block const& getBlockNoBoundsCheck(::BlockPos const&) const;
#else // @header-generator platform
    virtual ::Block const& getExtraBlock(::BlockPos const& pos) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Block const& getExtraBlock(::BlockPos const&) const;
#else // @header-generator platform
    virtual ::Block const* tryGetLiquidBlock(::BlockPos const& pos) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::gsl::span<const BlockDataFetchResult<Block>> fetchBlocksInBox(::BoundingBox const&, std::function<bool (const Block&)>);
#else // @header-generator platform
    virtual ::gsl::span<::BlockDataFetchResult<::Block> const>
    fetchBlocksInBox(::BoundingBox const& box, ::std::function<bool(::Block const&)> predicate) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool hasBiomeTag(ulong, ::BlockPos const&) const;
#else // @header-generator platform
    virtual bool hasBiomeTag(uint64 tagNameHash, ::BlockPos const& pos) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool setBlock(::BlockPos const&, ::Block const&, int);
#else // @header-generator platform
    virtual bool setBlock(::BlockPos const& pos, ::Block const& newBlock, int updateFlags) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool setBlockSimple(::BlockPos const&, ::Block const&);
#else // @header-generator platform
    virtual bool setBlockSimple(::BlockPos const& pos, ::Block const& block) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool apply() const;
#else // @header-generator platform
    virtual bool apply() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool placeStructure(::BlockPos const&, ::StructureTemplate&, ::StructureSettings&);
#else // @header-generator platform
    virtual bool
    placeStructure(::BlockPos const& pos, ::StructureTemplate& structure, ::StructureSettings& settings) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool mayPlace(::BlockPos const&, ::Block const&) const;
#else // @header-generator platform
    virtual bool mayPlace(::BlockPos const& pos, ::Block const& block) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool mayPlacePlacementFilterComponent(::BlockPos const&, ::Block const&) const;
#else // @header-generator platform
    virtual bool mayPlacePlacementFilterComponent(::BlockPos const& pos, ::Block const& block) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canSurvive(::BlockPos const&, ::Block const&) const;
#else // @header-generator platform
    virtual bool canSurvive(::BlockPos const& pos, ::Block const& block) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canBeBuiltOver(::BlockPos const&, ::Block const&) const;
#else // @header-generator platform
    virtual bool canBeBuiltOver(::BlockPos const& pos, ::Block const& block) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual short getMaxHeight() const;
#else // @header-generator platform
    virtual short getMaxHeight() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual short getMinHeight() const;
#else // @header-generator platform
    virtual short getMinHeight() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool shimPlaceForOldFeatures(::Feature const&, ::BlockPos const&, ::Random&) const;
#else // @header-generator platform
    virtual bool shimPlaceForOldFeatures(::Feature const& feature, ::BlockPos const& pos, ::Random& random) const
        /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual short getHeightmap(int, int);
#else // @header-generator platform
    virtual short getHeightmap(int x, int z) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isLegacyLevel();
#else // @header-generator platform
    virtual bool isLegacyLevel() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Biome const* getBiome(::BlockPos const&) const;
#else // @header-generator platform
    virtual ::Biome const* getBiome(::BlockPos const& pos) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isInBounds(::Pos const&) const;
#else // @header-generator platform
    virtual bool isInBounds(::Pos const& pos) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual short getLocalWaterLevel(::BlockPos const&) const;
#else // @header-generator platform
    virtual short getLocalWaterLevel(::BlockPos const& pos) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::LevelData const& getLevelData() const;
#else // @header-generator platform
    virtual ::LevelData const& getLevelData() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::WorldGenContext const& getContext();
#else // @header-generator platform
    virtual ::WorldGenContext const& getContext() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void disableBlockSimple();
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI WorldBlockTarget(::BlockSource&, ::WorldGenContext const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BlockSource&, ::WorldGenContext const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual void disableBlockSimple() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canGetChunk() const;
#else // @header-generator platform
    MCFOLD bool $canGetChunk() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::LevelChunk* $getChunk(::ChunkPos const&);
#else // @header-generator platform
    MCAPI ::LevelChunk* $getChunk(::ChunkPos const& pos);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Block const* $tryGetLiquidBlock(::BlockPos const&) const;
#else // @header-generator platform
    MCAPI ::Block const& $getBlock(::BlockPos const& pos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Block const& $getBlock(::BlockPos const&) const;
#else // @header-generator platform
    MCFOLD ::Block const& $getBlockNoBoundsCheck(::BlockPos const& pos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Block const& $getBlockNoBoundsCheck(::BlockPos const&) const;
#else // @header-generator platform
    MCAPI ::Block const& $getExtraBlock(::BlockPos const& pos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Block const& $getExtraBlock(::BlockPos const&) const;
#else // @header-generator platform
    MCAPI ::Block const* $tryGetLiquidBlock(::BlockPos const& pos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::gsl::span<const BlockDataFetchResult<Block>>
    $fetchBlocksInBox(::BoundingBox const&, std::function<bool(const Block&)>);
#else // @header-generator platform
    MCAPI ::gsl::span<::BlockDataFetchResult<::Block> const>
    $fetchBlocksInBox(::BoundingBox const& box, ::std::function<bool(::Block const&)> predicate);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $hasBiomeTag(ulong, ::BlockPos const&) const;
#else // @header-generator platform
    MCAPI bool $hasBiomeTag(uint64 tagNameHash, ::BlockPos const& pos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $setBlock(::BlockPos const&, ::Block const&, int);
#else // @header-generator platform
    MCAPI bool $setBlock(::BlockPos const& pos, ::Block const& newBlock, int updateFlags);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $setBlockSimple(::BlockPos const&, ::Block const&);
#else // @header-generator platform
    MCAPI bool $setBlockSimple(::BlockPos const& pos, ::Block const& block);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $apply() const;
#else // @header-generator platform
    MCFOLD bool $apply() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $placeStructure(::BlockPos const&, ::StructureTemplate&, ::StructureSettings&);
#else // @header-generator platform
    MCAPI bool $placeStructure(::BlockPos const& pos, ::StructureTemplate& structure, ::StructureSettings& settings);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $mayPlace(::BlockPos const&, ::Block const&) const;
#else // @header-generator platform
    MCAPI bool $mayPlace(::BlockPos const& pos, ::Block const& block) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $mayPlacePlacementFilterComponent(::BlockPos const&, ::Block const&) const;
#else // @header-generator platform
    MCAPI bool $mayPlacePlacementFilterComponent(::BlockPos const& pos, ::Block const& block) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canSurvive(::BlockPos const&, ::Block const&) const;
#else // @header-generator platform
    MCAPI bool $canSurvive(::BlockPos const& pos, ::Block const& block) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canBeBuiltOver(::BlockPos const&, ::Block const&) const;
#else // @header-generator platform
    MCAPI bool $canBeBuiltOver(::BlockPos const& pos, ::Block const& block) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI short $getMaxHeight() const;
#else // @header-generator platform
    MCAPI short $getMaxHeight() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI short $getMinHeight() const;
#else // @header-generator platform
    MCAPI short $getMinHeight() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $shimPlaceForOldFeatures(::Feature const&, ::BlockPos const&, ::Random&) const;
#else // @header-generator platform
    MCAPI bool $shimPlaceForOldFeatures(::Feature const& feature, ::BlockPos const& pos, ::Random& random) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI short $getHeightmap(int, int);
#else // @header-generator platform
    MCAPI short $getHeightmap(int x, int z);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isLegacyLevel();
#else // @header-generator platform
    MCAPI bool $isLegacyLevel();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Biome const* $getBiome(::BlockPos const&) const;
#else // @header-generator platform
    MCAPI ::Biome const* $getBiome(::BlockPos const& pos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isInBounds(::Pos const&) const;
#else // @header-generator platform
    MCAPI bool $isInBounds(::Pos const& pos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI short $getLocalWaterLevel(::BlockPos const&) const;
#else // @header-generator platform
    MCAPI short $getLocalWaterLevel(::BlockPos const& pos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::LevelData const& $getLevelData() const;
#else // @header-generator platform
    MCAPI ::LevelData const& $getLevelData() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::WorldGenContext const& $getContext();
#else // @header-generator platform
    MCFOLD ::WorldGenContext const& $getContext();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $disableBlockSimple();
#else // @header-generator platform
    MCAPI void $disableBlockSimple();


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
