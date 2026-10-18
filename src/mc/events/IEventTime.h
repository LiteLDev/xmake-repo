#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IEventTime {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~IEventTime();
#else // @header-generator platform
    virtual ~IEventTime() = default;
#endif // @header-generator platform

    virtual double getSecondsSinceLaunch_DEPRECATED() const = 0;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};
