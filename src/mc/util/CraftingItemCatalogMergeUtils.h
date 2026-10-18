#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class CraftingItemCatalogMergeResult;
class ItemRegistryRef;
namespace CraftingItemCatalogPackStackLoadUtils { struct LoadResult; }
// clang-format on

namespace CraftingItemCatalogMergeUtils {
// functions
// NOLINTBEGIN
MCNAPI ::CraftingItemCatalogMergeResult mergeLoadResults(
    ::ItemRegistryRef const&                                                  itemRegistry,
    ::std::vector<::CraftingItemCatalogPackStackLoadUtils::LoadResult> const& loadResults
);
// NOLINTEND

} // namespace CraftingItemCatalogMergeUtils
#endif // @header-generator platform
