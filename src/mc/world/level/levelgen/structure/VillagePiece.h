#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/shared_types/VillageType.h"
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

class VillagePiece : public ::PoolElementStructurePiece {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    VillagePiece();

public:
#else // @header-generator platform
#endif // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~VillagePiece();
#else // @header-generator platform
    virtual int generateHeightAtPosition(
        ::BlockPos const&                                                          pos,
        ::Dimension&                                                               dim,
        ::BlockVolume&                                                             box,
        ::std::unordered_map<::ChunkPos, ::std::unique_ptr<::std::vector<short>>>& chunkHeightCache
    ) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int generateHeightAtPosition(::BlockPos const&, ::Dimension&, ::BlockVolume&, std::unordered_map<ChunkPos, std::unique_ptr<std::vector<short>>>&) const;
#else // @header-generator platform
    virtual ::Block const*
    getSupportBlock(::BlockSource& region, ::BlockPos const& pos, ::Block const& aboveBlock) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Block const* getSupportBlock(::BlockSource&, ::BlockPos const&, ::Block const&) const;
#else // @header-generator platform
    virtual ::Block const& getBeardStabilizeBlock(::Block const& foundationBlock) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Block const& getBeardStabilizeBlock(::Block const&) const;
#else // @header-generator platform
    virtual ::AdjustmentEffect getTerrainAdjustmentEffect() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::AdjustmentEffect getTerrainAdjustmentEffect() const;

    virtual bool _needsPostProcessing(::BlockSource&);
    // clang-format on
#else // @header-generator platform
    virtual bool _needsPostProcessing(::BlockSource& region) /*override*/;
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
        ::SharedTypes::VillageType,
        ::Dimension&
#else // @header-generator platform
    MCAPI static void addPieces(
        ::BlockPos                                          position,
        ::std::vector<::std::unique_ptr<::StructurePiece>>& pieces,
        ::Random&                                           random,
        ::JigsawStructureRegistry&                          pools,
        ::SharedTypes::VillageType                          villageType,
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
        ::BlockPos const&,
        ::Dimension&,
        ::BlockVolume&,
        std::unordered_map<ChunkPos, std::unique_ptr<std::vector<short>>>&
#else // @header-generator platform
    MCAPI int $generateHeightAtPosition(
        ::BlockPos const&                                                          pos,
        ::Dimension&                                                               dim,
        ::BlockVolume&                                                             box,
        ::std::unordered_map<::ChunkPos, ::std::unique_ptr<::std::vector<short>>>& chunkHeightCache
#endif // @header-generator platform
    ) const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Block const* $getSupportBlock(::BlockSource&, ::BlockPos const&, ::Block const&) const;
#else // @header-generator platform
    MCAPI ::Block const*
    $getSupportBlock(::BlockSource& region, ::BlockPos const& pos, ::Block const& aboveBlock) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Block const& $getBeardStabilizeBlock(::Block const&) const;
#else // @header-generator platform
    MCAPI ::Block const& $getBeardStabilizeBlock(::Block const& foundationBlock) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::AdjustmentEffect $getTerrainAdjustmentEffect() const;
#else // @header-generator platform
    MCFOLD ::AdjustmentEffect $getTerrainAdjustmentEffect() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $_needsPostProcessing(::BlockSource&);
    // NOLINTEND
#else // @header-generator platform
    MCAPI bool $_needsPostProcessing(::BlockSource& region);
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
