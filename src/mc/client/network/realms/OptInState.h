#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Realms {

#if defined(LL_PLAT_A) // @header-generator platform
enum class OptInState : int {
    Opt_In  = 0,
    Opt_Out = 1,
    None    = 2,
};
#else // @header-generator platform
enum class OptInState : int {};
#endif // @header-generator platform

}
