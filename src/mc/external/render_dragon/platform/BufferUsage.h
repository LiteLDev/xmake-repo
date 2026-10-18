#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::platform {

#if defined(LL_PLAT_A) // @header-generator platform
enum class BufferUsage : int {
    UnboundedRange        = 0,
    AccelerationStructure = 1,
};
#else // @header-generator platform
enum class BufferUsage : int {};
#endif // @header-generator platform

}
