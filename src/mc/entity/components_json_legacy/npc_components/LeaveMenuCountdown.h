#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"

namespace NpcComponents {

struct LeaveMenuCountdown {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<4, 8>                 ticksRemaining;
    ::ll::TypedStorage<1, 24, ::WeakEntityRef> npc;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, int>              ticksRemaining;
    ::ll::TypedStorage<8, 24, ::WeakEntityRef> npc;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace NpcComponents
