#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::platform {

enum class CapabilitySupport : int {
    None               = 0,
    ApiLimited         = 1,
    PerformanceLimited = 2,
    Full               = 3,
};

}
