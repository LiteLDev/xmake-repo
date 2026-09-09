#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
