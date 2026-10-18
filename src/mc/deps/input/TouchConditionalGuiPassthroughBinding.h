#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
struct TouchConditionalGuiPassthroughBinding {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>         areaBindingName;
    ::ll::TypedStorage<8, 24, std::string> buttonName;
    ::ll::TypedStorage<4, 4, uint>         conditionBindingName;
    ::ll::TypedStorage<1, 1, bool>         consumeInput;
    // NOLINTEND

public:
    // prevent constructor by default
    TouchConditionalGuiPassthroughBinding();
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct TouchConditionalGuiPassthroughBinding {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>           areaBindingName;
    ::ll::TypedStorage<8, 32, ::std::string> buttonName;
    ::ll::TypedStorage<4, 4, uint>           conditionBindingName;
    ::ll::TypedStorage<1, 1, bool>           consumeInput;
    // NOLINTEND
};
#else // @header-generator platform
struct TouchConditionalGuiPassthroughBinding {};
#endif // @header-generator platform
#endif // @header-generator platform
