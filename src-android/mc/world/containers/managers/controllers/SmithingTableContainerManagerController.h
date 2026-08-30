#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/SlotData.h"
#include "mc/world/containers/managers/controllers/ContainerManagerController.h"
#include "mc/world/containers/managers/controllers/ItemResultPreview.h"
#include "mc/world/containers/managers/controllers/SmithingTableTemplateType.h"
#include "mc/world/inventory/network/TypedServerNetId.h"

// auto generated forward declare list
// clang-format off
class ItemInstance;
class ItemStackBase;
class SmithingTableContainerManagerModel;
struct AutoPlaceItem;
struct AutoPlaceResult;
struct CreateContainerItemScope;
struct ItemStackRequestScope;
struct ItemTransferAmount;
// clang-format on

class SmithingTableContainerManagerController : public ::ContainerManagerController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::weak_ptr<SmithingTableContainerManagerModel>> mSmithingTableContainerManagerModel;
    ::ll::TypedStorage<8, 32, ::SlotData const>                                  mCreatedItemOutputSlot;
    ::ll::TypedStorage<8, 136, ::ItemResultPreview>                              mResultPreview;
    // NOLINTEND

public:
    // prevent constructor by default
    SmithingTableContainerManagerController();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~SmithingTableContainerManagerController();

    virtual ::ItemStackBase const& getTakeableItemStackBase(::SlotData const&) const;

    virtual bool handleTakeAmount(::SlotData const&, int, ::SlotData const&);

    virtual bool handleTakeAll(::SlotData const&, ::SlotData const&);

    virtual bool handleTakeHalf(::SlotData const&, ::SlotData const&);

    virtual int handleAutoPlace(::SlotData const&, int, std::vector<AutoPlaceItem> const&, std::vector<AutoPlaceResult>&);

    virtual bool isOutputSlot(std::string const&) const;

    virtual ::CreateContainerItemScope _makeCreateItemScope(::SlotData const&, ::ItemTransferAmount const&);

    virtual void _onItemAcquired(::ItemInstance const&, ::SlotData const&);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit SmithingTableContainerManagerController(std::weak_ptr<SmithingTableContainerManagerModel>);

    MCNAPI bool _handleTransferCraft(::SlotData const&, ::SlotData const&);

    MCNAPI void _updateResultPreview();

    MCNAPI bool getHasInputItem() const;

    MCNAPI bool getHasMaterialItem() const;

    MCNAPI bool getHasTemplateItem() const;

    MCNAPI ::SmithingTableTemplateType getSmithingTableTemplateType() const;

    MCNAPI bool shouldCrossOutIconBeVisible();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::weak_ptr<SmithingTableContainerManagerModel>);
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

    MCNAPI bool $handleTakeHalf(::SlotData const&, ::SlotData const&);

    MCNAPI int
    $handleAutoPlace(::SlotData const&, int, std::vector<AutoPlaceItem> const&, std::vector<AutoPlaceResult>&);

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
