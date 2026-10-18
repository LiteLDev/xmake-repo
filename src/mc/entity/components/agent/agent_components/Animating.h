#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace AgentComponents {

class Animating {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, int> ticksRemaining;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4> mUnk6444a2;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    Animating& operator=(Animating const&);
    Animating(Animating const&);
    Animating();
#endif // @header-generator platform
};

} // namespace AgentComponents
