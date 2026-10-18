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
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<2, 2, ::Bedrock::EnumSet<::NeighborDirection, 14>> mDirections;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::NeighborBlockDirections all();

    MCNAPI static ::NeighborBlockDirections createFromRelativePosition(::BlockPos const&, ::BlockPos const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
#else // @header-generator platform
    MCAPI static ::NeighborBlockDirections
    createFromRelativePosition(::BlockPos const& pos, ::BlockPos const& neighborPos);
#endif // @header-generator platform
    // NOLINTEND
};
