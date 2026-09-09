#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/safety/RedactableString.h"
#include "mc/world/containers/SlotData.h"
#include "mc/world/containers/managers/controllers/ContainerManagerController.h"
#include "mc/world/containers/managers/controllers/ItemResultPreview.h"
#include "mc/world/containers/managers/controllers/MapOutputType.h"
#include "mc/world/inventory/simulation/ContainerScreenRequestActionType.h"

// auto generated forward declare list
// clang-format off
class CartographyContainerManagerModel;
class ItemInstance;
class ItemStackBase;
struct AutoPlaceItem;
struct AutoPlaceResult;
struct ContainerScreenActionResult;
struct CreateContainerItemScope;
struct ItemStackRequestScope;
struct ItemTransferAmount;
struct SelectedSlotInfo;
// clang-format on

class CartographyContainerManagerController : public ::ContainerManagerController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::weak_ptr<CartographyContainerManagerModel>> mCartographyContainerManagerModel;
    ::ll::TypedStorage<8, 56, ::Bedrock::Safety::RedactableString>             mPreviewName;
    ::ll::TypedStorage<8, 56, ::Bedrock::Safety::RedactableString>             mItemName;
    ::ll::TypedStorage<8, 24, std::string>                                     mItemResultLocName;
    ::ll::TypedStorage<8, 32, ::SlotData const>                                mCreatedItemOutputSlot;
    ::ll::TypedStorage<1, 1, bool>                                             mCurrentlyCrafting;
    ::ll::TypedStorage<1, 1, bool>                                             mIsCurrentlyRenaming;
    ::ll::TypedStorage<1, 1, bool>                                             mWasPreviouslyRenaming;
    ::ll::TypedStorage<4, 4, ::MapOutputType>                                  mMapOutputType;
    ::ll::TypedStorage<8, 136, ::ItemResultPreview>                            mResultPreview;
    // NOLINTEND

public:
    // prevent constructor by default
    CartographyContainerManagerController();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~CartographyContainerManagerController();

    virtual void postInit(std::weak_ptr<ContainerManagerController>);

    virtual void setPreviewItemName(::Bedrock::Safety::RedactableString const&);

    virtual void setItemName(::Bedrock::Safety::RedactableString const&);

    virtual ::Bedrock::Safety::RedactableString const& getPreviewItemName() const;

    virtual ::Bedrock::Safety::RedactableString const& getItemName() const;

    virtual void updatePreviewItem();

    virtual ::ItemStackBase const& getTakeableItemStackBase(::SlotData const&) const;

    virtual bool handleTakeAmount(::SlotData const&, int, ::SlotData const&);

    virtual bool handleTakeAll(::SlotData const&, ::SlotData const&);

    virtual bool handlePlaceAll(::SelectedSlotInfo const&, ::SlotData const&);

    virtual bool handleTakeHalf(::SlotData const&, ::SlotData const&);

    virtual bool handlePlaceOne(::SlotData const&, ::SlotData const&);

    virtual int handleAutoPlace(::SlotData const&, int, std::vector<AutoPlaceItem> const&, std::vector<AutoPlaceResult>&);

    virtual bool isOutputSlot(std::string const&) const;

    virtual ::CreateContainerItemScope _makeCreateItemScope(::SlotData const&, ::ItemTransferAmount const&);

    virtual void _onItemAcquired(::ItemInstance const&, ::SlotData const&);

    virtual void _onContainerScreenAction(::ContainerScreenActionResult const&);

    virtual void _updateItemStackRequest(::ContainerScreenRequestActionType, ::ContainerScreenActionResult const&, ::ItemStackRequestScope&);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit CartographyContainerManagerController(std::weak_ptr<CartographyContainerManagerModel>);

    MCNAPI bool _handleTransferCraft(::SlotData const&, ::SlotData const&);

    MCNAPI std::string const& getItemResultLocName() const;

    MCNAPI ::MapOutputType getMapOutputType() const;

    MCNAPI void setIsCurrentlyRenaming(bool);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::weak_ptr<CartographyContainerManagerModel>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $postInit(std::weak_ptr<ContainerManagerController>);

    MCNAPI void $setPreviewItemName(::Bedrock::Safety::RedactableString const&);

    MCNAPI void $setItemName(::Bedrock::Safety::RedactableString const&);

    MCNAPI ::Bedrock::Safety::RedactableString const& $getPreviewItemName() const;

    MCNAPI ::Bedrock::Safety::RedactableString const& $getItemName() const;

    MCNAPI void $updatePreviewItem();

    MCNAPI ::ItemStackBase const& $getTakeableItemStackBase(::SlotData const&) const;

    MCNAPI bool $handleTakeAmount(::SlotData const&, int, ::SlotData const&);

    MCNAPI bool $handleTakeAll(::SlotData const&, ::SlotData const&);

    MCNAPI bool $handlePlaceAll(::SelectedSlotInfo const&, ::SlotData const&);

    MCNAPI bool $handleTakeHalf(::SlotData const&, ::SlotData const&);

    MCNAPI bool $handlePlaceOne(::SlotData const&, ::SlotData const&);

    MCNAPI int
    $handleAutoPlace(::SlotData const&, int, std::vector<AutoPlaceItem> const&, std::vector<AutoPlaceResult>&);

    MCNAPI bool $isOutputSlot(std::string const&) const;

    MCNAPI ::CreateContainerItemScope $_makeCreateItemScope(::SlotData const&, ::ItemTransferAmount const&);

    MCNAPI void $_onItemAcquired(::ItemInstance const&, ::SlotData const&);

    MCNAPI void $_onContainerScreenAction(::ContainerScreenActionResult const&);

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
    // NOLINTEND
};
