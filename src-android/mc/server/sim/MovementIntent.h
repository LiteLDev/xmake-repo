#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/sim/ExecutionResult.h"
#include "mc/server/sim/MoveInDirectionIntent.h"
#include "mc/server/sim/MoveToPositionIntent.h"
#include "mc/server/sim/NavigateToEntityIntent.h"
#include "mc/server/sim/NavigateToPositionsIntent.h"
#include "mc/server/sim/VoidMoveIntent.h"

// auto generated forward declare list
// clang-format off
class SimulatedPlayer;
// clang-format on

namespace sim {

struct MovementIntent {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 48, std::variant<sim::VoidMoveIntent, sim::MoveInDirectionIntent, sim::MoveToPositionIntent, sim::NavigateToPositionsIntent, sim::NavigateToEntityIntent>> mType;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    MovementIntent& operator=(MovementIntent const&);
    MovementIntent(MovementIntent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~MovementIntent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace sim
