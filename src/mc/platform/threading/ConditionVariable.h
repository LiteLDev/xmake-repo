#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Threading {

using ConditionVariable = std::condition_variable;

}; // namespace Bedrock::Threading
#endif // @header-generator platform
