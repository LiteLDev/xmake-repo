#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_60/item/crafting_item_catalog/CraftingCatalogGroupIdentifier.h"
#include "mc/deps/shared_types/v1_21_60/item/crafting_item_catalog/CraftingCatalogItem.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace SharedTypes::v1_21_60 {

struct CraftingCatalogGroup {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 64, std::optional<SharedTypes::v1_21_60::CraftingCatalogGroupIdentifier>> mGroupIdentifier;
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::v1_21_60::CraftingCatalogItem>>              mItems;
#else // @header-generator platform
    ::ll::TypedStorage<8, 80, ::std::optional<::SharedTypes::v1_21_60::CraftingCatalogGroupIdentifier>>
                                                                                           mGroupIdentifier;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_21_60::CraftingCatalogItem>> mItems;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_60
