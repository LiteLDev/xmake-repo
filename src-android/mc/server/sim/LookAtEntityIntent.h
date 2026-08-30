#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/server/sim/ExecutionResult.h"

// auto generated forward declare list
// clang-format off
class SimulatedPlayer;
// clang-format on

namespace sim {

struct LookAtEntityIntent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 24, ::WeakEntityRef> mEntity;
    ::ll::UntypedStorage<4, 8>                 mCountdown;
    // NOLINTEND

public:
    // prevent constructor by default
    LookAtEntityIntent& operator=(LookAtEntityIntent const&);
    LookAtEntityIntent();
};

} // namespace sim
