#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/safety/RedactableString.h"
#include "mc/world/containers/SlotData.h"
#include "mc/world/containers/managers/controllers/ContainerManagerController.h"
#include "mc/world/containers/managers/controllers/ItemResultPreview.h"
#include "mc/world/inventory/network/TypedServerNetId.h"
#include "mc/world/inventory/simulation/ContainerScreenRequestActionType.h"

// auto generated forward declare list
// clang-format off
class AnvilContainerManagerModel;
class ItemInstance;
class ItemStackBase;
class Recipe;
struct AutoPlaceItem;
struct AutoPlaceResult;
struct ContainerScreenActionResult;
struct CreateContainerItemScope;
struct ItemStackRequestScope;
struct ItemTransferAmount;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct RecipeNetIdTag;
#endif // @header-generator platform
struct SelectedSlotInfo;
// clang-format on

class AnvilContainerManagerController : public ::ContainerManagerController {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, std::weak_ptr<AnvilContainerManagerModel>> mAnvilContainerManagerModel;
    ::ll::TypedStorage<4, 4, int>                                        mCost;
    ::ll::TypedStorage<8, 56, ::Bedrock::Safety::RedactableString>       mPreviewName;
    ::ll::TypedStorage<8, 56, ::Bedrock::Safety::RedactableString>       mItemName;
    ::ll::TypedStorage<1, 1, bool>                                       mIsMapRecipe;
    ::ll::TypedStorage<8, 136, ::ItemResultPreview>                      mResultPreview;
    ::ll::TypedStorage<1, 1, bool>                                       mIsEnchantingBookRecipe;
    ::ll::TypedStorage<4, 4, int>                                        mRepairItemCountCost;
    ::ll::UntypedStorage<4, 8>                                           mCurrentRecipeNetId;
    ::ll::TypedStorage<8, 8, ::Recipe const*>                            mMapCraftingRecipe;
    ::ll::TypedStorage<8, 32, ::SlotData const>                          mCreatedItemOutputSlot;
#else // @header-generator platform
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::AnvilContainerManagerModel>> mAnvilContainerManagerModel;
    ::ll::TypedStorage<4, 4, int>                                            mCost;
    ::ll::TypedStorage<8, 72, ::Bedrock::Safety::RedactableString>           mPreviewName;
    ::ll::TypedStorage<8, 72, ::Bedrock::Safety::RedactableString>           mItemName;
    ::ll::TypedStorage<1, 1, bool>                                           mIsMapRecipe;
    ::ll::TypedStorage<8, 136, ::ItemResultPreview>                          mResultPreview;
    ::ll::TypedStorage<1, 1, bool>                                           mIsEnchantingBookRecipe;
    ::ll::TypedStorage<4, 4, int>                                            mRepairItemCountCost;
    ::ll::TypedStorage<4, 4, ::RecipeNetId>                                  mCurrentRecipeNetId;
    ::ll::TypedStorage<8, 8, ::Recipe const*>                                mMapCraftingRecipe;
    ::ll::TypedStorage<8, 40, ::SlotData const>                              mCreatedItemOutputSlot;
#endif // @header-generator platform
    // NOLINTEND

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // prevent constructor by default
    AnvilContainerManagerController();

#else // @header-generator platform
#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    AnvilContainerManagerController();

#endif
#endif // @header-generator platform
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~AnvilContainerManagerController();
#else // @header-generator platform
    virtual ~AnvilContainerManagerController() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void postInit(std::weak_ptr<ContainerManagerController>);
#else // @header-generator platform
    virtual void postInit(::std::weak_ptr<::ContainerManagerController> self) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setPreviewItemName(::Bedrock::Safety::RedactableString const&);
#else // @header-generator platform
    virtual void updatePreviewItem() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setItemName(::Bedrock::Safety::RedactableString const&);
#else // @header-generator platform
    virtual void setPreviewItemName(::Bedrock::Safety::RedactableString const& name) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Safety::RedactableString const& getPreviewItemName() const;
#else // @header-generator platform
    virtual void setItemName(::Bedrock::Safety::RedactableString const& name) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Safety::RedactableString const& getItemName() const;
#else // @header-generator platform
    virtual ::Bedrock::Safety::RedactableString const& getPreviewItemName() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void updatePreviewItem();
#else // @header-generator platform
    virtual ::Bedrock::Safety::RedactableString const& getItemName() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ItemStackBase const& getTakeableItemStackBase(::SlotData const&) const;
#else // @header-generator platform
    virtual bool isOutputSlot(::std::string const& collectionName) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool handleTakeAmount(::SlotData const&, int, ::SlotData const&);
#else // @header-generator platform
    virtual ::ItemStackBase const& getTakeableItemStackBase(::SlotData const& slot) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool handleTakeAll(::SlotData const&, ::SlotData const&);
#else // @header-generator platform
    virtual bool handleTakeAmount(::SlotData const& dstSlot, int amount, ::SlotData const& srcSlot) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool handlePlaceAll(::SelectedSlotInfo const&, ::SlotData const&);
#else // @header-generator platform
    virtual bool handleTakeAll(::SlotData const& dstSlot, ::SlotData const& srcSlot) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool handleTakeHalf(::SlotData const&, ::SlotData const&);
#else // @header-generator platform
    virtual bool handleTakeHalf(::SlotData const& dstSlot, ::SlotData const& srcSlot) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int handleAutoPlace(::SlotData const&, int, std::vector<AutoPlaceItem> const&, std::vector<AutoPlaceResult>&);
#else // @header-generator platform
    virtual bool handlePlaceAll(::SelectedSlotInfo const& selected, ::SlotData const& dstSlot) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isOutputSlot(std::string const&) const;
#else // @header-generator platform
    virtual int handleAutoPlace(
        ::SlotData const&                     srcSlot,
        int                                   amount,
        ::std::vector<::AutoPlaceItem> const& autoPlaceOrder,
        ::std::vector<::AutoPlaceResult>&     destinations
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::CreateContainerItemScope _makeCreateItemScope(::SlotData const&, ::ItemTransferAmount const&);
#else // @header-generator platform
    virtual void _onItemAcquired(::ItemInstance const& stack, ::SlotData const& srcSlot) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void _onItemAcquired(::ItemInstance const&, ::SlotData const&);
#else // @header-generator platform
    virtual ::CreateContainerItemScope
    _makeCreateItemScope(::SlotData const& srcSlot, ::ItemTransferAmount const&) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void _updateItemStackRequest(::ContainerScreenRequestActionType, ::ContainerScreenActionResult const&, ::ItemStackRequestScope&);
    // clang-format on
#else // @header-generator platform
    virtual void _updateItemStackRequest(
        ::ContainerScreenRequestActionType,
        ::ContainerScreenActionResult const& result,
        ::ItemStackRequestScope&             requestScope
    ) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit AnvilContainerManagerController(std::weak_ptr<AnvilContainerManagerModel>);

    MCNAPI bool _handleTransferCraft(::SlotData const&, ::SlotData const&);

    MCNAPI bool _mayPickup();

    MCNAPI bool areItemsIncompatible();

    MCNAPI int getCost() const;

    MCNAPI std::string getCostText();

    MCNAPI bool getHasInputItem();

    MCNAPI bool isTooExpensive();

    MCNAPI bool shouldCrossOutIconBeVisible();

    MCNAPI bool shouldDrawGreen();

    MCNAPI bool shouldDrawRed();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI explicit AnvilContainerManagerController(
        ::std::weak_ptr<::AnvilContainerManagerModel> containerManagerModel
    );

    MCNAPI bool _handleTransferCraft(::SlotData const& srcSlot, ::SlotData const& dstSlot);

    MCNAPI bool _mayPickup();

    MCNAPI bool areItemsIncompatible();

    MCNAPI ::std::string getCostText();

    MCNAPI bool shouldDrawGreen();

    MCNAPI bool shouldDrawRed();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::weak_ptr<AnvilContainerManagerModel>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::std::weak_ptr<::AnvilContainerManagerModel> containerManagerModel);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $postInit(std::weak_ptr<ContainerManagerController>);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void $postInit(::std::weak_ptr<::ContainerManagerController> self);

