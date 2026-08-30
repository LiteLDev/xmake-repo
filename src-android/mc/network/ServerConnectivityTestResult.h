#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ServerConnectivityTestResult : int {
    UNKNOWN = 0,
    PASSED  = 1,
    FAILED  = -1,
};
