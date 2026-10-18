#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace AgentComponents {

class CommandCooldown {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, float> mDelay;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4> mUnk189dff;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    CommandCooldown& operator=(CommandCooldown const&);
    CommandCooldown(CommandCooldown const&);
#endif // @header-generator platform
    CommandCooldown();
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit CommandCooldown(float);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(float);
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};

} // namespace AgentComponents
