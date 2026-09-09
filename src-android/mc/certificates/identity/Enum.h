#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Identity::_TokenRefreshState {

enum Enum : uint {
    NO_ACTION = 0,
    REFRESH   = 1,
    FAILED    = 2,
};

}
