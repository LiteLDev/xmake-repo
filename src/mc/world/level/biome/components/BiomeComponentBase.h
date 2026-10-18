#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BiomeComponentBase {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~BiomeComponentBase();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual ~BiomeComponentBase() = default;
#endif // @header-generator platform
    // NOLINTEND
};
