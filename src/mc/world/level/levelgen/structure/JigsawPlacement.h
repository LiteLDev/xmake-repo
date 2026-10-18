#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/StablePriorityQueue.h"
#include "mc/util/Rotation.h"
#include "mc/world/level/ChunkPos.h"
#include "mc/world/level/block/BlockVolume.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/levelgen/structure/BoundingBox.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/level/levelgen/structure/structurepools/alias/PoolAliasBinding.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/levelgen/v1/AdjustmentEffect.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class BoundingBox;
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
    using PieceFactory = std::function<std::unique_ptr<PoolElementStructurePiece>(
        const StructurePoolElement&,
        const BlockPos&,
        const Rotation&,
#else // @header-generator platform
    using PieceFactory = ::std::function<::std::unique_ptr<::PoolElementStructurePiece>(
        ::StructurePoolElement const&,
        ::BlockPos const&,
        ::Rotation const&,
#endif // @header-generator platform
        int,
#if defined(LL_PLAT_A) // @header-generator platform
        JigsawJunction&,
        const BoundingBox&,
        const BlockPos&
#else // @header-generator platform
        ::JigsawJunction&,
        ::BoundingBox const&,
        ::BlockPos const&
#endif // @header-generator platform
    )>;

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, int const> mMaxDepth;
    ::ll::TypedStorage<4, 4, int const> mGlobalContextSize;
    ::ll::TypedStorage<
        8,
        64,
        ::std::function<::std::unique_ptr<::PoolElementStructurePiece>(
            ::StructurePoolElement const&,
            ::BlockPos const&,
            ::Rotation const&,
            int,
            ::JigsawJunction&,
            ::BoundingBox const&,
            ::BlockPos const&
        )> const>
                                                                                  mFactory;
    ::ll::TypedStorage<8, 8, ::std::vector<::std::unique_ptr<::StructurePiece>>&> mPieceList;
    ::ll::TypedStorage<8, 8, ::Random&>                                           mRandom;
    ::ll::TypedStorage<8, 8, ::JigsawStructureRegistry const&>                    mPools;
    ::ll::TypedStorage<8, 8, ::Dimension&>                                        mDimension;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::ChunkPos, ::std::unique_ptr<::std::vector<short>>>>
                                                                                           mChunkHeightCache;
    ::ll::TypedStorage<8, 40, ::StablePriorityQueue<::std::function<void()>, ::std::less>> mPlacingQueue;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::pair<::std::vector<::BoundingBox>, ::std::vector<::BoundingBox>>>>
                                                             mContextStack;
    ::ll::TypedStorage<8, 24, ::std::vector<::Block const*>> mBlockBuffer;
    ::ll::TypedStorage<8, 40, ::BlockVolume>                 mBlockBufferBox;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    JigsawPlacement& operator=(JigsawPlacement const&);
    JigsawPlacement(JigsawPlacement const&);
    JigsawPlacement();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI JigsawPlacement(
        ulong,
        ulong,
        std::vector<std::unique_ptr<StructurePiece>>&,
        std::function<std::unique_ptr<PoolElementStructurePiece>(
            const StructurePoolElement&,
            const BlockPos&,
            const Rotation&,
#else // @header-generator platform
    MCAPI JigsawPlacement(
        uint64                                              maxDepth,
        uint64                                              globalContextSize,
        ::std::vector<::std::unique_ptr<::StructurePiece>>& pieceList,
        ::std::function<::std::unique_ptr<::PoolElementStructurePiece>(
            ::StructurePoolElement const&,
            ::BlockPos const&,
            ::Rotation const&,
#endif // @header-generator platform
            int,
#if defined(LL_PLAT_A) // @header-generator platform
            JigsawJunction&,
            const BoundingBox&,
            const BlockPos&
        )>,
        ::Random&,
        ::JigsawStructureRegistry const&,
        ::Dimension&
#else // @header-generator platform
            ::JigsawJunction&,
            ::BoundingBox const&,
            ::BlockPos const&
        )>                                                  factory,
        ::Random&                                           random,
        ::JigsawStructureRegistry const&                    pools,
        ::Dimension&                                        dimension
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _addPiece(
        ::PoolElementStructurePiece const&,
        ::BlockPos const&,
        ::Rotation const&,
        ::BlockPos const&,
        ulong,
        ::PoolAliasBinding::PoolAliasLookup const&
#else // @header-generator platform
    MCAPI void _addPiece(
        ::PoolElementStructurePiece const&         sourcePiece,
        ::BlockPos const&                          position,
        ::Rotation const&                          rotation,
        ::BlockPos const&                          refPos,
        uint64                                     contextDepth,
        ::PoolAliasBinding::PoolAliasLookup const& poolAliasLookup
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _tryPlacingPiece(
        ::PoolElementStructurePiece const&,
        ::BoundingBox const&,
        ::JigsawBlockInfo const&,
        ::BlockPos const&,
        ::StructureTemplatePool const*,
        ::BlockPos const&,
        ulong,
        ::PoolAliasBinding::PoolAliasLookup const&
#else // @header-generator platform
    MCAPI bool _tryPlacingPiece(
        ::PoolElementStructurePiece const&         sourcePiece,
        ::BoundingBox const&                       sourceBB,
        ::JigsawBlockInfo const&                   sourceJigsaw,
        ::BlockPos const&                          attachPos,
        ::StructureTemplatePool const*             targetPool,
        ::BlockPos const&                          refPos,
        uint64                                     contextDepth,
        ::PoolAliasBinding::PoolAliasLookup const& poolAliasLookup
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addPieces(
        ::StructurePoolElement const&,
        ::BlockPos const&,
        ::Rotation const&,
        std::string_view,
        ::PoolAliasBinding::PoolAliasLookup const&
#else // @header-generator platform
    MCAPI void addPieces(
        ::StructurePoolElement const&              initialElement,
        ::BlockPos const&                          startPosition,
        ::Rotation const&                          rotation,
        ::std::string_view                         startAnchorName,
        ::PoolAliasBinding::PoolAliasLookup const& poolAliasLookup
#endif // @header-generator platform
    );
#if defined(LL_PLAT_A) // @header-generator platform

    MCNAPI ~JigsawPlacement();
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(
        ulong,
        ulong,
        std::vector<std::unique_ptr<StructurePiece>>&,
        std::function<std::unique_ptr<PoolElementStructurePiece>(
            const StructurePoolElement&,
            const BlockPos&,
            const Rotation&,
#else // @header-generator platform
    MCAPI void* $ctor(
        uint64                                              maxDepth,
        uint64                                              globalContextSize,
        ::std::vector<::std::unique_ptr<::StructurePiece>>& pieceList,
        ::std::function<::std::unique_ptr<::PoolElementStructurePiece>(
            ::StructurePoolElement const&,
            ::BlockPos const&,
            ::Rotation const&,
#endif // @header-generator platform
            int,
#if defined(LL_PLAT_A) // @header-generator platform
            JigsawJunction&,
            const BoundingBox&,
            const BlockPos&
        )>,
        ::Random&,
        ::JigsawStructureRegistry const&,
        ::Dimension&
#else // @header-generator platform
            ::JigsawJunction&,
            ::BoundingBox const&,
            ::BlockPos const&
        )>                                                  factory,
        ::Random&                                           random,
        ::JigsawStructureRegistry const&                    pools,
        ::Dimension&                                        dimension
#endif // @header-generator platform
    );
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};
