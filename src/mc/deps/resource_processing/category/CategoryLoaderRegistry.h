#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Resources {

#if defined(LL_PLAT_A) // @header-generator platform
template <typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
#else // @header-generator platform
template <typename T0, int T1, int T2, int T3, int T4, int T5, int T6>
#endif // @header-generator platform
class CategoryLoaderRegistry {};

} // namespace Bedrock::Resources
