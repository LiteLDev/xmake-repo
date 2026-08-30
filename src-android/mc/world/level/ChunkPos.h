#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class Vec3;
// clang-format on

class ChunkPos {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mField_81e930f2;
    // NOLINTEND

public:
    // prevent constructor by default
    ChunkPos(ChunkPos const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ChunkPos(::Vec3 const&);

    MCNAPI ::BlockPos getMiddleBlockPosition(int) const;

    MCNAPI bool isWithinBounds(::ChunkPos const&, ::ChunkPos const&) const;

    MCNAPI ::Vec3 toBlockSpaceVec3(float) const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::ChunkPos const& INVALID();

    MCNAPI static ::ChunkPos const& MAX();

    MCNAPI static ::ChunkPos const& MIN();

    MCNAPI static ::ChunkPos const& ONE();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Vec3 const&);
    // NOLINTEND
};