    MCNAPI void $updatePreviewItem();

    MCNAPI void $setPreviewItemName(::Bedrock::Safety::RedactableString const& name);

    MCNAPI void $setItemName(::Bedrock::Safety::RedactableString const& name);

    MCNAPI ::Bedrock::Safety::RedactableString const& $getPreviewItemName() const;

    MCNAPI ::Bedrock::Safety::RedactableString const& $getItemName() const;

    MCNAPI bool $isOutputSlot(::std::string const& collectionName) const;

    MCNAPI ::ItemStackBase const& $getTakeableItemStackBase(::SlotData const& slot) const;

    MCNAPI bool $handleTakeAmount(::SlotData const& dstSlot, int amount, ::SlotData const& srcSlot);

    MCNAPI bool $handleTakeAll(::SlotData const& dstSlot, ::SlotData const& srcSlot);

    MCNAPI bool $handleTakeHalf(::SlotData const& dstSlot, ::SlotData const& srcSlot);

    MCNAPI bool $handlePlaceAll(::SelectedSlotInfo const& selected, ::SlotData const& dstSlot);

    MCNAPI int $handleAutoPlace(
        ::SlotData const&                     srcSlot,
        int                                   amount,
        ::std::vector<::AutoPlaceItem> const& autoPlaceOrder,
        ::std::vector<::AutoPlaceResult>&     destinations
    );

