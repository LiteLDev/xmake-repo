#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
class EntityRegistry;
class StrictEntityContextOwner;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

class EntityFactory {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::gsl::not_null<EntityRegistry*>> mRegistry;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnk247dfb;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    EntityFactory& operator=(EntityFactory const&);
    EntityFactory(EntityFactory const&);
#endif // @header-generator platform
    EntityFactory();
};
