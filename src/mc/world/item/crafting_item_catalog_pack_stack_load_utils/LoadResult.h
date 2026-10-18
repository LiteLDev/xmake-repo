#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/deps/core/string/BasicStackString.h"
#endif // @header-generator platform
#include "mc/deps/shared_types/v1_21_60/item/crafting_item_catalog/CraftingCatalogDocument.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace Core { template<typename T0, int T1> class BasicStackString; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace CraftingItemCatalogPackStackLoadUtils {

struct LoadResult {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, ::SharedTypes::v1_21_60::CraftingCatalogDocument> mData;
    ::ll::UntypedStorage<8, 1032>                                               mPackCraftingCatalogFilePath;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::SharedTypes::v1_21_60::CraftingCatalogDocument>           mData;
    ::ll::TypedStorage<8, 1032, ::Core::PathBuffer<::Core::BasicStackString<char, 1024>>> mPackCraftingCatalogFilePath;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace CraftingItemCatalogPackStackLoadUtils
