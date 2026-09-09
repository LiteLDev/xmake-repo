#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/sim/ExecutionResult.h"

// auto generated forward declare list
// clang-format off
class SimulatedPlayer;
// clang-format on

namespace sim {

struct MoveInDirectionIntent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>> mTarget;
    ::ll::TypedStorage<1, 1, bool>                                     mAbsoluteSpace;
    // NOLINTEND

public:
    // prevent constructor by default
    MoveInDirectionIntent& operator=(MoveInDirectionIntent const&);
    MoveInDirectionIntent(MoveInDirectionIntent const&);
    MoveInDirectionIntent();
};

} // namespace sim
