#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/world/containers/ContainerEnumName.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace GameplayUI {

#if defined(LL_PLAT_C) // @header-generator platform
struct ContainerSlot {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::ContainerEnumName> container;
    ::ll::TypedStorage<4, 4, int>                 slot;
    // NOLINTEND
};
#else // @header-generator platform
struct ContainerSlot {};
#endif // @header-generator platform

} // namespace GameplayUI
#endif // @header-generator platform
