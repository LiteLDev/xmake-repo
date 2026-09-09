#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/Rotation.h"
#include "mc/world/level/levelgen/structure/StructurePiece.h"
#include "mc/world/level/levelgen/structure/StructurePieceType.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class BoundingBox;
class Random;
// clang-format on

class ShipwreckPiece : public ::StructurePiece {
public:
    // prevent constructor by default
    ShipwreckPiece();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ShipwreckPiece();

    virtual ::StructurePieceType getType() const;

    virtual bool postProcess(::BlockSource&, ::Random&, ::BoundingBox const&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<std::string const[20]> STRUCTURE_SHIPWRECK_TYPES();
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

    MCNAPI bool $postProcess(::BlockSource&, ::Random&, ::BoundingBox const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
