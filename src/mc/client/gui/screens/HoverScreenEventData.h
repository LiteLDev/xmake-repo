#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class UIPropertyBag;
// clang-format on

struct HoverScreenEventData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::UIPropertyBag*> properties;
    ::ll::TypedStorage<1, 1, bool>             hover;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
class UIPropertyBag;
// clang-format on

struct HoverScreenEventData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::UIPropertyBag*> properties;
    ::ll::TypedStorage<1, 1, bool>             hover;
    // NOLINTEND
};
#else // @header-generator platform
struct HoverScreenEventData {};
#endif // @header-generator platform
#endif // @header-generator platform
