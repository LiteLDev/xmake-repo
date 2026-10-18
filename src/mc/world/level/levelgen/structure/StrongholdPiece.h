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
#if defined(LL_PLAT_A) // @header-generator platform
    enum SmallDoorType : uint {
        OPENING   = 0,
        WOOD_DOOR = 1,
        GRATES    = 2,
        IRON_DOOR = 3,
#else // @header-generator platform
    enum class SmallDoorType : int {
        Opening  = 0,
        WoodDoor = 1,
        Grates   = 2,
        IronDoor = 3,
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::StrongholdPiece::SmallDoorType> entryDoor;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<StructurePiece> findAndCreatePieceFactory(
        std::string const&,
        std::vector<std::unique_ptr<StructurePiece>>&,
        ::Random&,
        int,
        int,
        int,
        int,
        int
#else // @header-generator platform
    MCAPI ::std::unique_ptr<::StructurePiece> findAndCreatePieceFactory(
        ::std::string const&                                pieceClass,
        ::std::vector<::std::unique_ptr<::StructurePiece>>& pieces,
        ::Random&                                           random,
        int                                                 footX,
        int                                                 footY,
        int                                                 footZ,
        int                                                 direction,
        int                                                 depth
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::StructurePiece* generateAndAddPiece(
        ::SHStartPiece&,
        std::vector<std::unique_ptr<StructurePiece>>&,
#else // @header-generator platform
    MCAPI void generateSmallDoor(
        ::BlockSource& region,
#endif // @header-generator platform
        ::Random&,
#if defined(LL_PLAT_A) // @header-generator platform
        int,
        int,
        int,
        int,
        int
#else // @header-generator platform
        ::BoundingBox const&             chunkBB,
        ::StrongholdPiece::SmallDoorType doorType,
        int                              footX,
        int                              footY,
        int                              footZ
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void
    generateSmallDoor(::BlockSource&, ::Random&, ::BoundingBox const&, ::StrongholdPiece::SmallDoorType, int, int, int);
#else // @header-generator platform
    MCAPI ::StructurePiece* generateSmallDoorChildForward(
        ::SHStartPiece&                                     startPiece,
        ::std::vector<::std::unique_ptr<::StructurePiece>>& pieces,
        ::Random&                                           random,
        int                                                 xOff,
        int                                                 yOff
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::StructurePiece*
    generateSmallDoorChildForward(::SHStartPiece&, std::vector<std::unique_ptr<StructurePiece>>&, ::Random&, int, int);
#else // @header-generator platform
    MCAPI ::StructurePiece* generateSmallDoorChildRight(
        ::SHStartPiece&                                     startPiece,
        ::std::vector<::std::unique_ptr<::StructurePiece>>& pieces,
        ::Random&                                           random,
        int                                                 yOff,
        int                                                 zOff
    );
    // NOLINTEND
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::StructurePiece*
    generateSmallDoorChildRight(::SHStartPiece&, std::vector<std::unique_ptr<StructurePiece>>&, ::Random&, int, int);
#else // @header-generator platform
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::StructurePiece* generateAndAddPiece(
        ::SHStartPiece&                                     startPiece,
        ::std::vector<::std::unique_ptr<::StructurePiece>>& pieces,
        ::Random&                                           random,
        int                                                 footX,
        int                                                 footY,
        int                                                 footZ,
        int                                                 direction,
        int                                                 depth
    );
#endif // @header-generator platform
    // NOLINTEND
};
