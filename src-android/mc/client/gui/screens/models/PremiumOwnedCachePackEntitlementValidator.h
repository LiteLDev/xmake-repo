#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/models/IPremiumCachePackEntitlementValidator.h"

// auto generated forward declare list
// clang-format off
class IEntitlement;
// clang-format on

class PremiumOwnedCachePackEntitlementValidator : public ::IPremiumCachePackEntitlementValidator {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PremiumOwnedCachePackEntitlementValidator();

    virtual bool isEntitlementValid(::IEntitlement const&) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isEntitlementValid(::IEntitlement const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
