#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/agent/agent_components/Direction.h"

namespace AgentComponents::Actions {

struct Till {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::AgentComponents::Direction> dir;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                 item;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>               item;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    Till();
#else // @header-generator platform
#endif // @header-generator platform
};

} // namespace AgentComponents::Actions
