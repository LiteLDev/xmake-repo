#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockSource;
// clang-format on

namespace ClipDefaults {
// static variables
// NOLINTBEGIN
MCNAPI ::std::function<bool(::BlockSource const&, ::Block const&, bool)> const& CHECK_ALL_PICKABLE_BLOCKS();
// NOLINTEND

} // namespace ClipDefaults
#endif // @header-generator platform
