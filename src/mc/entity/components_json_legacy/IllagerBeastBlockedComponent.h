#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorDamageSource;
// clang-format on

class IllagerBeastBlockedComponent {
public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void onBlocked(::Actor&, ::ActorDamageSource const&, ::Actor&);
#else // @header-generator platform
    MCAPI void onBlocked(::Actor& owner, ::ActorDamageSource const& source, ::Actor& blocker);
#endif // @header-generator platform
    // NOLINTEND
};
