#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/WorldChangeTransaction.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/world/level/BlockDataFetchResult.h"
#endif // @header-generator platform
#include "mc/world/level/IBlockWorldGenAPI.h"

// auto generated forward declare list
// clang-format off
class Biome;
class Block;
class BlockPos;
class BoundingBox;
class Feature;
class LevelData;
class Pos;
class Random;
class StructureSettings;
class StructureTemplate;
struct WorldGenContext;
// clang-format on

class TransactionalWorldBlockTarget : public ::IBlockWorldGenAPI {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::WorldChangeTransaction> mTransaction;
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    TransactionalWorldBlockTarget();

public:
#else // @header-generator platform
#endif // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~TransactionalWorldBlockTarget();
#else // @header-generator platform
    virtual ~TransactionalWorldBlockTarget() /*override*/ = default;
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
    virtual bool shimPlaceForOldFeatures(::Feature const&, ::BlockPos const&, ::Random&) const /*override*/;
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
    MCNAPI explicit TransactionalWorldBlockTarget(::IBlockWorldGenAPI&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::IBlockWorldGenAPI&);
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
    MCFOLD ::Block const& $getExtraBlock(::BlockPos const& pos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Block const& $getExtraBlock(::BlockPos const&) const;
#else // @header-generator platform
    MCFOLD ::Block const* $tryGetLiquidBlock(::BlockPos const& pos) const;
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
    MCFOLD bool $setBlockSimple(::BlockPos const& pos, ::Block const& block);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $apply() const;
#else // @header-generator platform
    MCAPI bool $apply() const;
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
    MCFOLD bool $canBeBuiltOver(::BlockPos const& pos, ::Block const& block) const;
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
    MCFOLD bool $shimPlaceForOldFeatures(::Feature const&, ::BlockPos const&, ::Random&) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI short $getHeightmap(int, int);
#else // @header-generator platform
    MCAPI short $getHeightmap(int x, int z);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isLegacyLevel();
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCAPI bool $isLegacyLevel();
#else // LL_PLAT_C
    MCFOLD bool $isLegacyLevel();
#endif
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
    MCAPI ::WorldGenContext const& $getContext();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $disableBlockSimple();
#else // @header-generator platform
    MCFOLD void $disableBlockSimple();


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
