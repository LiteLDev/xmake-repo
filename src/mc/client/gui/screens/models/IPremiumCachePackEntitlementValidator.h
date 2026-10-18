#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
class IEntitlement;
// clang-format on

class IPremiumCachePackEntitlementValidator {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IPremiumCachePackEntitlementValidator() = default;

    virtual bool isEntitlementValid(::IEntitlement const& entitlement) const = 0;
    // NOLINTEND
};
#else // @header-generator platform
class IPremiumCachePackEntitlementValidator {};
#endif // @header-generator platform
#endif // @header-generator platform
