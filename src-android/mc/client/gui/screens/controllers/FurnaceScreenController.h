#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/ViewRequest.h"
#include "mc/client/gui/screens/controllers/ContainerScreenController.h"
#include "mc/client/gui/screens/controllers/FadeInIconBehavior.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/world/containers/ContainerEnumName.h"
#include "mc/world/item/FurnaceItemCategory.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class ClientInstanceScreenModel;
class FurnaceContainerManagerController;
class ItemStack;
class ItemStackBase;
class Player;
class UIPropertyBag;
struct ActorUniqueID;
struct FurnaceOptions;
struct SlotData;
namespace Json { class Value; }
// clang-format on

class FurnaceScreenController : public ::ContainerScreenController {
public:
    // FurnaceScreenController inner types declare
    // clang-format off
    struct CategoryTabInfo;
    // clang-format on

    // FurnaceScreenController inner types define
    struct CategoryTabInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, ::FurnaceItemCategory> category;
        ::ll::TypedStorage<1, 1, ::ContainerEnumName>   containerEnum;
        ::ll::TypedStorage<8, 24, std::string>          tabName;
        // NOLINTEND

    public:
        // prevent constructor by default
        CategoryTabInfo& operator=(CategoryTabInfo const&);
        CategoryTabInfo();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<FurnaceContainerManagerController>> mFurnaceContainerManagerController;
    ::ll::TypedStorage<1, 1, ::ContainerEnumName>                                 mHoveredContainer;
    ::ll::TypedStorage<1, 1, ::ContainerEnumName const>                           mIngredientEnumName;
    ::ll::TypedStorage<4, 4, int>                                                 mStartHeldFurnaceResultTime;
    ::ll::TypedStorage<1, 1, bool>                                                mPocket;
    ::ll::TypedStorage<1, 1, bool>                                                mEntered;
    ::ll::TypedStorage<1, 1, bool>                                                mUseRecipeUnlocking;
    ::ll::TypedStorage<4, 4, int>                                                 mLayout;
    ::ll::TypedStorage<4, 4, int>                                                 mSavedLayout;
    ::ll::TypedStorage<1, 1, bool>                                                mSmeltableFilterOn;
    ::ll::TypedStorage<1, 1, bool>                                                mSearchBarSelected;
    ::ll::TypedStorage<8, 32, std::optional<std::string>>                         mDelayedSearchString;
    ::ll::TypedStorage<1, 1, bool>                                                mHasInitalCategoryTabsState;
    ::ll::TypedStorage<4, 4, int>                                                 mTTSPreviousIngredientId;
    ::ll::TypedStorage<4, 4, int>                                                 mTicksLeftUntilCategoryTabUpdate;
    ::ll::TypedStorage<4, 4, int>                                                 mTabFiltersDirty;
    ::ll::TypedStorage<8, 40, ::HashedString>                                     mRecipeTag;
    ::ll::UntypedStorage<4, 16>                                                   mSelectedLeftTab;
    // NOLINTEND

public:
    // prevent constructor by default
    FurnaceScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~FurnaceScreenController();

    virtual ::ui::DirtyFlag tick();

    virtual void onOpen();

    virtual void addStaticScreenVars(::Json::Value&);

    virtual void onEntered();

    virtual bool _isStillValid() const;

    virtual std::string _getButtonADescription();

    virtual std::string _getButtonBDescription();

    virtual std::string _getButtonXDescription();

    virtual std::string _getButtonYDescription();

    virtual void _handlePlaceAll(std::string const&, int);

    virtual void _handlePlaceOne(std::string const&, int);

    virtual void _handleSelectSlot(std::string const&, int);

    virtual ::SlotData _reevaluateSlotData(::SlotData&&) const;

    virtual ::ui::ViewRequest _onContainerSlotHovered(std::string const&, int);

    virtual bool _shouldSwap(std::string const&, int, std::string const&, int) const;

    virtual std::string _getCollectionName(::UIPropertyBag*) const;

    virtual void _sendFlyingItem(::ItemStackBase const&, std::string const&, int, std::string const&, int, ::FadeInIconBehavior);

    virtual ::ItemStackBase const& _getVisualItemStackImpl(std::string const&, int) const;

    virtual void _registerCoalesceOrder();

    virtual void _registerAutoPlaceOrder();

    virtual bool _isInCreativeContainer(std::string const&) const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FurnaceScreenController(
        std::shared_ptr<ClientInstanceScreenModel>,
        ::Player&,
        ::BlockPos const&,
        ::ActorUniqueID const,
        ::HashedString const&
    );

    MCNAPI int _findNextLeftSideTab(int) const;

    MCNAPI void _handleClearGrid();

    MCNAPI bool _isRecipeIngredientSelected(std::string const&, int) const;

    MCNAPI void _refreshFilters(int, bool);

    MCNAPI void _savePlayerOptions();

    MCNAPI void _selectRecipe(std::string const&, int);

    MCNAPI void _setLeftSideTab(int);

    MCNAPI void _tryAddTTSMessageForFurnaceAction(::ItemStack const&, ::ItemStack const&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::string_view const& RECIPE_BOOK_COLLECTION_NAME();

    MCNAPI static std::unordered_map<int, FurnaceScreenController::CategoryTabInfo> const& mCategoryTabs();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        std::shared_ptr<ClientInstanceScreenModel>,
        ::Player&,
        ::BlockPos const&,
        ::ActorUniqueID const,
        ::HashedString const&
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::ui::DirtyFlag $tick();

    MCNAPI void $onOpen();

    MCNAPI void $addStaticScreenVars(::Json::Value&);

    MCNAPI void $onEntered();

    MCNAPI bool $_isStillValid() const;

    MCNAPI std::string $_getButtonADescription();

    MCNAPI std::string $_getButtonBDescription();

    MCNAPI std::string $_getButtonXDescription();

    MCNAPI std::string $_getButtonYDescription();

    MCNAPI void $_handlePlaceAll(std::string const&, int);

    MCNAPI void $_handlePlaceOne(std::string const&, int);

    MCNAPI void $_handleSelectSlot(std::string const&, int);

    MCNAPI ::SlotData $_reevaluateSlotData(::SlotData&&) const;

    MCNAPI ::ui::ViewRequest $_onContainerSlotHovered(std::string const&, int);

    MCNAPI bool $_shouldSwap(std::string const&, int, std::string const&, int) const;

    MCNAPI std::string $_getCollectionName(::UIPropertyBag*) const;

    MCNAPI void
    $_sendFlyingItem(::ItemStackBase const&, std::string const&, int, std::string const&, int, ::FadeInIconBehavior);

    MCNAPI ::ItemStackBase const& $_getVisualItemStackImpl(std::string const&, int) const;

    MCNAPI void $_registerCoalesceOrder();

    MCNAPI void $_registerAutoPlaceOrder();

    MCNAPI bool $_isInCreativeContainer(std::string const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
