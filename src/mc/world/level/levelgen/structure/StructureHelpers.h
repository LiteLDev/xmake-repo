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
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI static bool createChest(
        ::StructurePiece&    piece,
        ::BlockSource&       region,
        ::BoundingBox const& chunkBB,
        ::Random&            random,
        int                  x,
        int                  y,
        int                  z,
        uchar                direction,
        ::std::string const& lootTable
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI static bool createDispenser(
        ::StructurePiece&    piece,
        ::BlockSource&       region,
        ::BoundingBox const& chunkBB,
        ::Random&            random,
        int                  x,
        int                  y,
        int                  z,
        int                  facing,
        ::std::string const& lootTable
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI static bool createMinecartChest(
        ::StructurePiece&    piece,
        ::BlockSource&       region,
        ::BoundingBox const& chunkBB,
        ::Random&            random,
        int                  x,
        int                  y,
        int                  z,
        int                  direction,
        ::std::string const& lootTable
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void
    fillColumnDown(::StructurePiece&, ::BlockSource&, ::Block const&, int, int, int, ::BoundingBox const&);
#else // @header-generator platform
    MCAPI static void fillColumnDown(
        ::StructurePiece&    piece,
        ::BlockSource&       region,
        ::Block const&       block,
        int                  x,
        int                  startY,
        int                  z,
        ::BoundingBox const& chunkBB
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static int getDirectionRotation(int, ushort);
#else // @header-generator platform
    MCAPI static int getDirectionRotation(int structureOrientation, ushort inOrientation);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static int getDoorRotation(int, ushort);
#else // @header-generator platform
    MCAPI static int getDoorRotation(int structureOrientation, ushort inOrientation);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static int getFacingDirectionRotation(int, ushort);
#else // @header-generator platform
    MCAPI static int getFacingDirectionRotation(int structureOrientation, ushort inOrientation);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static int getTorchRotation(int, ushort);
#else // @header-generator platform
    MCAPI static int getTorchRotation(int structureOrientation, ushort torchOrientation);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static int getWeirdoDirectionRotation(int, ushort);
#else // @header-generator platform
    MCAPI static int getWeirdoDirectionRotation(int structureOrientation, ushort inOrientation);
#endif // @header-generator platform
    // NOLINTEND
};
