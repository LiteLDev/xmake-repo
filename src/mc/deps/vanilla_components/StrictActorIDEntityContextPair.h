#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/StrictEntityContext.h"
#include "mc/legacy/ActorUniqueID.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class EntityContext;
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
struct StrictActorIDEntityContextPair {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::StrictEntityContext> mEntity;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>       mActorID;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    StrictActorIDEntityContextPair& operator=(StrictActorIDEntityContextPair const&);
#else // @header-generator platform
#endif // @header-generator platform
};
