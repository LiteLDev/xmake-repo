#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace PositionTrackingDB {

enum class ResultCode : uchar {
    OK            = 0,
    NotFound      = 1,
    UpdatePending = 2,
    Error         = 3,
};

}
