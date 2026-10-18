#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace AgentComponents {

#if defined(LL_PLAT_A) // @header-generator platform
class Agent {};
#else // @header-generator platform
class Agent {
public:
    // Agent inner types declare
    // clang-format off
    class Definition;
    // clang-format on

    // Agent inner types define
    class Definition {};
};
#endif // @header-generator platform

} // namespace AgentComponents
