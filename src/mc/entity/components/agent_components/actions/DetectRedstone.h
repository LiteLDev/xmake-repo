#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/world/actor/agent/agent_components/Direction.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace AgentComponents::Actions {

struct DetectRedstone {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, ::AgentComponents::Direction> dir;
#else // @header-generator platform
    ::ll::UntypedStorage<1, 1> mUnke9eba2;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    DetectRedstone& operator=(DetectRedstone const&);
    DetectRedstone(DetectRedstone const&);
    DetectRedstone();
#endif // @header-generator platform
};

} // namespace AgentComponents::Actions
