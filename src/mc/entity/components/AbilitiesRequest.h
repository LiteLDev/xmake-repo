#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/player/AbilitiesIndex.h"

struct AbilitiesRequest {
public:
    // AbilitiesRequest inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    using Variant = std::variant<bool, float>;
#else // @header-generator platform
    using Variant = ::std::variant<bool, float>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, ::AbilitiesIndex>          mIDToSet;
    ::ll::TypedStorage<4, 8, std::variant<bool, float>> mDesiredValue;
#else // @header-generator platform
    ::ll::TypedStorage<1, 1, ::AbilitiesIndex>            mIDToSet;
    ::ll::TypedStorage<4, 8, ::std::variant<bool, float>> mDesiredValue;
#endif // @header-generator platform
    // NOLINTEND
};
