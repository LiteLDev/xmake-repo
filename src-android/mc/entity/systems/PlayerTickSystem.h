#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct TickingSystemWithInfo;
// clang-format on

struct PlayerTickSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::TickingSystemWithInfo create(bool);

    MCNAPI static ::TickingSystemWithInfo createAddMovementTickNeededForCatchupSystem();
    // NOLINTEND
};
