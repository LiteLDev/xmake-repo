#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace StructureTag {
// static variables
// NOLINTBEGIN
MCAPI ::std::string const& BLOCK_INDICES();

MCAPI ::std::string const& BLOCK_PALETTE();

MCAPI ::std::string const& FORMAT_VERSION();

MCAPI ::std::string const& SIZE();

MCAPI ::std::string const& STRUCTURE();

MCAPI ::std::string const& STRUCTURE_WORLD_ORIGIN();
// NOLINTEND

} // namespace StructureTag
#endif // @header-generator platform
