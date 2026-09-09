#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BiomeComponentBase {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BiomeComponentBase();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
