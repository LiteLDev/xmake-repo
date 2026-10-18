#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/Direction.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/level/levelgen/structure/BoundingBox.h"
#include "mc/world/level/levelgen/structure/StructurePieceType.h"

// auto generated forward declare list
// clang-format off
class Block;
#if defined(LL_PLAT_A) // @header-generator platform
class BlockPos;
#else // @header-generator platform
#endif // @header-generator platform
class BlockSelector;
class BlockSource;
#if defined(LL_PLAT_A) // @header-generator platform
class ChunkPos;
#else // @header-generator platform
#endif // @header-generator platform
class LevelChunk;
#if defined(LL_PLAT_A) // @header-generator platform
class PieceWeight;
#else // @header-generator platform
#endif // @header-generator platform
class Random;
// clang-format on

class StructurePiece {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 24, ::BoundingBox>         mBoundingBox;
    ::ll::TypedStorage<4, 4, int>                    mOrientation;
    ::ll::TypedStorage<4, 4, int>                    mGenDepth;
    ::ll::TypedStorage<8, 16, std::shared_ptr<bool>> mTerrainAdjustmentToken;
#else // @header-generator platform
    ::ll::TypedStorage<4, 24, ::BoundingBox>           mBoundingBox;
    ::ll::TypedStorage<4, 4, int>                      mOrientation;
    ::ll::TypedStorage<4, 4, int>                      mGenDepth;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<bool>> mTerrainAdjustmentToken;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    StructurePiece();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
#else // @header-generator platform
#endif // @header-generator platform
    virtual ~StructurePiece();

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void moveBoundingBox(int, int, int);
#else // @header-generator platform
    virtual void moveBoundingBox(int dx, int dy, int dz);
#endif // @header-generator platform

