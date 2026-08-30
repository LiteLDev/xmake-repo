#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace EduCloud {

enum class FetchOutcome : int {
    Success   = 0,
    Failure   = 1,
    Cancelled = 2,
};

}
