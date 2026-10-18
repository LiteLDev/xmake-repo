#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::platform {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
class ICapabilityQuery {};
#endif // @header-generator platform

} // namespace dragon::platform
