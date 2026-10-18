#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class UIPropertyBag;
// clang-format on

struct SliderChangeEventData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>             id;
    ::ll::TypedStorage<4, 4, int>              index;
    ::ll::TypedStorage<4, 4, float>            value;
    ::ll::TypedStorage<1, 1, bool>             finalized;
    ::ll::TypedStorage<8, 8, ::UIPropertyBag*> properties;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
class UIPropertyBag;
// clang-format on

struct SliderChangeEventData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>             id;
    ::ll::TypedStorage<4, 4, int>              index;
    ::ll::TypedStorage<4, 4, float>            value;
    ::ll::TypedStorage<1, 1, bool>             finalized;
    ::ll::TypedStorage<8, 8, ::UIPropertyBag*> properties;
    // NOLINTEND
};
#else // @header-generator platform
struct SliderChangeEventData {};
#endif // @header-generator platform
#endif // @header-generator platform
