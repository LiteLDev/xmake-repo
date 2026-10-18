#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/world/actor/agent/agent_components/Direction.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace AgentComponents::Actions {

struct Move {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, ::AgentComponents::Direction> dir;
#else // @header-generator platform
    ::ll::UntypedStorage<1, 1> mUnk430bde;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    Move& operator=(Move const&);
    Move(Move const&);
    Move();
#endif // @header-generator platform
};

} // namespace AgentComponents::Actions
