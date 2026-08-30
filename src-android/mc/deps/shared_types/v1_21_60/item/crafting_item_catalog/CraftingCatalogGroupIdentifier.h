#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_60/item/crafting_item_catalog/CraftingCatalogItem.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_60 {

struct CraftingCatalogGroupIdentifier {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                                               mName;
    ::ll::TypedStorage<8, 32, std::optional<SharedTypes::v1_21_60::CraftingCatalogItem>> mItemIcon;
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_60
