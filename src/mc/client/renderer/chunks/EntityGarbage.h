#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/ecs/EntityId.h"

struct EntityGarbage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::EntityId> mEntityId;
    // NOLINTEND

public:
    // prevent constructor by default
    EntityGarbage& operator=(EntityGarbage const&);
    EntityGarbage(EntityGarbage const&);
    EntityGarbage();
};
#else // @header-generator platform
struct EntityGarbage {};
#endif // @header-generator platform
