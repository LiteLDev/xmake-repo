#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/shared_types/VillageType.h"
#include "mc/util/Rotation.h"
#include "mc/world/level/levelgen/structure/PoolElementStructurePiece.h"
#include "mc/world/level/levelgen/v1/AdjustmentEffect.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
class BlockVolume;
class BoundingBox;
class ChunkPos;
class Dimension;
class JigsawStructureRegistry;
class Random;
class StructurePiece;
class StructurePoolElement;
struct JigsawJunction;
// clang-format on

class VillagePiece : public ::PoolElementStructurePiece {
public:
    // prevent constructor by default
    VillagePiece();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~VillagePiece();

    virtual int generateHeightAtPosition(::BlockPos const&, ::Dimension&, ::BlockVolume&, std::unordered_map<ChunkPos, std::unique_ptr<std::vector<short>>>&) const;

    virtual ::Block const* getSupportBlock(::BlockSource&, ::BlockPos const&, ::Block const&) const;

    virtual ::Block const& getBeardStabilizeBlock(::Block const&) const;

    virtual ::AdjustmentEffect getTerrainAdjustmentEffect() const;

    virtual bool _needsPostProcessing(::BlockSource&);
    // clang-format on
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void addPieces(
        ::BlockPos,
        std::vector<std::unique_ptr<StructurePiece>>&,
        ::Random&,
        ::JigsawStructureRegistry&,
        ::SharedTypes::VillageType,
        ::Dimension&
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI int $generateHeightAtPosition(
        ::BlockPos const&,
        ::Dimension&,
        ::BlockVolume&,
        std::unordered_map<ChunkPos, std::unique_ptr<std::vector<short>>>&
    ) const;

    MCNAPI ::Block const* $getSupportBlock(::BlockSource&, ::BlockPos const&, ::Block const&) const;

    MCNAPI ::Block const& $getBeardStabilizeBlock(::Block const&) const;

    MCNAPI ::AdjustmentEffect $getTerrainAdjustmentEffect() const;

    MCNAPI bool $_needsPostProcessing(::BlockSource&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
