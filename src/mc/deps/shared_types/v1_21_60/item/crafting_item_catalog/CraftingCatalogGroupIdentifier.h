#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_60/item/crafting_item_catalog/CraftingCatalogItem.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace SharedTypes::v1_21_60 {

struct CraftingCatalogGroupIdentifier {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                                               mName;
    ::ll::TypedStorage<8, 32, std::optional<SharedTypes::v1_21_60::CraftingCatalogItem>> mItemIcon;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>                                                 mName;
    ::ll::TypedStorage<8, 40, ::std::optional<::SharedTypes::v1_21_60::CraftingCatalogItem>> mItemIcon;
    // NOLINTEND

public:
    // prevent constructor by default
    CraftingCatalogGroupIdentifier(CraftingCatalogGroupIdentifier const&);
    CraftingCatalogGroupIdentifier();

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::SharedTypes::v1_21_60::CraftingCatalogGroupIdentifier&
    operator=(::SharedTypes::v1_21_60::CraftingCatalogGroupIdentifier const&);

    MCAPI ~CraftingCatalogGroupIdentifier();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_60
