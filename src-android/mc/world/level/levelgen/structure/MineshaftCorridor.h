#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/MineshaftPiece.h"
#include "mc/world/level/levelgen/structure/StructurePieceType.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
class BlockType;
class BoundingBox;
class Random;
class StructurePiece;
struct MineshaftData;
// clang-format on

class MineshaftCorridor : public ::MineshaftPiece {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> hasRails;
    ::ll::TypedStorage<1, 1, bool> spiderCorridor;
    ::ll::TypedStorage<1, 1, bool> hasPlacedSpider;
    ::ll::TypedStorage<4, 4, int>  numSections;
    // NOLINTEND

public:
    // prevent constructor by default
    MineshaftCorridor();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MineshaftCorridor();

    virtual ::StructurePieceType getType() const;

    virtual void addChildren(::StructurePiece&, std::vector<std::unique_ptr<StructurePiece>>&, ::Random&);

    virtual bool postProcess(::BlockSource&, ::Random&, ::BoundingBox const&);

    virtual void postProcessMobsAt(::BlockSource&, ::Random&, ::BoundingBox const&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _fillPillarDownOrChainUp(::BlockSource&, int const, int const, int const, ::BoundingBox const&);

    MCNAPI void _placeCobWeb(::BlockSource&, ::BoundingBox const&, ::Random&, float, int const, int const, int);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::StructurePieceType $getType() const;

    MCNAPI void $addChildren(::StructurePiece&, std::vector<std::unique_ptr<StructurePiece>>&, ::Random&);

    MCNAPI bool $postProcess(::BlockSource&, ::Random&, ::BoundingBox const&);

    MCNAPI void $postProcessMobsAt(::BlockSource&, ::Random&, ::BoundingBox const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
