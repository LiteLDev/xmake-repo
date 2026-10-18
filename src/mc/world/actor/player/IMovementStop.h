#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IMovementStop {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~IMovementStop();
#else // @header-generator platform
    virtual ~IMovementStop() = default;
#endif // @header-generator platform

    virtual bool isRiding() const = 0;

    virtual bool isGliding() const = 0;

    virtual bool hasPassenger() const = 0;

    virtual void stopRiding() = 0;

    virtual void stopGliding() = 0;

    virtual void removeAllPassengers() = 0;
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
