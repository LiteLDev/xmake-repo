#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/IBlockWorldGenAPI.h"
#include "mc/world/level/WorldGenContext.h"
#include "mc/world/level/dimension/DimensionType.h"

// auto generated forward declare list
// clang-format off
class Biome;
class BiomeSource;
class Block;
class BlockPos;
class BlockVolume;
class BoundingBox;
class Feature;
class ILevel;
class LevelData;
class Pos;
class Random;
class StructureSettings;
class StructureTemplate;
// clang-format on

class BlockVolumeTarget : public ::IBlockWorldGenAPI {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::BlockVolume&>       mBlockVolume;
    ::ll::TypedStorage<8, 8, ::BiomeSource const&> mBiomeSource;
    ::ll::TypedStorage<8, 8, ::ILevel&>            mLevel;
    ::ll::UntypedStorage<4, 16>                    mDimensionID;
    ::ll::UntypedStorage<8, 80>                    mWorldGenContext;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockVolumeTarget& operator=(BlockVolumeTarget const&);
    BlockVolumeTarget(BlockVolumeTarget const&);
    BlockVolumeTarget();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~BlockVolumeTarget();

    virtual ::Block const* tryGetLiquidBlock(::BlockPos const&) const;

    virtual ::Block const& getBlock(::BlockPos const&) const;

    virtual ::Block const& getBlockNoBoundsCheck(::BlockPos const&) const;

    virtual ::Block const& getExtraBlock(::BlockPos const&) const;

    virtual ::gsl::span<const BlockDataFetchResult<Block>> fetchBlocksInBox(::BoundingBox const&, std::function<bool (const Block&)>);

    virtual bool hasBiomeTag(ulong, ::BlockPos const&) const;

    virtual bool setBlock(::BlockPos const&, ::Block const&, int);

    virtual bool setBlockSimple(::BlockPos const&, ::Block const&);

    virtual bool apply() const;

    virtual bool placeStructure(::BlockPos const&, ::StructureTemplate&, ::StructureSettings&);

    virtual bool mayPlace(::BlockPos const&, ::Block const&) const;

    virtual bool mayPlacePlacementFilterComponent(::BlockPos const&, ::Block const&) const;

    virtual bool canSurvive(::BlockPos const&, ::Block const&) const;

    virtual bool canBeBuiltOver(::BlockPos const&, ::Block const&) const;

    virtual short getMaxHeight() const;

    virtual short getMinHeight() const;

    virtual bool shimPlaceForOldFeatures(::Feature const&, ::BlockPos const&, ::Random&) const;

    virtual short getHeightmap(int, int);

    virtual bool isLegacyLevel();

    virtual ::Biome const* getBiome(::BlockPos const&) const;

    virtual bool isInBounds(::Pos const&) const;

    virtual short getLocalWaterLevel(::BlockPos const&) const;

    virtual ::LevelData const& getLevelData() const;

    virtual ::WorldGenContext const& getContext();

    virtual void disableBlockSimple();
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI
    BlockVolumeTarget(::BlockVolume&, ::ILevel&, ::BiomeSource const&, ::DimensionType, ::WorldGenContext const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BlockVolume&, ::ILevel&, ::BiomeSource const&, ::DimensionType, ::WorldGenContext const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Block const* $tryGetLiquidBlock(::BlockPos const&) const;

    MCNAPI ::Block const& $getBlock(::BlockPos const&) const;

    MCNAPI ::Block const& $getBlockNoBoundsCheck(::BlockPos const&) const;

    MCNAPI ::Block const& $getExtraBlock(::BlockPos const&) const;

    MCNAPI ::gsl::span<const BlockDataFetchResult<Block>>
    $fetchBlocksInBox(::BoundingBox const&, std::function<bool(const Block&)>);

    MCNAPI bool $hasBiomeTag(ulong, ::BlockPos const&) const;

    MCNAPI bool $setBlock(::BlockPos const&, ::Block const&, int);

    MCNAPI bool $setBlockSimple(::BlockPos const&, ::Block const&);

    MCNAPI bool $apply() const;

    MCNAPI bool $placeStructure(::BlockPos const&, ::StructureTemplate&, ::StructureSettings&);

    MCNAPI bool $mayPlace(::BlockPos const&, ::Block const&) const;

    MCNAPI bool $mayPlacePlacementFilterComponent(::BlockPos const&, ::Block const&) const;

    MCNAPI bool $canSurvive(::BlockPos const&, ::Block const&) const;

    MCNAPI bool $canBeBuiltOver(::BlockPos const&, ::Block const&) const;

    MCNAPI short $getMaxHeight() const;

    MCNAPI short $getMinHeight() const;

    MCNAPI bool $shimPlaceForOldFeatures(::Feature const&, ::BlockPos const&, ::Random&) const;

    MCNAPI short $getHeightmap(int, int);

    MCNAPI bool $isLegacyLevel();

    MCNAPI ::Biome const* $getBiome(::BlockPos const&) const;

    MCNAPI bool $isInBounds(::Pos const&) const;

    MCNAPI short $getLocalWaterLevel(::BlockPos const&) const;

    MCNAPI ::LevelData const& $getLevelData() const;

    MCNAPI ::WorldGenContext const& $getContext();

    MCNAPI void $disableBlockSimple();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
