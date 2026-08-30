#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cohtml::Logging {

enum Severity : uint {
    Trace           = 0,
    Debug           = 1,
    Info            = 2,
    Warning         = 3,
    Error           = 4,
    AssertFailure   = 5,
    Critical        = 5,
    SeveritiesCount = 6,
};

}
