#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/ecs/strict/StrictEntityContext.h"

// auto generated forward declare list
// clang-format off
class EntityId;
class EntityRegistry;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

class StrictEntityContextOwner {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 8, ::StrictEntityContext> mContext;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 8> mUnk1ae557;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    StrictEntityContextOwner& operator=(StrictEntityContextOwner const&);
    StrictEntityContextOwner(StrictEntityContextOwner const&);
    StrictEntityContextOwner();
#endif // @header-generator platform
};
