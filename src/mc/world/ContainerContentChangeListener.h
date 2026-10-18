#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ContainerContentChangeListener {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual void containerContentChanged(int) = 0;
#else // @header-generator platform
    virtual void containerContentChanged(int slot) = 0;
#endif // @header-generator platform

    virtual ~ContainerContentChangeListener() = default;
    // NOLINTEND
};
