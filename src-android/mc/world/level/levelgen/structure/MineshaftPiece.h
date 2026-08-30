#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/MineshaftData.h"
#include "mc/world/level/levelgen/structure/StructurePiece.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockSource;
class BoundingBox;
class Random;
// clang-format on

class MineshaftPiece : public ::StructurePiece {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::MineshaftData> mMetadata;
    // NOLINTEND

public:
    // prevent constructor by default
    MineshaftPiece();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool isInInvalidLocation(::BlockSource&, ::BoundingBox const&);

    virtual bool canBeReplaced(::BlockSource&, int const, int const, int const, ::BoundingBox const&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::StructurePiece* generateAndAddPiece(
        ::StructurePiece&,
        std::vector<std::unique_ptr<StructurePiece>>&,
        ::Random&,
        int,
        int,
        int,
        int,
        int
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isInInvalidLocation(::BlockSource&, ::BoundingBox const&);

    MCNAPI bool $canBeReplaced(::BlockSource&, int const, int const, int const, ::BoundingBox const&);
    // NOLINTEND
};
