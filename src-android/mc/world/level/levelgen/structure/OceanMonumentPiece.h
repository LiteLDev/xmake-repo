#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructurePiece.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockSource;
class BoundingBox;
class LevelChunk;
class Random;
class RoomDefinition;
// clang-format on

class OceanMonumentPiece : public ::StructurePiece {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                             mDoFill;
    ::ll::TypedStorage<8, 16, std::shared_ptr<RoomDefinition>> mRoomDefinition;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~OceanMonumentPiece();

    virtual bool postProcess(::BlockSource&, ::Random&, ::BoundingBox const&) = 0;

    virtual void postProcessMobsAt(::BlockSource&, ::Random&, ::BoundingBox const&);

    virtual int getWorldX(int, int);

    virtual int getWorldZ(int, int);

    virtual void addHardcodedSpawnAreas(::LevelChunk&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI OceanMonumentPiece(int, int&, std::shared_ptr<RoomDefinition>, int, int, int);

    MCNAPI void generateDefaultFloor(::BlockSource&, ::BoundingBox const&, int, int, bool);

    MCNAPI void spawnElder(::BlockSource&, ::BoundingBox const&, int, int, int);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static int& mGridroomLeftWingConnectIndex();

    MCNAPI static int& mGridroomRightWingConnectIndex();

    MCNAPI static int& mGridroomSourceIndex();

    MCNAPI static int& mGridroomTopConnectIndex();

    MCNAPI static int const& mLeftWingIndex();

    MCNAPI static int const& mPenthouseIndex();

    MCNAPI static int const& mRightWingIndex();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(int, int&, std::shared_ptr<RoomDefinition>, int, int, int);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $postProcessMobsAt(::BlockSource&, ::Random&, ::BoundingBox const&);

    MCNAPI int $getWorldX(int, int);

    MCNAPI int $getWorldZ(int, int);

    MCNAPI void $addHardcodedSpawnAreas(::LevelChunk&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
