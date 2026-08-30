#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/Rotation.h"
#include "mc/world/level/ChunkPos.h"
#include "mc/world/level/levelgen/v1/AdjustmentEffect.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockVolume;
class BoundingBox;
class Dimension;
class JigsawBlockInfo;
class JigsawStructureRegistry;
class PoolElementStructurePiece;
class Random;
class StructurePiece;
class StructurePoolElement;
class StructureTemplatePool;
struct JigsawJunction;
// clang-format on

class LegacyJigsawPlacement {
public:
    // LegacyJigsawPlacement inner types define
    using PieceFactory = std::function<std::unique_ptr<PoolElementStructurePiece>(
        const StructurePoolElement&,
        const BlockPos&,
        const Rotation&,
        int,
        JigsawJunction&,
        const BoundingBox&,
        const BlockPos&
    )>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 16> mMaxDepth;
    ::ll::UntypedStorage<8, 48> mFactory;
    ::ll::UntypedStorage<8, 48> mChunkHeightCache;
    // NOLINTEND

public:
    // prevent constructor by default
    LegacyJigsawPlacement();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI LegacyJigsawPlacement(
        int,
        std::function<std::unique_ptr<PoolElementStructurePiece>(
            const StructurePoolElement&,
            const BlockPos&,
            const Rotation&,
            int,
            JigsawJunction&,
            const BoundingBox&,
            const BlockPos&
        )>
    );

    MCNAPI void _addPiece(
        std::vector<std::unique_ptr<StructurePiece>>&,
        ::PoolElementStructurePiece const&,
        ::Random&,
        ::BlockPos const&,
        ::Rotation const&,
        ::JigsawStructureRegistry const&,
        ::Dimension&,
        ::BlockVolume&,
        ::BlockPos const&
    );

    MCNAPI bool _tryPlacingPiece(
        std::vector<std::unique_ptr<StructurePiece>>&,
        ::PoolElementStructurePiece const&,
        ::Random&,
        ::JigsawBlockInfo const&,
        ::BoundingBox const&,
        std::vector<BoundingBox>&,
        ::BlockPos const&,
        ::StructureTemplatePool const*,
        ::JigsawStructureRegistry const&,
        ::Dimension&,
        ::BlockVolume&,
        ::BlockPos const&
    );

    MCNAPI void addPieces(
        std::vector<std::unique_ptr<StructurePiece>>&,
        ::StructurePoolElement const&,
        ::Random&,
        ::BlockPos const&,
        ::Rotation const&,
        ::JigsawStructureRegistry const&,
        ::Dimension&
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        int,
        std::function<std::unique_ptr<PoolElementStructurePiece>(
            const StructurePoolElement&,
            const BlockPos&,
            const Rotation&,
            int,
            JigsawJunction&,
            const BoundingBox&,
            const BlockPos&
        )>
    );
    // NOLINTEND
};
