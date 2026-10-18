#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
template <bool T0, typename T1>
#else // @header-generator platform
template <int T0, typename T1>
#endif // @header-generator platform
class NormalNoiseImpl {};
