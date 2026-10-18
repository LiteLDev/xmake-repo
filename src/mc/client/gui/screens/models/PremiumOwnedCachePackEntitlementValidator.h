#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
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
    virtual bool isEntitlementValid(::IEntitlement const& entitlement) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $isEntitlementValid(::IEntitlement const& entitlement) const;
    // NOLINTEND
};
#else // @header-generator platform
class PremiumOwnedCachePackEntitlementValidator {};
#endif // @header-generator platform
#endif // @header-generator platform
