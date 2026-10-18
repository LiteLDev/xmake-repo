#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/vanilla_components/StrictActorIDEntityContextPair.h"

struct PushedByComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::StrictActorIDEntityContextPair> mPushedBy;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    PushedByComponent& operator=(PushedByComponent const&);
#else // @header-generator platform
#endif // @header-generator platform
};
