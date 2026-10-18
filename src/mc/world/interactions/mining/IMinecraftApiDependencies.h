#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Interactions::Mining {

class IMinecraftApiDependencies {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~IMinecraftApiDependencies();
#else // @header-generator platform
    virtual ~IMinecraftApiDependencies() = default;
#endif // @header-generator platform

    virtual void finishMiningHook() = 0;
#if defined(LL_PLAT_A) // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Interactions::Mining
