#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/controllers/ItemAddType.h"
#include "mc/world/containers/controllers/ItemPlaceType.h"
#include "mc/world/containers/controllers/ItemSetType.h"
#include "mc/world/containers/controllers/ItemTakeType.h"
#include "mc/world/containers/models/ContainerCategory.h"
#include "mc/world/containers/models/ContainerExpandStatus.h"

// auto generated forward declare list
// clang-format off
class ContainerModel;
class ContainerScreenContext;
class ItemInstance;
class ItemStack;
class ItemStackBase;
class Recipes;
struct ItemTransferAmount;
// clang-format on

class ContainerController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::weak_ptr<ContainerModel>> mContainerModel;
    ::ll::TypedStorage<1, 1, bool>                           mDrop;
    // NOLINTEND

public:
    // prevent constructor by default
    ContainerController();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~ContainerController();

    virtual ::ItemInstance const& getRecipeItem(int) const;

    virtual bool canRemove(int, int) const;

    virtual bool isItemAllowed(::ItemStackBase const&) const;

    virtual bool isItemFiltered(::Recipes const&, ::ItemStackBase const&) const;

    virtual int getBackgroundStyle(int, bool) const;

    virtual ::ItemSetType _canSet(::ContainerScreenContext const&, int, ::ItemStackBase const&, ::ItemTransferAmount) const;

    virtual int _getAvailableSetCount(::ContainerScreenContext const&, int, ::ItemStackBase const&) const;

    virtual bool _canRemove(int, int) const;

    virtual void _onItemChanged(int);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI int _addItem(::ContainerScreenContext const&, int, int);

    MCNAPI ::ItemAddType
    _canAdd(::ContainerScreenContext const&, int, ::ItemStackBase const&, ::ItemTransferAmount) const;

    MCNAPI ::ItemSetType
    canSet(::ContainerScreenContext const&, int, ::ItemStackBase const&, ::ItemTransferAmount, bool) const;

    MCNAPI std::weak_ptr<ContainerModel> getContainerModel() const;

    MCNAPI std::string const& getContainerName() const;

    MCNAPI int getContainerSize() const;

    MCNAPI ::ItemInstance const& getItemInstance(int) const;

    MCNAPI ::ItemStack const& getItemStack(int) const;

    MCNAPI ::ItemStackBase const& getItemStackBase(int) const;

    MCNAPI bool isExpandableItemFiltered(int) const;

    MCNAPI bool isItemInstanceBased() const;

    MCNAPI ::ItemStack removeItem(int, int);

    MCNAPI bool setItem(::ContainerScreenContext const&, int, ::ItemStack&, ::ItemPlaceType, bool);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::ItemInstance const& $getRecipeItem(int) const;

    MCNAPI bool $canRemove(int, int) const;

    MCNAPI bool $isItemAllowed(::ItemStackBase const&) const;

    MCNAPI bool $isItemFiltered(::Recipes const&, ::ItemStackBase const&) const;

    MCNAPI int $getBackgroundStyle(int, bool) const;

    MCNAPI ::ItemSetType
    $_canSet(::ContainerScreenContext const&, int, ::ItemStackBase const&, ::ItemTransferAmount) const;

    MCNAPI int $_getAvailableSetCount(::ContainerScreenContext const&, int, ::ItemStackBase const&) const;

    MCNAPI bool $_canRemove(int, int) const;

    MCNAPI void $_onItemChanged(int);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
