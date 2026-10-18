#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/player/persona/ProfileType.h"

namespace persona {

struct ProfileTypeConverter {
public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::persona::ProfileType getProfileTypeFromString(std::string const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI static ::persona::ProfileType getProfileTypeFromString(::std::string const& profileTypeStr);
#endif
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace persona
