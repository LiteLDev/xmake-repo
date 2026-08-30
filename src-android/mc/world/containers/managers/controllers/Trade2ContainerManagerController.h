#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/ContainerEnumName.h"
#include "mc/world/containers/SlotData.h"
#include "mc/world/containers/controllers/ItemTakeType.h"
#include "mc/world/containers/managers/controllers/ContainerManagerController.h"
#include "mc/world/item/ItemInstance.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ContainerController;
class ItemStackBase;
class MerchantRecipe;
class Player;
class Trade2ContainerManagerModel;
struct AutoPlaceItem;
struct AutoPlaceResult;
struct CreateContainerItemScope;
struct ItemStackRequestScope;
struct ItemTransferAmount;
struct SelectedSlotInfo;
// clang-format on

class Trade2ContainerManagerController : public ::ContainerManagerController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::weak_ptr<Trade2ContainerManagerModel>> mTradeContainerManagerModel;
    ::ll::TypedStorage<1, 1, bool>                                        mSelectBestTradeOnItemPlace;
    ::ll::TypedStorage<8, 32, ::SlotData const>                           mCreatedItemOutputSlot;
    ::ll::TypedStorage<8, 128, ::ItemInstance>                            mResultPreviewItem;
    // NOLINTEND

public:
    // prevent constructor by default
    Trade2ContainerManagerController();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~Trade2ContainerManagerController();

    virtual ::ItemStackBase const& getTakeableItemStackBase(::SlotData const&) const;

    virtual bool handleTakeAmount(::SlotData const&, int, ::SlotData const&);

    virtual bool handleTakeAll(::SlotData const&, ::SlotData const&);

    virtual bool handlePlaceAll(::SelectedSlotInfo const&, ::SlotData const&);

    virtual bool handlePlaceOne(::SlotData const&, ::SlotData const&);

    virtual int handleAutoPlace(::SlotData const&, int, std::vector<AutoPlaceItem> const&, std::vector<AutoPlaceResult>&);

    virtual bool handleAddToStack(::SlotData const&, ::SlotData const&, ::ItemTakeType);

    virtual bool isOutputSlot(std::string const&) const;

    virtual ::CreateContainerItemScope _makeCreateItemScope(::SlotData const&, ::ItemTransferAmount const&);

    virtual void _onItemAcquired(::ItemInstance const&, ::SlotData const&);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit Trade2ContainerManagerController(std::weak_ptr<Trade2ContainerManagerModel>);

    MCNAPI void _consumeMaterials(int, ::ContainerEnumName const);

    MCNAPI void _createResult(bool);

    MCNAPI void _handleBuyItemUse(::ItemInstance const&, int&, ::Actor&, ::Player&);

    MCNAPI bool _handleTransferTrade(::SlotData const&, ::SlotData const&);

    MCNAPI bool _ingredientsMatchRecipe(::MerchantRecipe const*, ::ItemStackBase const&, ::ItemStackBase const&) const;

    MCNAPI void _pullInIngredientItemsFromInventory(
        ::ItemInstance const&,
        ::ItemInstance const&,
        ::ContainerController*,
        ::ContainerController*,
        bool
    );

    MCNAPI void _selectBestTradeForIngredients();

    MCNAPI int getCurrentTradeExp() const;

    MCNAPI std::string getDisplayName();

    MCNAPI std::string getDisplayNameTag() const;

    MCNAPI int getEntityMaxTradeTier() const;

    MCNAPI int getEntityTradeTier() const;

    MCNAPI std::vector<int> getNumberOfTradesByTier() const;

    MCNAPI ::MerchantRecipe* getSelectedTrade() const;

    MCNAPI ::MerchantRecipe* getTrade(int, int) const;

    MCNAPI int getTradeExpForCurrentRequirement(uint) const;

    MCNAPI int getTradeExpToNextRequirement(uint) const;

    MCNAPI void handleAutoTrade(int, int, std::vector<AutoPlaceResult>&);

    MCNAPI bool hasAvailableTradeWithSecondItem() const;

    MCNAPI bool isItemValidForSelectedTrade(::ItemStackBase const&, bool, bool) const;

    MCNAPI bool isSelectedTrade(int, int) const;

    MCNAPI bool isSelectedTradeValid() const;

    MCNAPI void moveIngredientsBackToInventory();

    MCNAPI bool playerHasItemsForTrade(::MerchantRecipe const*) const;

    MCNAPI std::pair<bool, bool> playerHasItemsForTradeInInventory(::MerchantRecipe const*) const;

    MCNAPI void pullInIngredientsForSelectedTrade();

    MCNAPI bool selectOfferedTrade();

    MCNAPI void setSelectedTrade(int, int);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::weak_ptr<Trade2ContainerManagerModel>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::ItemStackBase const& $getTakeableItemStackBase(::SlotData const&) const;

    MCNAPI bool $handleTakeAmount(::SlotData const&, int, ::SlotData const&);

    MCNAPI bool $handleTakeAll(::SlotData const&, ::SlotData const&);

    MCNAPI bool $handlePlaceAll(::SelectedSlotInfo const&, ::SlotData const&);

    MCNAPI bool $handlePlaceOne(::SlotData const&, ::SlotData const&);

    MCNAPI int
    $handleAutoPlace(::SlotData const&, int, std::vector<AutoPlaceItem> const&, std::vector<AutoPlaceResult>&);

    MCNAPI bool $handleAddToStack(::SlotData const&, ::SlotData const&, ::ItemTakeType);

    MCNAPI bool $isOutputSlot(std::string const&) const;

    MCNAPI ::CreateContainerItemScope $_makeCreateItemScope(::SlotData const&, ::ItemTransferAmount const&);

    MCNAPI void $_onItemAcquired(::ItemInstance const&, ::SlotData const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
