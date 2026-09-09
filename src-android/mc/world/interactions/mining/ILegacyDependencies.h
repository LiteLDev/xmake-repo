#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Interactions::Mining {

class ILegacyDependencies {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ILegacyDependencies();

    virtual void hurtAndBreak(int) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Interactions::Mining
