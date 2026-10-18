#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/CommandGroupBase.h"
#include "mc/client/gui/oreui/binding/methods/CallableImpl.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/containers/ContainerEnumName.h"
#include "mc/world/inventory/InventoryLeftTabIndex.h"

// auto generated forward declare list
// clang-format off
namespace GameplayUI { struct GameplayUIContext; }
namespace OreUI { class ClientDependencies; }
namespace OreUI { class GameDependencies; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/CommandGroupBase.h"
#include "mc/client/gui/oreui/binding/methods/CallableImpl.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/containers/ContainerEnumName.h"
#include "mc/world/inventory/InventoryLeftTabIndex.h"

// auto generated forward declare list
// clang-format off
namespace GameplayUI { struct GameplayUIContext; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
class ContainerAPICommands : public ::OreUI::CommandGroupBase<OreUI::ContainerAPICommands> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>  mContext;
    ::ll::UntypedStorage<8, 144> mCloseContainer;
    ::ll::UntypedStorage<8, 144> mHandleSlotMousePress;
    ::ll::UntypedStorage<8, 144> mHandleSlotMouseRelease;
    ::ll::UntypedStorage<8, 144> mHandleSlotMouseDrag;
    ::ll::UntypedStorage<8, 144> mHandlePanelMouseRelease;
    ::ll::UntypedStorage<8, 144> mHandleBackgroundMouseRelease;
    ::ll::UntypedStorage<8, 144> mTakeAllItems;
    ::ll::UntypedStorage<8, 144> mTakeOneItem;
    ::ll::UntypedStorage<8, 144> mTakeHalfItems;
    ::ll::UntypedStorage<8, 144> mPlaceAllItems;
    ::ll::UntypedStorage<8, 144> mPlaceOneItem;
    ::ll::UntypedStorage<8, 144> mPlaceAmountOfItems;
    ::ll::UntypedStorage<8, 144> mDropAllItems;
    ::ll::UntypedStorage<8, 144> mDropOneItem;
    ::ll::UntypedStorage<8, 144> mCoalesceItems;
    ::ll::UntypedStorage<8, 144> mCoalesceOrAutoPlaceItems;
    ::ll::UntypedStorage<8, 144> mAutoPlaceItems;
    ::ll::UntypedStorage<8, 144> mSplitMultipleItems;
    ::ll::UntypedStorage<8, 144> mSplitMultipleItemsTouch;
    ::ll::UntypedStorage<8, 144> mSplitSingleItem;
    ::ll::UntypedStorage<8, 144> mResetSplitStack;
    ::ll::UntypedStorage<8, 144> mSetDistributeAllSource;
    ::ll::UntypedStorage<8, 144> mSetRecipeBookSearchString;
    ::ll::UntypedStorage<8, 144> mSetRecipeBookFiltering;
    ::ll::UntypedStorage<8, 144> mSetRecipeBookTab;
    ::ll::UntypedStorage<8, 144> mSelectTrade;
    ::ll::UntypedStorage<8, 144> mPullInIngredientsForSelectedTrade;
    ::ll::UntypedStorage<8, 144> mPerformAutoTrade;
    ::ll::UntypedStorage<8, 144> mSetPreviewItemName;
    // NOLINTEND

public:
    // prevent constructor by default
    ContainerAPICommands();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ContainerAPICommands();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void autoPlaceItems_DEPRECATED(::ContainerEnumName, int);

    MCNAPI void closeContainer();

    MCNAPI void coalesceItems(::ContainerEnumName, int, ::ContainerEnumName);

    MCNAPI void coalesceOrAutoPlaceItems_DEPRECATED(::ContainerEnumName, int);

    MCNAPI void dropAllItems_DEPRECATED(::ContainerEnumName, int);

    MCNAPI void dropOneItem_DEPRECATED(::ContainerEnumName, int);

    MCNAPI void handleBackgroundMouseRelease(int);

    MCNAPI void handlePanelMouseRelease();

    MCNAPI void handleSlotMouseDrag(int, ::ContainerEnumName, int);

    MCNAPI void handleSlotMousePress(int, ::ContainerEnumName, int, bool, bool);

