#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/OceanMonumentPiece.h"
#include "mc/world/level/levelgen/structure/StructurePieceType.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class BoundingBox;
class Random;
class RoomDefinition;
// clang-format on

class MonumentBuilding : public ::OceanMonumentPiece {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<OceanMonumentPiece>>> mChildPieces;
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<RoomDefinition>>>     mRoomGrid;
    ::ll::TypedStorage<8, 16, std::shared_ptr<RoomDefinition>>                  mSourceRoom;
    ::ll::TypedStorage<8, 16, std::shared_ptr<RoomDefinition>>                  mCoreRoom;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MonumentBuilding();

    virtual ::StructurePieceType getType() const;

    virtual bool postProcess(::BlockSource&, ::Random&, ::BoundingBox const&);

    virtual void postProcessMobsAt(::BlockSource&, ::Random&, ::BoundingBox const&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MonumentBuilding(::Random&, short, int, int, int&);

    MCNAPI void generateWing(bool, int, ::BlockSource&, ::Random&, ::BoundingBox const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Random&, short, int, int, int&);
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

    MCNAPI void $postProcessMobsAt(::BlockSource&, ::Random&, ::BoundingBox const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
