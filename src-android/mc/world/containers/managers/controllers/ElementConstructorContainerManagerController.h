#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/SlotData.h"
#include "mc/world/containers/controllers/ItemTakeType.h"
#include "mc/world/containers/managers/controllers/ContainerManagerController.h"
#include "mc/world/item/ItemInstance.h"
#include "mc/world/level/block/ElementType.h"

// auto generated forward declare list
// clang-format off
class CraftableElements;
class ElementConstructorContainerManagerModel;
class ItemStack;
class ItemStackBase;
struct AutoPlaceItem;
struct AutoPlaceResult;
struct CreateContainerItemScope;
struct ItemTransferAmount;
// clang-format on

class ElementConstructorContainerManagerController : public ::ContainerManagerController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::weak_ptr<ElementConstructorContainerManagerModel>> mModel;
    ::ll::UntypedStorage<8, 16>                                                       mElements;
    ::ll::UntypedStorage<8, 48>                                                       mSetParticles;
    ::ll::TypedStorage<8, 32, ::SlotData const>                                       mCreatedItemOutputSlot;
    ::ll::TypedStorage<8, 128, ::ItemInstance>                                        mResultItemPreview;
    // NOLINTEND

public:
    // prevent constructor by default
    ElementConstructorContainerManagerController();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~ElementConstructorContainerManagerController();

    virtual ::ItemStackBase const& getTakeableItemStackBase(::SlotData const&) const;

    virtual bool handleTakeAll(::SlotData const&, ::SlotData const&);

    virtual bool handleTakeHalf(::SlotData const&, ::SlotData const&);

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
    MCNAPI explicit ElementConstructorContainerManagerController(
        std::weak_ptr<ElementConstructorContainerManagerModel>
    );

    MCNAPI bool _handleOutputSwap(::SlotData const&, ::SlotData const&, ::ItemTransferAmount);

    MCNAPI bool _updateOutputPreview(::ItemStack const&);

    MCNAPI bool isStillValid(float);

    MCNAPI bool outputInteractWouldCausePlace(::SlotData const&);

    MCNAPI void setParticleCallback(std::function<void(int, int, int)>);

    MCNAPI void updateOutput(int, int, int);

    MCNAPI void updateOutputFromSlot(::SlotData const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::weak_ptr<ElementConstructorContainerManagerModel>);
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

    MCNAPI bool $handleTakeAll(::SlotData const&, ::SlotData const&);

    MCNAPI bool $handleTakeHalf(::SlotData const&, ::SlotData const&);

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
