#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/Rotation.h"
#include "mc/world/level/ChunkPos.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/levelgen/v1/AdjustmentEffect.h"
#else // @header-generator platform
#endif // @header-generator platform

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
    ::ll::UntypedStorage<4, 16> mMaxDepth;
    ::ll::UntypedStorage<8, 48> mFactory;
    ::ll::UntypedStorage<8, 48> mChunkHeightCache;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, int const> mMaxDepth;
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
        )>>
        mFactory;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::ChunkPos, ::std::unique_ptr<::std::vector<short>>>>
        mChunkHeightCache;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    LegacyJigsawPlacement();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI LegacyJigsawPlacement(
        int,
        std::function<std::unique_ptr<PoolElementStructurePiece>(
            const StructurePoolElement&,
            const BlockPos&,
            const Rotation&,
#else // @header-generator platform
    MCAPI LegacyJigsawPlacement(
        int maxDepth,
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
        )>
#else // @header-generator platform
            ::JigsawJunction&,
            ::BoundingBox const&,
            ::BlockPos const&
        )>  factory
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI void _addPiece(
        ::std::vector<::std::unique_ptr<::StructurePiece>>& pieces,
        ::PoolElementStructurePiece const&                  sourcePiece,
        ::Random&                                           random,
        ::BlockPos const&                                   position,
        ::Rotation const&                                   rotation,
        ::JigsawStructureRegistry const&                    pools,
        ::Dimension&                                        dimension,
        ::BlockVolume&                                      box,
        ::BlockPos const&                                   refPos
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI bool _tryPlacingPiece(
        ::std::vector<::std::unique_ptr<::StructurePiece>>& pieces,
        ::PoolElementStructurePiece const&                  sourcePiece,
        ::Random&                                           random,
        ::JigsawBlockInfo const&                            sourceJigsaw,
        ::BoundingBox const&                                sourceBB,
        ::std::vector<::BoundingBox>&                       sourceInternalBBs,
        ::BlockPos const&                                   attachPos,
        ::StructureTemplatePool const*                      targetPool,
        ::JigsawStructureRegistry const&                    pools,
        ::Dimension&                                        dimension,
        ::BlockVolume&                                      box,
        ::BlockPos const&                                   refPos
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addPieces(
        std::vector<std::unique_ptr<StructurePiece>>&,
        ::StructurePoolElement const&,
        ::Random&,
        ::BlockPos const&,
        ::Rotation const&,
        ::JigsawStructureRegistry const&,
        ::Dimension&
#else // @header-generator platform
    MCAPI void addPieces(
        ::std::vector<::std::unique_ptr<::StructurePiece>>& pieces,
        ::StructurePoolElement const&                       initialElement,
        ::Random&                                           random,
        ::BlockPos const&                                   position,
        ::Rotation const&                                   rotation,
        ::JigsawStructureRegistry const&                    pools,
        ::Dimension&                                        dimension
#endif // @header-generator platform
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(
        int,
        std::function<std::unique_ptr<PoolElementStructurePiece>(
            const StructurePoolElement&,
            const BlockPos&,
            const Rotation&,
#else // @header-generator platform
    MCAPI void* $ctor(
        int maxDepth,
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
        )>
#else // @header-generator platform
            ::JigsawJunction&,
            ::BoundingBox const&,
            ::BlockPos const&
        )>  factory
#endif // @header-generator platform
    );
    // NOLINTEND
};
