#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace World {

class IServerURLResolver {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IServerURLResolver();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace World
