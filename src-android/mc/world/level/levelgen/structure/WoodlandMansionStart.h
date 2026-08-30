#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/Rotation.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/levelgen/structure/StructureStart.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockSource;
class BoundingBox;
class ChunkSource;
class Dimension;
class Random;
// clang-format on

class WoodlandMansionStart : public ::StructureStart {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::Rotation>  mRotationGenerated;
    ::ll::TypedStorage<4, 12, ::BlockPos> mPositionGenerated;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WoodlandMansionStart();

    virtual bool postProcess(::BlockSource&, ::Random&, ::BoundingBox const&);

    virtual std::string_view getStructureName() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _makeStairs(::BlockPos const&, ::Block const&, uchar, uchar, ::BlockSource&, ::BoundingBox const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $postProcess(::BlockSource&, ::Random&, ::BoundingBox const&);

    MCNAPI std::string_view $getStructureName() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
