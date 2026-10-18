#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::JSONObject {

#if defined(LL_PLAT_A) // @header-generator platform
template <bool T0>
#else // @header-generator platform
template <int T0>
#endif // @header-generator platform
class ObjectHelperBase {};

} // namespace Bedrock::JSONObject
