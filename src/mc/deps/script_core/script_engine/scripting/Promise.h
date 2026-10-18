#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

#if defined(LL_PLAT_A) // @header-generator platform
template <typename T0, typename... T1>
#else // @header-generator platform
template <typename... T0>
#endif // @header-generator platform
class Promise {};

} // namespace Scripting
