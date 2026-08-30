#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/ScatteredFeaturePiece.h"
#include "mc/world/level/levelgen/structure/StructurePieceType.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class BoundingBox;
class LevelChunk;
class Random;
// clang-format on

class SwamplandHut : public ::ScatteredFeaturePiece {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mSpawnedWitch;
    // NOLINTEND

public:
    // prevent constructor by default
    SwamplandHut();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SwamplandHut();

    virtual ::StructurePieceType getType() const;

    virtual bool postProcess(::BlockSource&, ::Random&, ::BoundingBox const&);

    virtual void postProcessMobsAt(::BlockSource&, ::Random&, ::BoundingBox const&);

    virtual void addHardcodedSpawnAreas(::LevelChunk&) const;
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

    MCNAPI void $addHardcodedSpawnAreas(::LevelChunk&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
