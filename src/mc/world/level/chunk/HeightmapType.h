#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
// clang-format on

namespace br::spawn::HeightmapType {
// functions
// NOLINTBEGIN
MCAPI ::std::vector<::std::tuple<::std::string, ::std::function<bool(::Block const&)>>> defaults();
// NOLINTEND

} // namespace br::spawn::HeightmapType
#endif // @header-generator platform
