#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/StablePriorityQueue.h"
#include "mc/util/Rotation.h"
#include "mc/world/level/ChunkPos.h"
#include "mc/world/level/block/BlockVolume.h"
#include "mc/world/level/levelgen/structure/BoundingBox.h"
#include "mc/world/level/levelgen/structure/structurepools/alias/PoolAliasBinding.h"
#include "mc/world/level/levelgen/v1/AdjustmentEffect.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
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

class JigsawPlacement {
public:
    // JigsawPlacement inner types define
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
    ::ll::TypedStorage<4, 4, int const>                                                          mMaxDepth;
    ::ll::UntypedStorage<4, 12>                                                                  mGlobalContextSize;
    ::ll::UntypedStorage<8, 48>                                                                  mFactory;
    ::ll::TypedStorage<8, 8, std::vector<std::unique_ptr<StructurePiece>>&>                      mPieceList;
    ::ll::TypedStorage<8, 8, ::Random&>                                                          mRandom;
    ::ll::TypedStorage<8, 8, ::JigsawStructureRegistry const&>                                   mPools;
    ::ll::TypedStorage<8, 8, ::Dimension&>                                                       mDimension;
    ::ll::TypedStorage<8, 40, std::unordered_map<ChunkPos, std::unique_ptr<std::vector<short>>>> mChunkHeightCache;
    ::ll::UntypedStorage<8, 40>                                                                  mPlacingQueue;
    ::ll::TypedStorage<8, 24, std::vector<std::pair<std::vector<BoundingBox>, std::vector<BoundingBox>>>> mContextStack;
    ::ll::TypedStorage<8, 24, std::vector<const Block*>>                                                  mBlockBuffer;
    ::ll::UntypedStorage<8, 48> mBlockBufferBox;
    // NOLINTEND

public:
    // prevent constructor by default
    JigsawPlacement& operator=(JigsawPlacement const&);
    JigsawPlacement(JigsawPlacement const&);
    JigsawPlacement();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI JigsawPlacement(
        ulong,
        ulong,
        std::vector<std::unique_ptr<StructurePiece>>&,
        std::function<std::unique_ptr<PoolElementStructurePiece>(
            const StructurePoolElement&,
            const BlockPos&,
            const Rotation&,
            int,
            JigsawJunction&,
            const BoundingBox&,
            const BlockPos&
        )>,
        ::Random&,
        ::JigsawStructureRegistry const&,
        ::Dimension&
    );

    MCNAPI void _addPiece(
        ::PoolElementStructurePiece const&,
        ::BlockPos const&,
        ::Rotation const&,
        ::BlockPos const&,
        ulong,
        ::PoolAliasBinding::PoolAliasLookup const&
    );

    MCNAPI bool _tryPlacingPiece(
        ::PoolElementStructurePiece const&,
        ::BoundingBox const&,
        ::JigsawBlockInfo const&,
        ::BlockPos const&,
        ::StructureTemplatePool const*,
        ::BlockPos const&,
        ulong,
        ::PoolAliasBinding::PoolAliasLookup const&
    );

    MCNAPI void addPieces(
        ::StructurePoolElement const&,
        ::BlockPos const&,
        ::Rotation const&,
        std::string_view,
        ::PoolAliasBinding::PoolAliasLookup const&
    );

    MCNAPI ~JigsawPlacement();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ulong,
        ulong,
        std::vector<std::unique_ptr<StructurePiece>>&,
        std::function<std::unique_ptr<PoolElementStructurePiece>(
            const StructurePoolElement&,
            const BlockPos&,
            const Rotation&,
            int,
            JigsawJunction&,
            const BoundingBox&,
            const BlockPos&
        )>,
        ::Random&,
        ::JigsawStructureRegistry const&,
        ::Dimension&
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
