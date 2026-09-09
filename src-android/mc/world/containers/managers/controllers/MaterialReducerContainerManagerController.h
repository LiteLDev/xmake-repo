#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/SlotData.h"
#include "mc/world/containers/managers/controllers/ContainerManagerController.h"

// auto generated forward declare list
// clang-format off
class BlockReducer;
class CraftableCompounds;
class ItemInstance;
class ItemStack;
class ItemStackBase;
class MaterialReducerContainerManagerModel;
struct AutoPlaceItem;
struct AutoPlaceResult;
struct CreateContainerItemScope;
struct ItemStackRequestScope;
struct ItemTransferAmount;
// clang-format on

class MaterialReducerContainerManagerController : public ::ContainerManagerController {
public:
    // MaterialReducerContainerManagerController inner types define
    using ActionScope = ::gsl::final_action<std::function<void()>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::weak_ptr<MaterialReducerContainerManagerModel>> mModel;
    ::ll::TypedStorage<8, 8, std::unique_ptr<CraftableCompounds>>                  mCraftableCompounds;
    ::ll::TypedStorage<8, 8, ::BlockReducer*>                                      mBlockReducer;
    ::ll::TypedStorage<1, 1, bool>                                                 mObservingContainers;
    ::ll::TypedStorage<8, 32, ::SlotData const>                                    mCreatedItemOutputSlot;
    // NOLINTEND

public:
    // prevent constructor by default
    MaterialReducerContainerManagerController();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~MaterialReducerContainerManagerController();

    virtual bool handlePlaceOne(::SlotData const&, ::SlotData const&);

    virtual int handleAutoPlace(::SlotData const&, int, std::vector<AutoPlaceItem> const&, std::vector<AutoPlaceResult>&);

    virtual bool handleSwap(::SlotData const&, ::SlotData const&);

    virtual void closeContainers();

    virtual bool isOutputSlot(std::string const&) const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit MaterialReducerContainerManagerController(std::weak_ptr<MaterialReducerContainerManagerModel>);

    MCNAPI void _destroySlot(::SlotData const&, ::ItemTransferAmount);

    MCNAPI void _fireReducerBlockEntered(::ItemStackBase const&);

    MCNAPI bool _hasAnyInput();

    MCNAPI bool _hasAnyOutput();

    MCNAPI bool canInputAddToCursor();

    MCNAPI bool isRedemptionInProgress();

    MCNAPI bool isStillValid(float);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::weak_ptr<MaterialReducerContainerManagerModel>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $handlePlaceOne(::SlotData const&, ::SlotData const&);

    MCNAPI int
    $handleAutoPlace(::SlotData const&, int, std::vector<AutoPlaceItem> const&, std::vector<AutoPlaceResult>&);

    MCNAPI bool $handleSwap(::SlotData const&, ::SlotData const&);

    MCNAPI void $closeContainers();

    MCNAPI bool $isOutputSlot(std::string const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
