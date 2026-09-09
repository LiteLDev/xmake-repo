#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class ChunkPos;
// clang-format on

class SubChunkPos {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> x;
    ::ll::TypedStorage<4, 4, int> y;
    ::ll::TypedStorage<4, 4, int> z;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit SubChunkPos(::BlockPos const&);

    MCNAPI ulong hashCode() const;

    MCNAPI explicit operator BlockPos() const;

    MCNAPI explicit operator ChunkPos() const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::SubChunkPos const& MAX();

    MCNAPI static ::SubChunkPos const& MIN();

    MCNAPI static ::SubChunkPos const& ONE();

    MCNAPI static ::SubChunkPos const& ZERO();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BlockPos const&);
    // NOLINTEND
};
