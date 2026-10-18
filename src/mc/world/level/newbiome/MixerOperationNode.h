#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
template <typename T0, typename T1, typename T2, typename T3>
#else // @header-generator platform
template <typename T0, typename T1, typename... T2>
#endif // @header-generator platform
class MixerOperationNode {};
