#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/shared_types/v1_21_60/item/crafting_item_catalog/CraftingCatalogDocument.h"

// auto generated forward declare list
// clang-format off
namespace Core { template<typename T0, int T1> class BasicStackString; }
// clang-format on

namespace CraftingItemCatalogPackStackLoadUtils {

struct LoadResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::SharedTypes::v1_21_60::CraftingCatalogDocument> mData;
    ::ll::UntypedStorage<8, 1032>                                               mPackCraftingCatalogFilePath;
    // NOLINTEND
};

} // namespace CraftingItemCatalogPackStackLoadUtils
