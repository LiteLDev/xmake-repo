#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/facing/Name.h"
#include "mc/world/level/ChunkLocalHeight.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class Pos;
// clang-format on

class ChunkBlockPos {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, uchar>              x;
    ::ll::TypedStorage<1, 1, uchar>              z;
    ::ll::TypedStorage<2, 2, ::ChunkLocalHeight> y;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ChunkBlockPos(::BlockPos const&, short);

    MCNAPI ChunkBlockPos(uchar, ::ChunkLocalHeight, uchar);

    MCNAPI ::ChunkBlockPos above() const;

    MCNAPI ::Pos toPos() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::ChunkBlockPos from2D(uchar, uchar);

    MCNAPI static ::ChunkBlockPos fromLegacyIndex(ushort);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BlockPos const&, short);

    MCNAPI void* $ctor(uchar, ::ChunkLocalHeight, uchar);
    // NOLINTEND
};
