#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class EntityRegistry;
class StrictEntityContextOwner;
// clang-format on

class EntityFactory {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::gsl::not_null<EntityRegistry*>> mRegistry;
    // NOLINTEND

public:
    // prevent constructor by default
    EntityFactory();
};