    MCNAPI void $_onItemAcquired(::ItemInstance const& stack, ::SlotData const& srcSlot);

    MCNAPI ::CreateContainerItemScope $_makeCreateItemScope(::SlotData const& srcSlot, ::ItemTransferAmount const&);

    MCNAPI void $_updateItemStackRequest(
        ::ContainerScreenRequestActionType,
        ::ContainerScreenActionResult const& result,
        ::ItemStackRequestScope&             requestScope
    );
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setPreviewItemName(::Bedrock::Safety::RedactableString const&);
#else // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setItemName(::Bedrock::Safety::RedactableString const&);

    MCNAPI ::Bedrock::Safety::RedactableString const& $getPreviewItemName() const;

    MCNAPI ::Bedrock::Safety::RedactableString const& $getItemName() const;

    MCNAPI void $updatePreviewItem();

    MCNAPI ::ItemStackBase const& $getTakeableItemStackBase(::SlotData const&) const;

    MCNAPI bool $handleTakeAmount(::SlotData const&, int, ::SlotData const&);

    MCNAPI bool $handleTakeAll(::SlotData const&, ::SlotData const&);

    MCNAPI bool $handlePlaceAll(::SelectedSlotInfo const&, ::SlotData const&);

    MCNAPI bool $handleTakeHalf(::SlotData const&, ::SlotData const&);

    MCNAPI int
    $handleAutoPlace(::SlotData const&, int, std::vector<AutoPlaceItem> const&, std::vector<AutoPlaceResult>&);

    MCNAPI bool $isOutputSlot(std::string const&) const;

    MCNAPI ::CreateContainerItemScope $_makeCreateItemScope(::SlotData const&, ::ItemTransferAmount const&);

    MCNAPI void $_onItemAcquired(::ItemInstance const&, ::SlotData const&);

    MCNAPI void $_updateItemStackRequest(
        ::ContainerScreenRequestActionType,
        ::ContainerScreenActionResult const&,
        ::ItemStackRequestScope&
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND
};
