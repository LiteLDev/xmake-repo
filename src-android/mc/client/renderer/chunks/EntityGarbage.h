#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
