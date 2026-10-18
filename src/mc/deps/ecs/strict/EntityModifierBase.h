#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class EntityRegistry;
// clang-format on

class EntityModifierBase {
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
    EntityModifierBase& operator=(EntityModifierBase const&);
    EntityModifierBase(EntityModifierBase const&);
    EntityModifierBase();
#else // @header-generator platform
#endif // @header-generator platform
};
