#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Connection {

#if defined(LL_PLAT_A) // @header-generator platform
enum class UIReturnTarget : int {
    Default             = 0,
    ThirdPartyServerTab = 1,
};
#else // @header-generator platform
enum class UIReturnTarget : int {};
#endif // @header-generator platform

}
