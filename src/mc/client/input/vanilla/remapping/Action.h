#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/input/vanilla/remapping/ActionEnum.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/input/vanilla/remapping/ActionEnum.h"

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace Remapping {

#if defined(LL_PLAT_A) // @header-generator platform
struct Action {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::Remapping::ActionEnum> mAction;
    ::ll::TypedStorage<8, 8, char const*>             mActionName;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct Action {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::Remapping::ActionEnum> mAction;
    ::ll::TypedStorage<8, 8, char const*>             mActionName;
    // NOLINTEND
};
#else // @header-generator platform
struct Action {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace Remapping
