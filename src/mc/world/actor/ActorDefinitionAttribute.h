#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/FloatRange.h"

struct ActorDefinitionAttribute {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> name;
    ::ll::TypedStorage<4, 4, float>        min;
    ::ll::TypedStorage<4, 4, float>        max;
    ::ll::TypedStorage<4, 8, ::FloatRange> value;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string> name;
    ::ll::TypedStorage<4, 4, float>          min;
    ::ll::TypedStorage<4, 4, float>          max;
    ::ll::TypedStorage<4, 8, ::FloatRange>   value;
#endif // @header-generator platform
    // NOLINTEND
};
