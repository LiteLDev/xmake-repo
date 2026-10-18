#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/vanilla_components/StrictActorIDEntityContextPair.h"
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
struct StrictActorIDEntityContextPair;
// clang-format on
#endif // @header-generator platform

struct PendingRemovePassengersComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<StrictActorIDEntityContextPair>> mPassengersToRemove;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::StrictActorIDEntityContextPair>> mPassengersToRemove;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    PendingRemovePassengersComponent& operator=(PendingRemovePassengersComponent const&);
#else // @header-generator platform
#endif // @header-generator platform
};
