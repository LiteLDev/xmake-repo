#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class EntityFactory;
#else // @header-generator platform
#endif // @header-generator platform
class EntityRegistry;
#if defined(LL_PLAT_A) // @header-generator platform
class StrictEntityContext;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class StrictExecutionContextBase {
public:
    // StrictExecutionContextBase inner types define
    using InstanceID = void const*;

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::gsl::not_null<EntityRegistry*>> mRegistry;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::EntityRegistry*>> mRegistry;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    StrictExecutionContextBase();
#else // @header-generator platform
#endif // @header-generator platform
};
