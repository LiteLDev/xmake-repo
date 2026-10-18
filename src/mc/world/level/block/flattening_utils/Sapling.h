#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
struct ItemRegistryComplexAlias;
namespace FlatteningUtils { struct Instance; }
// clang-format on

namespace FlatteningUtils::Sapling {
// functions
// NOLINTBEGIN
MCAPI ::FlatteningUtils::Instance get();

MCAPI ::std::function<::Block const*(int)> getComplexAliasCallback();

MCAPI ::ItemRegistryComplexAlias getItemComplexAliasCallback();
// NOLINTEND

} // namespace FlatteningUtils::Sapling
#endif // @header-generator platform
