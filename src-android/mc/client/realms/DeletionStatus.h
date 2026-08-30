#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Realms::Stories {

enum class DeletionStatus : int {
    Idle          = 0,
    DeleteComment = 1,
    DeletePost    = 2,
    Dismiss       = 3,
    isDeleting    = 4,
    isDismissing  = 5,
};

}
