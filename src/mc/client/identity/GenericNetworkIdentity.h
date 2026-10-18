#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/identity/Identity.h"
#include "mc/identity/IdentityType.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace Social {

#if defined(LL_PLAT_A) // @header-generator platform
class GenericNetworkIdentity : public ::Social::Identity {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~GenericNetworkIdentity() = default;

    virtual ::Social::IdentityType getType() const;

    virtual ::gsl::span<const Social::IdentityType> getDependencies() const;
    // NOLINTEND
};
#else // @header-generator platform
class GenericNetworkIdentity {};
#endif // @header-generator platform

} // namespace Social
