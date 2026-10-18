#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

#if defined(LL_PLAT_A) // @header-generator platform
template <typename T0, int T1, typename T2, bool T3>
#else // @header-generator platform
template <typename T0, int T1, typename T2, int T3>
#endif // @header-generator platform
class MPSCQueue {};

} // namespace Bedrock
