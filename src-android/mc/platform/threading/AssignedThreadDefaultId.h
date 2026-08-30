#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Threading {

enum class AssignedThreadDefaultId : int {
    EMPTY_THREAD_ID   = 0,
    CURRENT_THREAD_ID = 1,
};

}
