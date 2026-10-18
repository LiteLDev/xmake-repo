#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Realms::Stories {

#if defined(LL_PLAT_A) // @header-generator platform
enum class DeletionStatus : int {
    Idle          = 0,
    DeleteComment = 1,
    DeletePost    = 2,
    Dismiss       = 3,
    isDeleting    = 4,
    isDismissing  = 5,
};
#else // @header-generator platform
enum class DeletionStatus : int {};
#endif // @header-generator platform

}
