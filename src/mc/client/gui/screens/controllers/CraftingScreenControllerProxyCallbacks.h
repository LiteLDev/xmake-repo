#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/world/containers/controllers/ItemCraftType.h"

// auto generated forward declare list
// clang-format off
class ContainerController;
class ItemStack;
class ItemStackBase;
class Recipe;
struct ItemTransferAmount;
// clang-format on

struct CraftingScreenControllerProxyCallbacks {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mGetContainerController;
    ::ll::UntypedStorage<8, 48> mRecipeAutoCraft;
    ::ll::UntypedStorage<8, 48> mHandleRecipeSelect;
    ::ll::UntypedStorage<8, 48> mHandleRecipePlaceInputs;
    ::ll::UntypedStorage<8, 48> mHandleAutoPlace;
    ::ll::UntypedStorage<8, 48> mHandleAutoPlaceOne;
    ::ll::UntypedStorage<8, 48> mHandleTouchControlsCraft;
    ::ll::UntypedStorage<8, 48> mGetRecipeHoverText;
    ::ll::UntypedStorage<8, 48> mGetExpandoItemGroupName;
    ::ll::UntypedStorage<8, 48> mLeaveScreen;
    ::ll::UntypedStorage<8, 48> mSetLeftInventoryTab;
    ::ll::UntypedStorage<8, 48> mHandleTakeAll;
    ::ll::UntypedStorage<8, 48> mHandlePlaceAll;
    ::ll::UntypedStorage<8, 48> mHandlePlaceOne;
    ::ll::UntypedStorage<8, 48> mHandleGetItemStack;
    ::ll::UntypedStorage<8, 48> mHandleGetVisualItemStack;
    ::ll::UntypedStorage<8, 48> mMoveItemFromSlotIntoStorageItem;
    ::ll::UntypedStorage<8, 48> mMoveItemFromSlotIntoStorageItemWithoutClientValidation;
    ::ll::UntypedStorage<8, 48> mMoveTopItemFromStorageItem;
    ::ll::UntypedStorage<8, 48> mMoveSelectedItemFromStorageItemToStorageItem;
    ::ll::UntypedStorage<8, 48> mHandleDropItem;
    ::ll::UntypedStorage<8, 48> mHoverContainerSlot;
    ::ll::TypedStorage<8, 48, std::function<bool(const std::string&, int)>> mIsRecipeSlotCraftable;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/world/containers/controllers/ItemCraftType.h"

// auto generated forward declare list
// clang-format off
class ContainerController;
class ItemStack;
class ItemStackBase;
class Recipe;
struct ItemTransferAmount;
// clang-format on

struct CraftingScreenControllerProxyCallbacks {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<::ContainerController*(::std::string const&)>> mGetContainerController;
    ::ll::TypedStorage<8, 64, ::std::function<void(::std::string const&, int, ::ItemCraftType)>> mRecipeAutoCraft;
    ::ll::TypedStorage<8, 64, ::std::function<void(::std::string const&, int)>>                  mHandleRecipeSelect;
    ::ll::TypedStorage<8, 64, ::std::function<void(::Recipe const*)>>                         mHandleRecipePlaceInputs;
    ::ll::TypedStorage<8, 64, ::std::function<void(::std::string const&, int)>>               mHandleAutoPlace;
    ::ll::TypedStorage<8, 64, ::std::function<void(::std::string const&, int)>>               mHandleAutoPlaceOne;
    ::ll::TypedStorage<8, 64, ::std::function<void(::std::string const&, int)>>               mHandleTouchControlsCraft;
    ::ll::TypedStorage<8, 64, ::std::function<::std::string(::std::string const&, int)>>      mGetRecipeHoverText;
    ::ll::TypedStorage<8, 64, ::std::function<::std::string(::std::string const&, int)>>      mGetExpandoItemGroupName;
    ::ll::TypedStorage<8, 64, ::std::function<void()>>                                        mLeaveScreen;
    ::ll::TypedStorage<8, 64, ::std::function<void(int)>>                                     mSetLeftInventoryTab;
    ::ll::TypedStorage<8, 64, ::std::function<void(::std::string const&, int)>>               mHandleTakeAll;
    ::ll::TypedStorage<8, 64, ::std::function<void(::std::string const&, int)>>               mHandlePlaceAll;
    ::ll::TypedStorage<8, 64, ::std::function<void(::std::string const&, int)>>               mHandlePlaceOne;
    ::ll::TypedStorage<8, 64, ::std::function<::ItemStack const&(::std::string const&, int)>> mHandleGetItemStack;
    ::ll::TypedStorage<8, 64, ::std::function<::ItemStackBase const&(::std::string const&, int)>>
        mHandleGetVisualItemStack;
    ::ll::TypedStorage<8, 64, ::std::function<bool(::std::string const&, int, ::ItemStack const&)>>
        mMoveItemFromSlotIntoStorageItem;
    ::ll::TypedStorage<8, 64, ::std::function<void(::std::string const&, int, ::ItemStack const&)>>
        mMoveItemFromSlotIntoStorageItemWithoutClientValidation;
    ::ll::TypedStorage<8, 64, ::std::function<bool(::ItemStack const&, ::std::string const&, int)>>
        mMoveTopItemFromStorageItem;
    ::ll::TypedStorage<8, 64, ::std::function<bool(::ItemStack const&, int, ::ItemStack const&)>>
        mMoveSelectedItemFromStorageItemToStorageItem;
    ::ll::TypedStorage<8, 64, ::std::function<void(::std::string const&, int, ::ItemTransferAmount)>> mHandleDropItem;
    ::ll::TypedStorage<8, 64, ::std::function<void(::std::string const&, int)>> mHoverContainerSlot;
    ::ll::TypedStorage<8, 64, ::std::function<bool(::std::string const&, int)>> mIsRecipeSlotCraftable;
    // NOLINTEND
};
#else // @header-generator platform
struct CraftingScreenControllerProxyCallbacks {};
#endif // @header-generator platform
#endif // @header-generator platform
