#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/identity/Identity.h"
#include "mc/identity/IdentityType.h"

namespace Social {

class GenericNetworkIdentity : public ::Social::Identity {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~GenericNetworkIdentity() = default;

    virtual ::Social::IdentityType getType() const;

    virtual ::gsl::span<const Social::IdentityType> getDependencies() const;
    // NOLINTEND
};

} // namespace Social
