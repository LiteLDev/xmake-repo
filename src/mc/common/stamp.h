#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace stamp {
// static variables
// NOLINTBEGIN
MCNAPI char const* const& BUILD_ID();

MCNAPI char const* const& GIT_BRANCH();

MCNAPI int64 const& GIT_COMMIT_TIME();

MCNAPI char const* const& GIT_SHA();

MCNAPI char const* const& MERGE_BASE_SHA();
// NOLINTEND

} // namespace stamp
#endif // @header-generator platform
