#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorCategory.h"

namespace ActorCategoryUtils {
// functions
// NOLINTBEGIN
MCNAPI ::ActorCategory actorCategoriesFromString(::std::string const& str);

MCNAPI ::ActorCategory actorCategoryFromString(::std::string const& str);
// NOLINTEND

} // namespace ActorCategoryUtils
#endif // @header-generator platform
