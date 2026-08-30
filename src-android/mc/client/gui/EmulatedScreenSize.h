#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/platform/UIScalingRules.h"

struct EmulatedScreenSize {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int const>              w;
    ::ll::TypedStorage<4, 4, int const>              h;
    ::ll::TypedStorage<4, 4, ::UIScalingRules const> scalingRules;
    ::ll::TypedStorage<8, 24, std::string const>     desc;
    ::ll::TypedStorage<4, 4, int const>              dpi;
    // NOLINTEND

public:
    // prevent constructor by default
    EmulatedScreenSize();
};
