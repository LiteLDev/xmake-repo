#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Realms {

enum class RealmsListError : int {
    None             = 0,
    Unknown          = 1,
    Compatibility    = 2,
    ServiceError     = 3,
    RateLimit        = 4,
    RealmsBan        = 5,
    RealmsSuspension = 6,
    NetworkError     = 7,
    APIUnavailable   = 8,
    InEditorMode     = 9,
};

}
