#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ContainerSizeChangeListener {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void containerSizeChanged(int) = 0;

    virtual ~ContainerSizeChangeListener() = default;
    // NOLINTEND
};