    MCNAPI void handleSlotMouseRelease(int, ::ContainerEnumName, int);

    MCNAPI void performAutoTrade(int, int);

    MCNAPI void placeAllItems_DEPRECATED(::ContainerEnumName, int, ::ContainerEnumName, int);

    MCNAPI void placeAmountOfItems_DEPRECATED(::ContainerEnumName, int, ::ContainerEnumName, int, int);

    MCNAPI void placeOneItem_DEPRECATED(::ContainerEnumName, int, ::ContainerEnumName, int);

    MCNAPI void pullInIngredientsForSelectedTrade();

    MCNAPI void resetSplitStack_DEPRECATED();

    MCNAPI void selectTrade(int, int);

    MCNAPI void setDistributeAllSource_DEPRECATED(::ContainerEnumName, int);

    MCNAPI void setPreviewItemName(std::string);

    MCNAPI void setRecipeBookFiltering(bool);

    MCNAPI void setRecipeBookSearchString(std::string);

    MCNAPI void setRecipeBookTab(::InventoryLeftTabIndex);

    MCNAPI void splitMultipleItemsTouch_DEPRECATED(::ContainerEnumName, int, ::ContainerEnumName, int);

    MCNAPI void splitMultipleItems_DEPRECATED(::ContainerEnumName, int, ::ContainerEnumName, int);

    MCNAPI void splitSingleItem_DEPRECATED(::ContainerEnumName, int, ::ContainerEnumName, int);

    MCNAPI void takeAllItems_DEPRECATED(::ContainerEnumName, int, ::ContainerEnumName, int);

    MCNAPI void takeHalfItems_DEPRECATED(::ContainerEnumName, int, ::ContainerEnumName, int);

    MCNAPI void takeOneItem_DEPRECATED(::ContainerEnumName, int, ::ContainerEnumName, int);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<char const[36]> NAME();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class ContainerAPICommands : public ::OreUI::CommandGroupBase<::OreUI::ContainerAPICommands> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::GameplayUI::GameplayUIContext>> mContext;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void>>                           mCloseContainer;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void, int, ::ContainerEnumName, int, bool, bool>>
        mHandleSlotMousePress;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void, int, ::ContainerEnumName, int>>
        mHandleSlotMouseRelease;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void, int, ::ContainerEnumName, int>> mHandleSlotMouseDrag;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void>>      mHandlePanelMouseRelease;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void, int>> mHandleBackgroundMouseRelease;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void, ::ContainerEnumName, int, ::ContainerEnumName, int>>
        mTakeAllItems;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void, ::ContainerEnumName, int, ::ContainerEnumName, int>>
        mTakeOneItem;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void, ::ContainerEnumName, int, ::ContainerEnumName, int>>
        mTakeHalfItems;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void, ::ContainerEnumName, int, ::ContainerEnumName, int>>
        mPlaceAllItems;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void, ::ContainerEnumName, int, ::ContainerEnumName, int>>
        mPlaceOneItem;
    ::ll::TypedStorage<
        8,
        168,
        ::OreUI::Detail::CallableImpl<void, ::ContainerEnumName, int, ::ContainerEnumName, int, int>>
                                                                                              mPlaceAmountOfItems;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void, ::ContainerEnumName, int>> mDropAllItems;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void, ::ContainerEnumName, int>> mDropOneItem;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void, ::ContainerEnumName, int, ::ContainerEnumName>>
                                                                                              mCoalesceItems;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void, ::ContainerEnumName, int>> mCoalesceOrAutoPlaceItems;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void, ::ContainerEnumName, int>> mAutoPlaceItems;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void, ::ContainerEnumName, int, ::ContainerEnumName, int>>
        mSplitMultipleItems;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void, ::ContainerEnumName, int, ::ContainerEnumName, int>>
        mSplitMultipleItemsTouch;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void, ::ContainerEnumName, int, ::ContainerEnumName, int>>
                                                                                              mSplitSingleItem;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void>>                           mResetSplitStack;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void, ::ContainerEnumName, int>> mSetDistributeAllSource;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void, ::std::string>>           mSetRecipeBookSearchString;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void, bool>>                    mSetRecipeBookFiltering;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void, ::InventoryLeftTabIndex>> mSetRecipeBookTab;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void, int, int>>                mSelectTrade;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void>>                mPullInIngredientsForSelectedTrade;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void, int, int>>      mPerformAutoTrade;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void, ::std::string>> mSetPreviewItemName;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void autoPlaceItems_DEPRECATED(::ContainerEnumName sourceName, int sourceIndex);

