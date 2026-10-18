#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_20_60 {

struct IBiomeJsonComponent {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~IBiomeJsonComponent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual ~IBiomeJsonComponent() = default;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_60
