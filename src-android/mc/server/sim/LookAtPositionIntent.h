#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/sim/ExecutionResult.h"

// auto generated forward declare list
// clang-format off
class SimulatedPlayer;
// clang-format on

namespace sim {

struct LookAtPositionIntent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>> mPosition;
    ::ll::TypedStorage<4, 4, int>                                      mCountdown;
    // NOLINTEND

public:
    // prevent constructor by default
    LookAtPositionIntent& operator=(LookAtPositionIntent const&);
    LookAtPositionIntent();
};

} // namespace sim
