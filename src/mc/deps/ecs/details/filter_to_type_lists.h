#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace details {

template <typename... T0>
struct filter_to_type_lists {};

} // namespace details
#endif // @header-generator platform
