#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/Rotation.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/actor/ActorDefinitionIdentifier.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/levelgen/structure/BoundingBox.h"
#include "mc/world/level/levelgen/structure/JigsawJunction.h"
#include "mc/world/level/levelgen/structure/StructurePiece.h"
#include "mc/world/level/levelgen/v1/AdjustmentEffect.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockSource;
class BlockVolume;
class ChunkPos;
class Dimension;
class Random;
class StructurePoolElement;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct ActorDefinitionIdentifier;
#endif // @header-generator platform
// clang-format on

class PoolElementStructurePiece : public ::StructurePiece {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 24, ::BoundingBox>                mCachedPieceBounds;
    ::ll::TypedStorage<4, 4, int>                           mCachedPieceBaseY;
    ::ll::TypedStorage<4, 4, int>                           mCachedXCenter;
    ::ll::TypedStorage<4, 4, int>                           mCachedZCenter;
    ::ll::TypedStorage<4, 4, float>                         mCachedMaxRadius;
    ::ll::TypedStorage<8, 8, ::StructurePoolElement const&> mElement;
    ::ll::TypedStorage<4, 12, ::BlockPos>                   mPosition;
    ::ll::TypedStorage<1, 1, ::Rotation>                    mRotation;
    ::ll::TypedStorage<4, 24, ::JigsawJunction>             mJigsawJunction;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, std::unordered_map<BlockPos, std::optional<ActorDefinitionIdentifier>>> mEntitiesToPlace;
    ::ll::TypedStorage<4, 12, ::BlockPos>                                                             mRefPos;
#else // @header-generator platform
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::BlockPos, ::std::optional<::ActorDefinitionIdentifier>>>
                                          mEntitiesToPlace;
    ::ll::TypedStorage<4, 12, ::BlockPos> mRefPos;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    PoolElementStructurePiece(
        ::StructurePoolElement const& element,
        ::BlockPos                    position,
        ::Rotation                    rotation,
        int                           genDepth,
        ::JigsawJunction&             junction,
        ::BoundingBox const&          box,
        ::BlockPos                    refPos
    )
    : mElement(element),
      mPosition(position),
      mRotation(rotation),
      mJigsawJunction(junction),
      mRefPos(refPos) {
        mCachedPieceBaseY = 0;
        mCachedXCenter    = 0;
        mCachedZCenter    = 0;
        mCachedMaxRadius  = 0.0f;
        mBoundingBox      = box;
        mGenDepth         = genDepth;
    }
#endif // @header-generator platform

public:
    // prevent constructor by default
    PoolElementStructurePiece& operator=(PoolElementStructurePiece const&);
    PoolElementStructurePiece(PoolElementStructurePiece const&);
    PoolElementStructurePiece();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~PoolElementStructurePiece();
#else // @header-generator platform
    virtual bool postProcess(::BlockSource& region, ::Random& random, ::BoundingBox const& chunkBB) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void moveBoundingBox(int, int, int);
#else // @header-generator platform
    virtual void postProcessMobsAt(::BlockSource& region, ::Random& random, ::BoundingBox const& chunkBB) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool postProcess(::BlockSource&, ::Random&, ::BoundingBox const&);
#else // @header-generator platform
    virtual void moveBoundingBox(int dx, int dy, int dz) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void postProcessMobsAt(::BlockSource&, ::Random&, ::BoundingBox const&);
#else // @header-generator platform
    virtual int generateHeightAtPosition(
        ::BlockPos const&                                                          pos,
        ::Dimension&                                                               dim,
        ::BlockVolume&                                                             box,
        ::std::unordered_map<::ChunkPos, ::std::unique_ptr<::std::vector<short>>>& chunkHeightCache
    ) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int generateHeightAtPosition(::BlockPos const&, ::Dimension&, ::BlockVolume&, std::unordered_map<ChunkPos, std::unique_ptr<std::vector<short>>>&) const = 0;
#else // @header-generator platform
    virtual ::Block const*
    getSupportBlock(::BlockSource& region, ::BlockPos const& pos, ::Block const& aboveBlock) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Block const* getSupportBlock(::BlockSource&, ::BlockPos const&, ::Block const&) const = 0;

    virtual ::Block const& getBeardStabilizeBlock(::Block const&) const = 0;
#else // @header-generator platform
    virtual ::Block const& getBeardStabilizeBlock(::Block const& foundationBlock) const = 0;
#endif // @header-generator platform

    virtual ::AdjustmentEffect getTerrainAdjustmentEffect() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool _needsPostProcessing(::BlockSource&);
    // clang-format on
    // NOLINTEND
#else // @header-generator platform
    virtual bool _needsPostProcessing(::BlockSource& region);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PoolElementStructurePiece(
        ::StructurePoolElement const&,
        ::BlockPos,
        ::Rotation,
        int,
        ::JigsawJunction&,
        ::BoundingBox const&,
        ::BlockPos
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::StructurePoolElement const&,
        ::BlockPos,
        ::Rotation,
        int,
        ::JigsawJunction&,
        ::BoundingBox const&,
        ::BlockPos
    );
#else // @header-generator platform
    virtual ~PoolElementStructurePiece() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $moveBoundingBox(int, int, int);
#else // @header-generator platform
    MCAPI bool $postProcess(::BlockSource& region, ::Random& random, ::BoundingBox const& chunkBB);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $postProcess(::BlockSource&, ::Random&, ::BoundingBox const&);
#else // @header-generator platform
    MCAPI void $postProcessMobsAt(::BlockSource& region, ::Random& random, ::BoundingBox const& chunkBB);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $postProcessMobsAt(::BlockSource&, ::Random&, ::BoundingBox const&);
#else // @header-generator platform
    MCAPI void $moveBoundingBox(int dx, int dy, int dz);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $_needsPostProcessing(::BlockSource&);
#else // @header-generator platform
    MCFOLD bool $_needsPostProcessing(::BlockSource& region);


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
