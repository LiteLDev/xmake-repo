#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CameraAimAssistSystemUtil {

enum class AimAssistCaptureBlockPosSystemWorkSlice : int {
    ClearResultsAndScanTopHalf      = 0,
    ScanBottomHalfAccumulateResults = 1,
};

}
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
