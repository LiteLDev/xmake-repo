#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/range-v3/sentinel_tag.h"

namespace ranges {

struct sized_sentinel_tag : public ::ranges::sentinel_tag {};

} // namespace ranges
#endif // @header-generator platform
