#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/StrictEntityContext.h"

struct RemovePassengersComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<StrictEntityContext>> mPassengersToRemove;
    // NOLINTEND

public:
    // prevent constructor by default
    RemovePassengersComponent& operator=(RemovePassengersComponent const&);
};
