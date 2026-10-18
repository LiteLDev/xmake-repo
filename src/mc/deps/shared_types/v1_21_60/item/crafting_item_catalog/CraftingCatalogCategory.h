#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/shared_types/v1_21_60/item/crafting_item_catalog/CraftingCatalogGroup.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/shared_types/v1_21_60/item/crafting_item_catalog/CraftingCatalogItemCategory.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
namespace cereal { struct ReflectionCtx; }
#else // @header-generator platform
namespace SharedTypes::v1_21_60 { struct CraftingCatalogGroup; }
#endif // @header-generator platform
// clang-format on

namespace SharedTypes::v1_21_60 {

struct CraftingCatalogCategory {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, ::SharedTypes::v1_21_60::CraftingCatalogItemCategory>      mCategory;
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::v1_21_60::CraftingCatalogGroup>> mGroups;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, ::SharedTypes::v1_21_60::CraftingCatalogItemCategory>          mCategory;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_21_60::CraftingCatalogGroup>> mGroups;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_60
