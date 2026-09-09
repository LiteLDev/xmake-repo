#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class EntityFactory;
class EntityRegistry;
class StrictEntityContext;
// clang-format on

class StrictExecutionContextBase {
public:
    // StrictExecutionContextBase inner types define
    using InstanceID = void const*;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::gsl::not_null<EntityRegistry*>> mRegistry;
    // NOLINTEND

public:
    // prevent constructor by default
    StrictExecutionContextBase();
};
