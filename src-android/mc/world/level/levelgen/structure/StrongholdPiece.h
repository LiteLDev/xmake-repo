#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructurePiece.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class BoundingBox;
class Random;
class SHStartPiece;
// clang-format on

class StrongholdPiece : public ::StructurePiece {
public:
    // StrongholdPiece inner types define
    enum SmallDoorType : uint {
        OPENING   = 0,
        WOOD_DOOR = 1,
        GRATES    = 2,
        IRON_DOOR = 3,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::StrongholdPiece::SmallDoorType> entryDoor;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI std::unique_ptr<StructurePiece> findAndCreatePieceFactory(
        std::string const&,
        std::vector<std::unique_ptr<StructurePiece>>&,
        ::Random&,
        int,
        int,
        int,
        int,
        int
    );

    MCNAPI ::StructurePiece* generateAndAddPiece(
        ::SHStartPiece&,
        std::vector<std::unique_ptr<StructurePiece>>&,
        ::Random&,
        int,
        int,
        int,
        int,
        int
    );

    MCNAPI void
    generateSmallDoor(::BlockSource&, ::Random&, ::BoundingBox const&, ::StrongholdPiece::SmallDoorType, int, int, int);

    MCNAPI ::StructurePiece*
    generateSmallDoorChildForward(::SHStartPiece&, std::vector<std::unique_ptr<StructurePiece>>&, ::Random&, int, int);

    MCNAPI ::StructurePiece*
    generateSmallDoorChildRight(::SHStartPiece&, std::vector<std::unique_ptr<StructurePiece>>&, ::Random&, int, int);
    // NOLINTEND
};
