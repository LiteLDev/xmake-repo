#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StrongholdPiece.h"
#include "mc/world/level/levelgen/structure/StructurePieceType.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class BoundingBox;
class Random;
class StructurePiece;
// clang-format on

class SHFiveCrossing : public ::StrongholdPiece {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> leftHigh;
    ::ll::TypedStorage<1, 1, bool> leftLow;
    ::ll::TypedStorage<1, 1, bool> rightHigh;
    ::ll::TypedStorage<1, 1, bool> rightLow;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SHFiveCrossing();

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
