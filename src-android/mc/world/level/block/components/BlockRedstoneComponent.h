#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
// clang-format on

struct BlockRedstoneComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mRedstoneConductor;
    ::ll::TypedStorage<1, 1, bool> mAllowsWireToStepDown;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool const allowsWireToStepDown(::Block const&);

    MCNAPI static bool const isRedstoneConductor(::Block const&);
    // NOLINTEND
};
