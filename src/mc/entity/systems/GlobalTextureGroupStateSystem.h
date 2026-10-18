#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class EntityRegistry;
// clang-format on

class GlobalTextureGroupStateSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool isReloading(::EntityRegistry&);

    MCNAPI static void setIsReloading(::EntityRegistry&, bool);
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
class EntityRegistry;
// clang-format on

class GlobalTextureGroupStateSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool isReloading(::EntityRegistry& registry);

    MCAPI static void setIsReloading(::EntityRegistry& registry, bool isReloading);
    // NOLINTEND
};
#else // @header-generator platform
class GlobalTextureGroupStateSystem {};
#endif // @header-generator platform
#endif // @header-generator platform
