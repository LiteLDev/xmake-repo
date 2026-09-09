#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::platform {

class ICapabilityQuery {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ICapabilityQuery();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace dragon::platform
