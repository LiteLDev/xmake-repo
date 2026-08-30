#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/identity/PermissionDenyReason.h"

namespace Social {

struct PermissionCheckResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::Social::PermissionDenyReason> DenyReasons;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI std::vector<Social::PermissionDenyReason> makeDenyReasonList() const;
    // NOLINTEND
};

} // namespace Social
