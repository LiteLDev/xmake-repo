#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/EnumSet.h"
#include "mc/world/level/block/NeighborDirection.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
// clang-format on

class NeighborBlockDirections {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<2, 2> mDirections;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI NeighborBlockDirections();

    MCNAPI bool anySet() const;

    MCNAPI ::NeighborBlockDirections getFlagIntersection(::NeighborBlockDirections const&) const;

    MCNAPI bool isSet(::NeighborDirection) const;

    MCNAPI void set(::NeighborDirection, bool);

    MCNAPI void setAll(bool);

    MCNAPI void setAllCardinalDirections(bool);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::NeighborBlockDirections all();

    MCNAPI static ::NeighborBlockDirections createFromRelativePosition(::BlockPos const&, ::BlockPos const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};
