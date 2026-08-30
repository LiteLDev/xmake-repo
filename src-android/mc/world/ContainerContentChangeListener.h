#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ContainerContentChangeListener {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void containerContentChanged(int) = 0;

    virtual ~ContainerContentChangeListener() = default;
    // NOLINTEND
};
