#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/StrictEntityContext.h"

struct SpinAttackResultsComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<StrictEntityContext>> mEntities;
    // NOLINTEND

public:
    // prevent constructor by default
    SpinAttackResultsComponent& operator=(SpinAttackResultsComponent const&);
};
