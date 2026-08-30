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

struct ContinuousLookAtEntityIntent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 24, ::WeakEntityRef> mEntity;
    ::ll::UntypedStorage<1, 8>                 mStopOnMove;
    // NOLINTEND

public:
    // prevent constructor by default
    ContinuousLookAtEntityIntent& operator=(ContinuousLookAtEntityIntent const&);
    ContinuousLookAtEntityIntent();
};

} // namespace sim
