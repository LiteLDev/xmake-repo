#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cg::details {

template <typename T0, typename T1>
struct DispatchToken {};

} // namespace cg::details
#endif // @header-generator platform
