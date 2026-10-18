#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

#if defined(LL_PLAT_C) // @header-generator platform
enum class GuestTenantStatus : int {};
#else // @header-generator platform
enum class GuestTenantStatus : int {
    None                           = -1,
    Allowed                        = 0,
    OwnerDisallowed                = 1,
    GuestTenantServersDisabled     = 2,
    GuestTenantCrossTenantDisabled = 3,
    GuestServerRemoved             = 4,
    GuestServerDisabled            = 5,
};
#endif // @header-generator platform

}
#endif // @header-generator platform
