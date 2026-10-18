#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/util/Rotation.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/level/levelgen/structure/PoolElementStructurePiece.h"
#include "mc/world/level/levelgen/v1/AdjustmentEffect.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
class BlockVolume;
#if defined(LL_PLAT_A) // @header-generator platform
class BoundingBox;
#else // @header-generator platform
#endif // @header-generator platform
class ChunkPos;
class Dimension;
class JigsawStructureRegistry;
class Random;
class StructurePiece;
#if defined(LL_PLAT_A) // @header-generator platform
class StructurePoolElement;
struct JigsawJunction;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class AncientCityPiece : public ::PoolElementStructurePiece {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    AncientCityPiece();

public:
#else // @header-generator platform
#endif // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~AncientCityPiece();
#else // @header-generator platform
    virtual int generateHeightAtPosition(
        ::BlockPos const&,
        ::Dimension&,
        ::BlockVolume&,
        ::std::unordered_map<::ChunkPos, ::std::unique_ptr<::std::vector<short>>>&
    ) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int generateHeightAtPosition(::BlockPos const&, ::Dimension&, ::BlockVolume&, std::unordered_map<ChunkPos, std::unique_ptr<std::vector<short>>>&) const;
#else // @header-generator platform
    virtual ::Block const* getSupportBlock(::BlockSource&, ::BlockPos const&, ::Block const&) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Block const* getSupportBlock(::BlockSource&, ::BlockPos const&, ::Block const&) const;
#else // @header-generator platform
    virtual ::Block const& getBeardStabilizeBlock(::Block const&) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Block const& getBeardStabilizeBlock(::Block const&) const;

    virtual ::AdjustmentEffect getTerrainAdjustmentEffect() const;
    // clang-format on
#else // @header-generator platform
    virtual ::AdjustmentEffect getTerrainAdjustmentEffect() const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void addPieces(
        ::BlockPos,
        std::vector<std::unique_ptr<StructurePiece>>&,
        ::Random&,
        ::JigsawStructureRegistry&,
        ::Dimension&
#else // @header-generator platform
    MCAPI static void addPieces(
        ::BlockPos                                          position,
        ::std::vector<::std::unique_ptr<::StructurePiece>>& pieces,
        ::Random&                                           random,
        ::JigsawStructureRegistry&                          pools,
        ::Dimension&                                        dimension
#endif // @header-generator platform
    );
#if defined(LL_PLAT_A) // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $generateHeightAtPosition(
#else // @header-generator platform
    MCAPI int $generateHeightAtPosition(
#endif // @header-generator platform
        ::BlockPos const&,
        ::Dimension&,
        ::BlockVolume&,
#if defined(LL_PLAT_A) // @header-generator platform
        std::unordered_map<ChunkPos, std::unique_ptr<std::vector<short>>>&
#else // @header-generator platform
        ::std::unordered_map<::ChunkPos, ::std::unique_ptr<::std::vector<short>>>&
#endif // @header-generator platform
    ) const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Block const* $getSupportBlock(::BlockSource&, ::BlockPos const&, ::Block const&) const;
#else // @header-generator platform
    MCFOLD ::Block const* $getSupportBlock(::BlockSource&, ::BlockPos const&, ::Block const&) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Block const& $getBeardStabilizeBlock(::Block const&) const;
#else // @header-generator platform
    MCAPI ::Block const& $getBeardStabilizeBlock(::Block const&) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::AdjustmentEffect $getTerrainAdjustmentEffect() const;
    // NOLINTEND
#else // @header-generator platform
    MCFOLD ::AdjustmentEffect $getTerrainAdjustmentEffect() const;
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
