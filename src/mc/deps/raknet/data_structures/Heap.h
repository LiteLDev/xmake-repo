#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace DataStructures {

#if defined(LL_PLAT_A) // @header-generator platform
template <typename T0, typename T1, bool T2>
#else // @header-generator platform
template <typename T0, typename T1, int T2>
#endif // @header-generator platform
class Heap {};

} // namespace DataStructures
