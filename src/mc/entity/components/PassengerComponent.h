#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/vanilla_components/StrictActorIDEntityContextPair.h"

struct PassengerComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::StrictActorIDEntityContextPair> mVehicle;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    PassengerComponent& operator=(PassengerComponent const&);
#else // @header-generator platform
#endif // @header-generator platform
};
