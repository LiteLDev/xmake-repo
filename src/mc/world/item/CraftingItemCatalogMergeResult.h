#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_60/item/crafting_item_catalog/CraftingCatalogItemCategory.h"
#include "mc/world/item/ItemInstance.h"

class CraftingItemCatalogMergeResult {
public:
    // CraftingItemCatalogMergeResult inner types declare
    // clang-format off
    struct Identifier;
    struct Group;
    struct Category;
    // clang-format on

    // CraftingItemCatalogMergeResult inner types define
    struct Identifier {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 24, std::string>     mName;
#else // @header-generator platform
        ::ll::TypedStorage<8, 32, ::std::string>   mName;
#endif // @header-generator platform
        ::ll::TypedStorage<8, 128, ::ItemInstance> mIcon;
        // NOLINTEND

    public:
#if defined(LL_PLAT_A) // @header-generator platform
        // prevent constructor by default
        Identifier& operator=(Identifier const&);
        Identifier();

    public:
#else // @header-generator platform
#endif // @header-generator platform
        // member functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI ~Identifier();
#else // @header-generator platform
        MCAPI ~Identifier();
#endif // @header-generator platform
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI void $dtor();
#else // @header-generator platform
        MCAPI void $dtor();
#endif // @header-generator platform
        // NOLINTEND
    };

    struct Group {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 160, std::optional<CraftingItemCatalogMergeResult::Identifier>> mIdentifier;
        ::ll::TypedStorage<8, 24, std::vector<ItemInstance>>                                  mItems;
#else // @header-generator platform
        ::ll::TypedStorage<8, 168, ::std::optional<::CraftingItemCatalogMergeResult::Identifier>> mIdentifier;
        ::ll::TypedStorage<8, 24, ::std::vector<::ItemInstance>>                                  mItems;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

    public:
        // prevent constructor by default
        Group& operator=(Group const&);
        Group(Group const&);
#else // @header-generator platform
#endif // @header-generator platform

    public:
        // member functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI ~Group();
#else // @header-generator platform
        MCAPI ~Group();
#endif // @header-generator platform
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI void $dtor();
#else // @header-generator platform
        MCAPI void $dtor();
#endif // @header-generator platform
        // NOLINTEND
    };

    struct Category {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 24, std::vector<CraftingItemCatalogMergeResult::Group>> mGroups;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ::CraftingItemCatalogMergeResult::Group* findGroup(std::string_view);
#else // @header-generator platform
        ::ll::TypedStorage<8, 24, ::std::vector<::CraftingItemCatalogMergeResult::Group>> mGroups;
#endif // @header-generator platform
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::CraftingItemCatalogMergeResult::Category> mConstructionCategory;
    ::ll::TypedStorage<8, 24, ::CraftingItemCatalogMergeResult::Category> mNatureCategory;
    ::ll::TypedStorage<8, 24, ::CraftingItemCatalogMergeResult::Category> mEquipmentCategory;
    ::ll::TypedStorage<8, 24, ::CraftingItemCatalogMergeResult::Category> mItemsCategory;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, std::unordered_set<int>>                    mUsedItems;
#else // @header-generator platform
    ::ll::TypedStorage<8, 64, ::std::unordered_set<int>>                  mUsedItems;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addItemToGroupIfNotDuplicateItem(
        ::CraftingItemCatalogMergeResult::Group&,
        ::ItemInstance const&,
        std::string const&
#else // @header-generator platform
    MCAPI void insertAfterGroup(
        ::SharedTypes::v1_21_60::CraftingCatalogItemCategory itemCategory,
        ::std::string_view                                   groupName,
        ::CraftingItemCatalogMergeResult::Group              insertGroup
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::CraftingItemCatalogMergeResult::Category const&
        getCategory(::SharedTypes::v1_21_60::CraftingCatalogItemCategory) const;

    MCNAPI ::CraftingItemCatalogMergeResult::Category&
        getCategory(::SharedTypes::v1_21_60::CraftingCatalogItemCategory);

    MCNAPI void insertAfterGroup(
        ::SharedTypes::v1_21_60::CraftingCatalogItemCategory,
        std::string_view,
        ::CraftingItemCatalogMergeResult::Group
#else // @header-generator platform
    MCAPI void insertAfterItemsGroup(
        ::SharedTypes::v1_21_60::CraftingCatalogItemCategory itemCategory,
        ::std::string_view                                   itemName,
        ::CraftingItemCatalogMergeResult::Group              insertGroup
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void insertAfterItemsGroup(
        ::SharedTypes::v1_21_60::CraftingCatalogItemCategory,
        std::string_view,
        ::CraftingItemCatalogMergeResult::Group
    );

    MCNAPI ~CraftingItemCatalogMergeResult();
#else // @header-generator platform
    MCAPI ~CraftingItemCatalogMergeResult();
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
