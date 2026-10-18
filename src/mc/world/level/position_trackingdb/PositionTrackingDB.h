#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class PositionTrackingId;
// clang-format on

namespace PositionTrackingDB {
// functions
// NOLINTBEGIN
MCAPI ::std::string makeStorageKeyFromId(::PositionTrackingId const& id);
// NOLINTEND

} // namespace PositionTrackingDB
#endif // @header-generator platform
