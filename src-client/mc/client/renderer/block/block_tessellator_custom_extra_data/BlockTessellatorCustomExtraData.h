#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
namespace BlockTessellatorCustomExtraData { class Map; }
// clang-format on

namespace BlockTessellatorCustomExtraData {
// functions
// NOLINTBEGIN
MCAPI ::BlockTessellatorCustomExtraData::Map
extract(::BlockSource& region, ::BlockPos const& min, ::BlockPos const& max);
// NOLINTEND

} // namespace BlockTessellatorCustomExtraData
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
