#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockType;
class IConstBlockSource;
struct TickingSystemWithInfo;
// clang-format on

class BlockClimberSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool
    canBlockBeAscendedByJumping(::BlockType const&, ::IConstBlockSource const&, ::BlockPos const&, bool, bool, bool);

    MCNAPI static ::TickingSystemWithInfo createSystem();
    // NOLINTEND
};
