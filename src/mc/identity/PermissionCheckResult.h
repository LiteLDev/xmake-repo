#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/identity/PermissionDenyReason.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace Social {

struct PermissionCheckResult {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, ::Social::PermissionDenyReason> DenyReasons;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4> mUnk20e2dd;
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // member functions
    // NOLINTBEGIN
    MCNAPI std::vector<Social::PermissionDenyReason> makeDenyReasonList() const;
    // NOLINTEND
#else // @header-generator platform
    // prevent constructor by default
    PermissionCheckResult& operator=(PermissionCheckResult const&);
    PermissionCheckResult(PermissionCheckResult const&);
    PermissionCheckResult();
#endif // @header-generator platform
};

} // namespace Social
