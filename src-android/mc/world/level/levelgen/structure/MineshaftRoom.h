#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/BoundingBox.h"
#include "mc/world/level/levelgen/structure/MineshaftPiece.h"
#include "mc/world/level/levelgen/structure/StructurePieceType.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class Random;
class StructurePiece;
struct MineshaftData;
// clang-format on

class MineshaftRoom : public ::MineshaftPiece {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<BoundingBox>> childEntranceBoxes;
    // NOLINTEND

public:
    // prevent constructor by default
    MineshaftRoom();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MineshaftRoom();

    virtual void moveBoundingBox(int, int, int);

    virtual ::StructurePieceType getType() const;

    virtual void addChildren(::StructurePiece&, std::vector<std::unique_ptr<StructurePiece>>&, ::Random&);

    virtual bool postProcess(::BlockSource&, ::Random&, ::BoundingBox const&);
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

    MCNAPI bool $postProcess(::BlockSource&, ::Random&, ::BoundingBox const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
