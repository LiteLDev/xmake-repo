#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace PositionTrackingDB {

#if defined(LL_PLAT_A) // @header-generator platform
enum class ResultCode : uchar {
    OK            = 0,
#else // @header-generator platform
enum class ResultCode : schar {
    Ok            = 0,
#endif // @header-generator platform
    NotFound      = 1,
    UpdatePending = 2,
    Error         = 3,
};

}
