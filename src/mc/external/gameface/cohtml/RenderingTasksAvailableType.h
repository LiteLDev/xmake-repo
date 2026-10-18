#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cohtml {

#if defined(LL_PLAT_A) // @header-generator platform
enum RenderingTasksAvailableType : uint {
    RTA_ViewReadyForRendering  = 0,
    RTA_RenderingSubSystemTask = 1,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class RenderingTasksAvailableType : int {
    ViewReadyForRendering  = 0,
    RenderingSubSystemTask = 1,
};
#else // @header-generator platform
enum class RenderingTasksAvailableType : int {};
#endif // @header-generator platform
#endif // @header-generator platform

}
