#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/BlockActorType.h"

namespace BlockActorFactory {
// functions
// NOLINTBEGIN
MCAPI ::std::unordered_map<::BlockActorType, ::std::string> const& getClassIdMap();
// NOLINTEND

} // namespace BlockActorFactory
#endif // @header-generator platform
