#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/Rotation.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class IntArrayTag;
// clang-format on

class BoundingBox {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::BlockPos> min;
    ::ll::TypedStorage<4, 12, ::BlockPos> max;
    // NOLINTEND

public:
    // prevent constructor by default
    BoundingBox& operator=(BoundingBox const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BoundingBox(::BlockPos const&, ::BlockPos const&, ::Rotation const);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BlockPos const&, ::BlockPos const&, ::Rotation const);
    // NOLINTEND
};
