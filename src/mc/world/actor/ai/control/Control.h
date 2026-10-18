#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Control {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~Control();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual ~Control() = default;
#endif // @header-generator platform
    // NOLINTEND
};
