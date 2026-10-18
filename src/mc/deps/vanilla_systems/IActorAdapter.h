#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
// clang-format on

namespace VanillaSystems {

class IActorAdapter {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~IActorAdapter();
#else // @header-generator platform
    virtual ~IActorAdapter() = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void dropHangingActor(::StrictEntityContext const&) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual void dropHangingActor(::StrictEntityContext const& entity) = 0;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace VanillaSystems
