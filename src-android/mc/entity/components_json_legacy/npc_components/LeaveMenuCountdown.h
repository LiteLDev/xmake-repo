#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"

namespace NpcComponents {

struct LeaveMenuCountdown {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8>                 ticksRemaining;
    ::ll::TypedStorage<1, 24, ::WeakEntityRef> npc;
    // NOLINTEND
};

} // namespace NpcComponents
