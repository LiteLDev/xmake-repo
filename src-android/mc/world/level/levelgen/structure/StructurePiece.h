#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/Direction.h"
#include "mc/world/level/levelgen/structure/BoundingBox.h"
#include "mc/world/level/levelgen/structure/StructurePieceType.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSelector;
class BlockSource;
class ChunkPos;
class LevelChunk;
class PieceWeight;
class Random;
// clang-format on

class StructurePiece {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 24, ::BoundingBox>         mBoundingBox;
    ::ll::TypedStorage<4, 4, int>                    mOrientation;
    ::ll::TypedStorage<4, 4, int>                    mGenDepth;
    ::ll::TypedStorage<8, 16, std::shared_ptr<bool>> mTerrainAdjustmentToken;
    // NOLINTEND

public:
    // prevent constructor by default
    StructurePiece();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~StructurePiece();

    virtual void moveBoundingBox(int, int, int);

    virtual ::StructurePieceType getType() const;

    virtual void addChildren(::StructurePiece&, std::vector<std::unique_ptr<StructurePiece>>&, ::Random&);

    virtual bool postProcess(::BlockSource&, ::Random&, ::BoundingBox const&) = 0;

    virtual void postProcessMobsAt(::BlockSource&, ::Random&, ::BoundingBox const&);

    virtual bool isInInvalidLocation(::BlockSource&, ::BoundingBox const&);

    virtual int getWorldX(int, int);

    virtual int getWorldZ(int, int);

    virtual void placeBlock(::BlockSource&, ::Block const&, int, int, int, ::BoundingBox const&);

    virtual bool canBeReplaced(::BlockSource&, int const, int const, int const, ::BoundingBox const&);

    virtual void generateBox(::BlockSource&, ::BoundingBox const&, int, int, int, int, int, int, ::Block const&, ::Block const&, bool);

    virtual void addHardcodedSpawnAreas(::LevelChunk&) const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
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
    );

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
    );

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
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::StructurePiece*
    findCollisionPiece(std::vector<std::unique_ptr<StructurePiece>> const&, ::BoundingBox const&);

    MCNAPI static int getTotalWeight(std::vector<PieceWeight> const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $moveBoundingBox(int, int, int);

    MCNAPI ::StructurePieceType $getType() const;

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
    );

    MCNAPI void $addHardcodedSpawnAreas(::LevelChunk&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
