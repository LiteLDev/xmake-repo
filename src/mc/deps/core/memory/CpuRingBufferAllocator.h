#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core {

#if defined(LL_PLAT_A) // @header-generator platform
template <typename T0, int T1, bool T2, typename T3>
#else // @header-generator platform
template <typename T0, int T1, int T2, typename T3>
#endif // @header-generator platform
class CpuRingBufferAllocator {};

} // namespace Core
