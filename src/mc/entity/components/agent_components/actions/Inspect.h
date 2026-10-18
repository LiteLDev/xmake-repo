#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/world/actor/agent/agent_components/Direction.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace AgentComponents::Actions {

struct Inspect {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, ::AgentComponents::Direction> dir;
#else // @header-generator platform
    ::ll::UntypedStorage<1, 1> mUnk86463d;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    Inspect& operator=(Inspect const&);
    Inspect(Inspect const&);
    Inspect();
#endif // @header-generator platform
};

} // namespace AgentComponents::Actions
