#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class IEntitlement;
// clang-format on

class IPremiumCachePackEntitlementValidator {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IPremiumCachePackEntitlementValidator();

    virtual bool isEntitlementValid(::IEntitlement const&) const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
