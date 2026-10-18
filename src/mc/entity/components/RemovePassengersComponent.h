#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/ecs/strict/StrictEntityContext.h"
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
class StrictEntityContext;
// clang-format on
#endif // @header-generator platform

struct RemovePassengersComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<StrictEntityContext>> mPassengersToRemove;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::StrictEntityContext>> mPassengersToRemove;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    RemovePassengersComponent& operator=(RemovePassengersComponent const&);
#else // @header-generator platform
#endif // @header-generator platform
};
