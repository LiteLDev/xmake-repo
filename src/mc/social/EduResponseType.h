#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

#if defined(LL_PLAT_A) // @header-generator platform
enum class EduResponseType : int {
    FetchServers        = 0,
    JoinServer          = 1,
    AddServer           = 2,
    FetchTenantSettings = 3,
};
#else // @header-generator platform
enum class EduResponseType : int {};
#endif // @header-generator platform

}
