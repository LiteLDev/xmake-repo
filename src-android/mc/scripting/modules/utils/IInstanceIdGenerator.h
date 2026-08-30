#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct IInstanceIdGenerator {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IInstanceIdGenerator();

    virtual uint generate() = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
