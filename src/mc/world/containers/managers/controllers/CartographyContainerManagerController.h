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
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::CartographyContainerManagerModel>> mCartographyContainerManagerModel;
    ::ll::TypedStorage<8, 72, ::Bedrock::Safety::RedactableString>                 mPreviewName;
    ::ll::TypedStorage<8, 72, ::Bedrock::Safety::RedactableString>                 mItemName;
    ::ll::TypedStorage<8, 32, ::std::string>                                       mItemResultLocName;
    ::ll::TypedStorage<8, 40, ::SlotData const>                                    mCreatedItemOutputSlot;
    ::ll::TypedStorage<1, 1, bool>                                                 mCurrentlyCrafting;
    ::ll::TypedStorage<1, 1, bool>                                                 mIsCurrentlyRenaming;
    ::ll::TypedStorage<1, 1, bool>                                                 mWasPreviouslyRenaming;
    ::ll::TypedStorage<4, 4, ::MapOutputType>                                      mMapOutputType;
    ::ll::TypedStorage<8, 136, ::ItemResultPreview>                                mResultPreview;
#endif // @header-generator platform
    // NOLINTEND

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // prevent constructor by default
    CartographyContainerManagerController();

#else // @header-generator platform
#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    CartographyContainerManagerController();

#endif
#endif // @header-generator platform
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~CartographyContainerManagerController();
#else // @header-generator platform
    virtual ~CartographyContainerManagerController() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void postInit(std::weak_ptr<ContainerManagerController>);
#else // @header-generator platform
    virtual void postInit(::std::weak_ptr<::ContainerManagerController> self) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setPreviewItemName(::Bedrock::Safety::RedactableString const&);
#else // @header-generator platform
    virtual bool isOutputSlot(::std::string const& collectionName) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setItemName(::Bedrock::Safety::RedactableString const&);
#else // @header-generator platform
    virtual ::ItemStackBase const& getTakeableItemStackBase(::SlotData const& slot) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Safety::RedactableString const& getPreviewItemName() const;
#else // @header-generator platform
    virtual void setPreviewItemName(::Bedrock::Safety::RedactableString const& name) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Safety::RedactableString const& getItemName() const;
#else // @header-generator platform
    virtual void setItemName(::Bedrock::Safety::RedactableString const& name) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void updatePreviewItem();
#else // @header-generator platform
    virtual ::Bedrock::Safety::RedactableString const& getPreviewItemName() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ItemStackBase const& getTakeableItemStackBase(::SlotData const&) const;
#else // @header-generator platform
    virtual ::Bedrock::Safety::RedactableString const& getItemName() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool handleTakeAmount(::SlotData const&, int, ::SlotData const&);
#else // @header-generator platform
    virtual void updatePreviewItem() /*override*/;
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
    virtual bool handlePlaceAll(::SelectedSlotInfo const& selected, ::SlotData const& dstSlot) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool handlePlaceOne(::SlotData const&, ::SlotData const&);
#else // @header-generator platform
    virtual bool handleTakeHalf(::SlotData const& dstSlot, ::SlotData const& srcSlot) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int handleAutoPlace(::SlotData const&, int, std::vector<AutoPlaceItem> const&, std::vector<AutoPlaceResult>&);
#else // @header-generator platform
    virtual bool handlePlaceOne(::SlotData const& srcSlot, ::SlotData const& dstSlot) /*override*/;
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
    virtual void _onContainerScreenAction(::ContainerScreenActionResult const& result) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void _onItemAcquired(::ItemInstance const&, ::SlotData const&);
#else // @header-generator platform
    virtual ::CreateContainerItemScope
    _makeCreateItemScope(::SlotData const& srcSlot, ::ItemTransferAmount const&) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void _onContainerScreenAction(::ContainerScreenActionResult const&);
#else // @header-generator platform
    virtual void _onItemAcquired(::ItemInstance const& instance, ::SlotData const& srcSlot) /*override*/;
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
    MCNAPI explicit CartographyContainerManagerController(std::weak_ptr<CartographyContainerManagerModel>);

    MCNAPI bool _handleTransferCraft(::SlotData const&, ::SlotData const&);

    MCNAPI std::string const& getItemResultLocName() const;

    MCNAPI ::MapOutputType getMapOutputType() const;

    MCNAPI void setIsCurrentlyRenaming(bool);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI explicit CartographyContainerManagerController(
        ::std::weak_ptr<::CartographyContainerManagerModel> containerManagerModel
    );

    MCNAPI bool _handleTransferCraft(::SlotData const& srcSlot, ::SlotData const& dstSlot);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::weak_ptr<CartographyContainerManagerModel>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::std::weak_ptr<::CartographyContainerManagerModel> containerManagerModel);
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

    MCNAPI bool $isOutputSlot(::std::string const& collectionName) const;

    MCNAPI ::ItemStackBase const& $getTakeableItemStackBase(::SlotData const& slot) const;

    MCNAPI void $setPreviewItemName(::Bedrock::Safety::RedactableString const& name);

    MCNAPI void $setItemName(::Bedrock::Safety::RedactableString const& name);

    MCNAPI ::Bedrock::Safety::RedactableString const& $getPreviewItemName() const;

    MCNAPI ::Bedrock::Safety::RedactableString const& $getItemName() const;

    MCNAPI void $updatePreviewItem();

    MCNAPI bool $handleTakeAmount(::SlotData const& dstSlot, int amount, ::SlotData const& srcSlot);

    MCNAPI bool $handleTakeAll(::SlotData const& dstSlot, ::SlotData const& srcSlot);

    MCNAPI bool $handlePlaceAll(::SelectedSlotInfo const& selected, ::SlotData const& dstSlot);

    MCNAPI bool $handleTakeHalf(::SlotData const& dstSlot, ::SlotData const& srcSlot);

    MCNAPI bool $handlePlaceOne(::SlotData const& srcSlot, ::SlotData const& dstSlot);

    MCNAPI int $handleAutoPlace(
        ::SlotData const&                     srcSlot,
        int                                   amount,
        ::std::vector<::AutoPlaceItem> const& autoPlaceOrder,
        ::std::vector<::AutoPlaceResult>&     destinations
    );

    MCNAPI void $_onContainerScreenAction(::ContainerScreenActionResult const& result);

    MCNAPI ::CreateContainerItemScope $_makeCreateItemScope(::SlotData const& srcSlot, ::ItemTransferAmount const&);

    MCNAPI void $_onItemAcquired(::ItemInstance const& instance, ::SlotData const& srcSlot);

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
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND
};
