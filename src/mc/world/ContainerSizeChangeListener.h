#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ContainerSizeChangeListener {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual void containerSizeChanged(int) = 0;
#else // @header-generator platform
    virtual void containerSizeChanged(int size) = 0;
#endif // @header-generator platform

    virtual ~ContainerSizeChangeListener() = default;
    // NOLINTEND
};
