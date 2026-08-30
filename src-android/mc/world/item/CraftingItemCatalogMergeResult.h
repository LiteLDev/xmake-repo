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
        ::ll::TypedStorage<8, 24, std::string>     mName;
        ::ll::TypedStorage<8, 128, ::ItemInstance> mIcon;
        // NOLINTEND

    public:
        // prevent constructor by default
        Identifier& operator=(Identifier const&);
        Identifier();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~Identifier();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct Group {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 160, std::optional<CraftingItemCatalogMergeResult::Identifier>> mIdentifier;
        ::ll::TypedStorage<8, 24, std::vector<ItemInstance>>                                  mItems;
        // NOLINTEND

    public:
        // prevent constructor by default
        Group& operator=(Group const&);
        Group(Group const&);

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~Group();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct Category {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::vector<CraftingItemCatalogMergeResult::Group>> mGroups;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ::CraftingItemCatalogMergeResult::Group* findGroup(std::string_view);
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::CraftingItemCatalogMergeResult::Category> mConstructionCategory;
    ::ll::TypedStorage<8, 24, ::CraftingItemCatalogMergeResult::Category> mNatureCategory;
    ::ll::TypedStorage<8, 24, ::CraftingItemCatalogMergeResult::Category> mEquipmentCategory;
    ::ll::TypedStorage<8, 24, ::CraftingItemCatalogMergeResult::Category> mItemsCategory;
    ::ll::TypedStorage<8, 40, std::unordered_set<int>>                    mUsedItems;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void addItemToGroupIfNotDuplicateItem(
        ::CraftingItemCatalogMergeResult::Group&,
        ::ItemInstance const&,
        std::string const&
    );

    MCNAPI ::CraftingItemCatalogMergeResult::Category const&
        getCategory(::SharedTypes::v1_21_60::CraftingCatalogItemCategory) const;

    MCNAPI ::CraftingItemCatalogMergeResult::Category&
        getCategory(::SharedTypes::v1_21_60::CraftingCatalogItemCategory);

    MCNAPI void insertAfterGroup(
        ::SharedTypes::v1_21_60::CraftingCatalogItemCategory,
        std::string_view,
        ::CraftingItemCatalogMergeResult::Group
    );

    MCNAPI void insertAfterItemsGroup(
        ::SharedTypes::v1_21_60::CraftingCatalogItemCategory,
        std::string_view,
        ::CraftingItemCatalogMergeResult::Group
    );

    MCNAPI ~CraftingItemCatalogMergeResult();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