    virtual ::StructurePieceType getType() const;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void addChildren(::StructurePiece&, std::vector<std::unique_ptr<StructurePiece>>&, ::Random&);
#else // @header-generator platform
    virtual void addChildren(
        ::StructurePiece&                                   startPiece,
        ::std::vector<::std::unique_ptr<::StructurePiece>>& pieces,
        ::Random&                                           random
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool postProcess(::BlockSource&, ::Random&, ::BoundingBox const&) = 0;
#else // @header-generator platform
    virtual bool postProcess(::BlockSource& region, ::Random& random, ::BoundingBox const& chunkBB) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void postProcessMobsAt(::BlockSource&, ::Random&, ::BoundingBox const&);
#else // @header-generator platform
    virtual void postProcessMobsAt(::BlockSource& region, ::Random& random, ::BoundingBox const& chunkBB);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isInInvalidLocation(::BlockSource&, ::BoundingBox const&);
#else // @header-generator platform
    virtual bool isInInvalidLocation(::BlockSource& region, ::BoundingBox const& chunkBB);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int getWorldX(int, int);
#else // @header-generator platform
    virtual int getWorldX(int x, int z);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int getWorldZ(int, int);
#else // @header-generator platform
    virtual int getWorldZ(int x, int z);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void placeBlock(::BlockSource&, ::Block const&, int, int, int, ::BoundingBox const&);
#else // @header-generator platform
    virtual void
    placeBlock(::BlockSource& region, ::Block const& block, int x, int y, int z, ::BoundingBox const& chunkBB);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canBeReplaced(::BlockSource&, int const, int const, int const, ::BoundingBox const&);
#else // @header-generator platform
    virtual bool
    canBeReplaced(::BlockSource& region, int const x, int const y, int const z, ::BoundingBox const& chunkBB);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void generateBox(::BlockSource&, ::BoundingBox const&, int, int, int, int, int, int, ::Block const&, ::Block const&, bool);
#else // @header-generator platform
    virtual void generateBox(
        ::BlockSource&       region,
        ::BoundingBox const& chunkBB,
        int                  x0,
        int                  y0,
        int                  z0,
        int                  x1,
        int                  y1,
        int                  z1,
        ::Block const&       edgeBlock,
        ::Block const&       fillBlock,
        bool                 skipAir
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void addHardcodedSpawnAreas(::LevelChunk&) const;
    // clang-format on
#else // @header-generator platform
    virtual void addHardcodedSpawnAreas(::LevelChunk& chunk) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BlockPos _getWorldPos(int, int, int);

    MCNAPI void addTerrainAdjustmentToken(std::shared_ptr<bool>);

    MCNAPI void generateAirBox(::BlockSource&, ::BoundingBox const&, int, int, int, int, int, int);

    MCNAPI void generateBox(
        ::BlockSource&,
        ::BoundingBox const&,
        int,
        int,
        int,
        int,
        int,
        int,
        bool,
        ::Random&,
        ::BlockSelector const&
#else // @header-generator platform
    MCAPI void generateBox(
        ::BlockSource&         region,
        ::BoundingBox const&   chunkBB,
        int                    x0,
        int                    y0,
        int                    z0,
        int                    x1,
        int                    y1,
        int                    z1,
        bool                   skipAir,
        ::Random&              random,
        ::BlockSelector const& selector
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void generateMaybeBox(
        ::BlockSource&,
        ::BoundingBox const&,
        ::Random&,
        float,
        int,
        int,
        int,
        int,
        int,
        int,
        ::Block const&,
        ::Block const&,
        bool,
        bool
#else // @header-generator platform
    MCAPI void generateMaybeBox(
        ::BlockSource&       region,
        ::BoundingBox const& chunkBB,
        ::Random&            random,
        float                probability,
        int                  x0,
        int                  y0,
        int                  z0,
        int                  x1,
        int                  y1,
        int                  z1,
        ::Block const&       edgeBlock,
        ::Block const&       fillBlock,
        bool                 skipAir,
        bool                 excludeSky
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void
    generateUpperHalfSphere(::BlockSource&, ::BoundingBox const&, int, int, int, int, int, int, ::Block const&, bool);

    MCNAPI ::Block const& getBlock(::BlockSource&, int, int, int, ::BoundingBox const&);

    MCNAPI ::Direction::Type getOrientation() const;

    MCNAPI ushort getOrientationData(::Block const*, ushort);

    MCNAPI int getWorldY(int);

    MCNAPI bool isAboveGround(int, int, int, ::BlockSource&);

    MCNAPI bool isAir(::BlockSource&, int, int, int, ::BoundingBox const&);

    MCNAPI bool isReplaceableBlock(::Block const&);

    MCNAPI void
    maybeGenerateBlock(::BlockSource&, ::BoundingBox const&, ::Random&, float, int, int, int, ::Block const&);

    MCNAPI void maybeGenerateBlockIfNotFloating(
        ::BlockSource&,
        ::BoundingBox const&,
        ::Random&,
        float,
        int,
        int,
        int,
        ::Block const&
#else // @header-generator platform
    MCAPI void generateUpperHalfSphere(
        ::BlockSource&       region,
        ::BoundingBox const& chunkBB,
        int                  x0,
        int                  y0,
        int                  z0,
        int                  x1,
        int                  y1,
        int                  z1,
        ::Block const&       fillBlock,
        bool                 skipAir
#endif // @header-generator platform
    );
#if defined(LL_PLAT_A) // @header-generator platform
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::StructurePiece*
    findCollisionPiece(std::vector<std::unique_ptr<StructurePiece>> const&, ::BoundingBox const&);
#else // @header-generator platform
    MCAPI ushort getOrientationData(::Block const* block, ushort data);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static int getTotalWeight(std::vector<PieceWeight> const&);
#else // @header-generator platform
    MCAPI bool isReplaceableBlock(::Block const& block);

    MCAPI void maybeGenerateBlockIfNotFloating(
        ::BlockSource&       region,
        ::BoundingBox const& chunkBB,
        ::Random&            random,
        float                probability,
        int                  x,
        int                  y,
        int                  z,
        ::Block const&       block
    );
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
    MCAPI void $moveBoundingBox(int dx, int dy, int dz);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::StructurePieceType $getType() const;
#else // @header-generator platform
    MCFOLD ::StructurePieceType $getType() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $addChildren(::StructurePiece&, std::vector<std::unique_ptr<StructurePiece>>&, ::Random&);

    MCNAPI void $postProcessMobsAt(::BlockSource&, ::Random&, ::BoundingBox const&);

    MCNAPI bool $isInInvalidLocation(::BlockSource&, ::BoundingBox const&);

    MCNAPI int $getWorldX(int, int);

    MCNAPI int $getWorldZ(int, int);

    MCNAPI void $placeBlock(::BlockSource&, ::Block const&, int, int, int, ::BoundingBox const&);

    MCNAPI bool $canBeReplaced(::BlockSource&, int const, int const, int const, ::BoundingBox const&);

    MCNAPI void $generateBox(
        ::BlockSource&,
        ::BoundingBox const&,
        int,
        int,
        int,
        int,
        int,
        int,
        ::Block const&,
        ::Block const&,
        bool
#else // @header-generator platform
    MCFOLD void $addChildren(
        ::StructurePiece&                                   startPiece,
        ::std::vector<::std::unique_ptr<::StructurePiece>>& pieces,
        ::Random&                                           random
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $addHardcodedSpawnAreas(::LevelChunk&) const;
#else // @header-generator platform
    MCFOLD void $postProcessMobsAt(::BlockSource& region, ::Random& random, ::BoundingBox const& chunkBB);

    MCAPI bool $isInInvalidLocation(::BlockSource& region, ::BoundingBox const& chunkBB);

    MCAPI int $getWorldX(int x, int z);

    MCAPI int $getWorldZ(int x, int z);

    MCAPI void
    $placeBlock(::BlockSource& region, ::Block const& block, int x, int y, int z, ::BoundingBox const& chunkBB);

    MCFOLD bool
    $canBeReplaced(::BlockSource& region, int const x, int const y, int const z, ::BoundingBox const& chunkBB);

    MCAPI void $generateBox(
        ::BlockSource&       region,
        ::BoundingBox const& chunkBB,
        int                  x0,
        int                  y0,
        int                  z0,
        int                  x1,
        int                  y1,
        int                  z1,
        ::Block const&       edgeBlock,
        ::Block const&       fillBlock,
        bool                 skipAir
    );

    MCFOLD void $addHardcodedSpawnAreas(::LevelChunk& chunk) const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
