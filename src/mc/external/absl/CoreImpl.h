#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace absl::internal_any_invocable {

template <int T0, typename... T1>
class CoreImpl {};

} // namespace absl::internal_any_invocable
#endif // @header-generator platform