    MCAPI void closeContainer();

    MCAPI void coalesceItems(::ContainerEnumName destinationName, int destinationIndex, ::ContainerEnumName sourceName);

    MCAPI void coalesceOrAutoPlaceItems_DEPRECATED(::ContainerEnumName destinationName, int destinationIndex);

    MCAPI void dropAllItems_DEPRECATED(::ContainerEnumName sourceName, int sourceIndex);

    MCAPI void dropOneItem_DEPRECATED(::ContainerEnumName sourceName, int sourceIndex);

    MCAPI void handleBackgroundMouseRelease(int button);

    MCAPI void handlePanelMouseRelease();

    MCAPI void handleSlotMouseDrag(int button, ::ContainerEnumName container, int slot);

    MCAPI void
    handleSlotMousePress(int button, ::ContainerEnumName container, int slot, bool isDoubleClick, bool isShiftClick);

    MCAPI void handleSlotMouseRelease(int button, ::ContainerEnumName container, int slot);

    MCAPI void performAutoTrade(int tradeTier, int tradeIndex);

    MCAPI void placeAllItems_DEPRECATED(
        ::ContainerEnumName selectedName,
        int                 selectedIndex,
        ::ContainerEnumName destinationName,
        int                 destinationIndex
    );

    MCAPI void placeAmountOfItems_DEPRECATED(
        ::ContainerEnumName selectedName,
        int                 selectedIndex,
        ::ContainerEnumName destinationName,
        int                 destinationIndex,
        int                 amount
    );

    MCAPI void placeOneItem_DEPRECATED(
        ::ContainerEnumName selectedName,
        int                 selectedIndex,
        ::ContainerEnumName destinationName,
        int                 destinationIndex
    );

    MCAPI void pullInIngredientsForSelectedTrade();

    MCAPI void resetSplitStack_DEPRECATED();

    MCAPI void selectTrade(int tradeTier, int tradeIndex);

    MCAPI void setDistributeAllSource_DEPRECATED(::ContainerEnumName sourceName, int sourceIndex);

    MCAPI void setPreviewItemName(::std::string name);

    MCAPI void setRecipeBookFiltering(bool filtering);

    MCAPI void setRecipeBookSearchString(::std::string searchText);

    MCAPI void setRecipeBookTab(::InventoryLeftTabIndex tabIndex);

    MCAPI void splitMultipleItemsTouch_DEPRECATED(
        ::ContainerEnumName selectedName,
        int                 selectedIndex,
        ::ContainerEnumName destinationName,
        int                 destinationIndex
    );

    MCAPI void splitMultipleItems_DEPRECATED(
        ::ContainerEnumName selectedName,
        int                 selectedIndex,
        ::ContainerEnumName destinationName,
        int                 destinationIndex
    );

    MCAPI void splitSingleItem_DEPRECATED(
        ::ContainerEnumName sourceName,
        int                 sourceIndex,
        ::ContainerEnumName destinationName,
        int                 destinationIndex
    );

    MCAPI void takeAllItems_DEPRECATED(
        ::ContainerEnumName destinationName,
        int                 destinationIndex,
        ::ContainerEnumName sourceName,
        int                 sourceIndex
    );

    MCAPI void takeHalfItems_DEPRECATED(
        ::ContainerEnumName destinationName,
        int                 destinationIndex,
        ::ContainerEnumName sourceName,
        int                 sourceIndex
    );

    MCAPI void takeOneItem_DEPRECATED(
        ::ContainerEnumName destinationName,
        int                 destinationIndex,
        ::ContainerEnumName sourceName,
        int                 sourceIndex
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[36]> NAME();
    // NOLINTEND
};
#else // @header-generator platform
class ContainerAPICommands {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
