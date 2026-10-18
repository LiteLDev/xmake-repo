#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/definitions/LookedAtDefinition.h"

struct ActorLocationOffsetSchema {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // ActorLocationOffsetSchema inner types define
    using Object = ::LookedAtDefinition::LookAtLocation;

public:
#else // @header-generator platform
#endif // @header-generator platform
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string_view const& NAME();
#else // @header-generator platform
    MCAPI static ::std::string_view const& NAME();
#endif // @header-generator platform
    // NOLINTEND
};
