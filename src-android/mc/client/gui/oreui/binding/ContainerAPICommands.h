#pragma once

#include "mc/_HeaderOutputPredefine.h"

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

namespace OreUI {

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

} // namespace OreUI
