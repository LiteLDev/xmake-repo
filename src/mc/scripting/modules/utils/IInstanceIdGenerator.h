#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct IInstanceIdGenerator {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~IInstanceIdGenerator();
#else // @header-generator platform
    virtual ~IInstanceIdGenerator() = default;
#endif // @header-generator platform

    virtual uint generate() = 0;
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
