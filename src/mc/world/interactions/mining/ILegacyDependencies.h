#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Interactions::Mining {

class ILegacyDependencies {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ILegacyDependencies();
#else // @header-generator platform
    virtual ~ILegacyDependencies() = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void hurtAndBreak(int) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual void hurtAndBreak(int damage) = 0;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Interactions::Mining
