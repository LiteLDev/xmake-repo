#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/certificates/identity/edu/Role.h"
#else // @header-generator platform
#endif // @header-generator platform

class RoleCheckerCallback {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 48> mCallback;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 64> mUnkd29070;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    RoleCheckerCallback& operator=(RoleCheckerCallback const&);
    RoleCheckerCallback(RoleCheckerCallback const&);
#endif // @header-generator platform
    RoleCheckerCallback();
};
