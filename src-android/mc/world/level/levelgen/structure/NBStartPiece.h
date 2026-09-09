#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/NBBridgeCrossing.h"
#include "mc/world/level/levelgen/structure/PieceWeight.h"
#include "mc/world/level/levelgen/structure/StructurePieceType.h"

// auto generated forward declare list
// clang-format off
class Random;
class StructurePiece;
// clang-format on

class NBStartPiece : public ::NBBridgeCrossing {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                  previousPiece;
    ::ll::TypedStorage<8, 24, std::vector<PieceWeight>>     availableBridgePieces;
    ::ll::TypedStorage<8, 24, std::vector<PieceWeight>>     availableCastlePieces;
    ::ll::TypedStorage<8, 24, std::vector<StructurePiece*>> pendingChildren;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~NBStartPiece();

    virtual ::StructurePieceType getType() const;
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
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
