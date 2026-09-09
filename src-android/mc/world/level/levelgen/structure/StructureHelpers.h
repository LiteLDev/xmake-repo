#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockSource;
class BoundingBox;
class Random;
class StructurePiece;
// clang-format on

class StructureHelpers {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool createChest(
        ::StructurePiece&,
        ::BlockSource&,
        ::BoundingBox const&,
        ::Random&,
        int,
        int,
        int,
        uchar,
        std::string const&
    );

    MCNAPI static bool createDispenser(
        ::StructurePiece&,
        ::BlockSource&,
        ::BoundingBox const&,
        ::Random&,
        int,
        int,
        int,
        int,
        std::string const&
    );

    MCNAPI static bool createMinecartChest(
        ::StructurePiece&,
        ::BlockSource&,
        ::BoundingBox const&,
        ::Random&,
        int,
        int,
        int,
        int,
        std::string const&
    );

    MCNAPI static void
    fillColumnDown(::StructurePiece&, ::BlockSource&, ::Block const&, int, int, int, ::BoundingBox const&);

    MCNAPI static int getDirectionRotation(int, ushort);

    MCNAPI static int getDoorRotation(int, ushort);

    MCNAPI static int getFacingDirectionRotation(int, ushort);

    MCNAPI static int getTorchRotation(int, ushort);

    MCNAPI static int getWeirdoDirectionRotation(int, ushort);
    // NOLINTEND
};
