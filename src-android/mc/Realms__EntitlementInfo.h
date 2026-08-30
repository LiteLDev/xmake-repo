#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Realms {

struct EntitlementInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> expirationDate;
    ::ll::TypedStorage<8, 24, std::string> friendlyId;
    ::ll::TypedStorage<8, 8, long>         realmId;
    ::ll::TypedStorage<1, 1, bool>         isActive;
    // NOLINTEND
};

} // namespace Realms
