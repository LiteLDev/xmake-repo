#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/controllers/ItemAddType.h"
#include "mc/world/containers/controllers/ItemPlaceType.h"
#include "mc/world/containers/controllers/ItemSetType.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/containers/controllers/ItemTakeType.h"
#include "mc/world/containers/models/ContainerCategory.h"
#include "mc/world/containers/models/ContainerExpandStatus.h"
#else // @header-generator platform
#endif // @header-generator platform

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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, std::weak_ptr<ContainerModel>> mContainerModel;
    ::ll::TypedStorage<1, 1, bool>                           mDrop;
#else // @header-generator platform
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::ContainerModel>> mContainerModel;
    ::ll::TypedStorage<1, 1, bool>                               mDrop;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    ContainerController();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~ContainerController();
#else // @header-generator platform
    virtual ~ContainerController() = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ItemInstance const& getRecipeItem(int) const;
#else // @header-generator platform
    virtual ::ItemInstance const& getRecipeItem(int slot) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canRemove(int, int) const;
#else // @header-generator platform
    virtual bool canRemove(int slot, int removeCount) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isItemAllowed(::ItemStackBase const&) const;
#else // @header-generator platform
    virtual bool isItemAllowed(::ItemStackBase const& item) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isItemFiltered(::Recipes const&, ::ItemStackBase const&) const;
#else // @header-generator platform
    virtual bool isItemFiltered(::Recipes const& recipes, ::ItemStackBase const& item) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int getBackgroundStyle(int, bool) const;
#else // @header-generator platform
    virtual int getBackgroundStyle(int slot, bool inventoryContainsItem) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ItemSetType _canSet(::ContainerScreenContext const&, int, ::ItemStackBase const&, ::ItemTransferAmount) const;
#else // @header-generator platform
#ifdef LL_PLAT_S
    virtual ::ItemSetType
    _canSet(::ContainerScreenContext const&, int, ::ItemStackBase const&, ::ItemTransferAmount) const;
#else // LL_PLAT_C
    virtual ::ItemSetType _canSet(
        ::ContainerScreenContext const& context,
        int                             modelSlot,
        ::ItemStackBase const&          item,
        ::ItemTransferAmount            transferAmount
    ) const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int _getAvailableSetCount(::ContainerScreenContext const&, int, ::ItemStackBase const&) const;
#else // @header-generator platform
#ifdef LL_PLAT_S
    virtual int _getAvailableSetCount(::ContainerScreenContext const&, int, ::ItemStackBase const&) const;
#else // LL_PLAT_C
    virtual int
    _getAvailableSetCount(::ContainerScreenContext const& context, int modelSlot, ::ItemStackBase const& item) const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool _canRemove(int, int) const;
#else // @header-generator platform
#ifdef LL_PLAT_S
    virtual bool _canRemove(int, int) const;
#else // LL_PLAT_C
    virtual bool _canRemove(int modelSlot, int removeCount) const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void _onItemChanged(int);
    // clang-format on
#else // @header-generator platform
#ifdef LL_PLAT_S
    virtual void _onItemChanged(int);
#else // LL_PLAT_C
    virtual void _onItemChanged(int modelSlot);
#endif

#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI int _addItem(::ContainerScreenContext const& context, int modelSlot, int addCount);

    MCAPI ::ItemAddType _canAdd(
        ::ContainerScreenContext const& context,
        int                             slot,
        ::ItemStackBase const&          item,
        ::ItemTransferAmount            transferAmount
    ) const;

    MCAPI bool canConsume(int modelSlot, int removeCount) const;

    MCAPI bool canDestroy(int modelSlot, int removeCount) const;

    MCAPI bool canDrop(int modelSlot, int removeCount) const;

    MCAPI ::ItemSetType canSet(
        ::ContainerScreenContext const& context,
        int                             modelSlot,
        ::ItemStackBase const&          item,
        ::ItemTransferAmount            transferAmount,
        bool                            allowSwap
    ) const;

    MCAPI ::ItemStack const& getItemStack(int slot) const;

    MCAPI ::ItemStack removeItem(int slot, int removeCount);

    MCAPI bool setItem(
        ::ContainerScreenContext const& context,
        int                             slot,
        ::ItemStack&                    stack,
        ::ItemPlaceType                 type,
        bool                            allowSwap
    );
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ItemInstance const& $getRecipeItem(int) const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCFOLD ::ItemInstance const& $getRecipeItem(int slot) const;

    MCAPI bool $canRemove(int slot, int removeCount) const;

    MCFOLD bool $isItemAllowed(::ItemStackBase const& item) const;

    MCAPI bool $isItemFiltered(::Recipes const& recipes, ::ItemStackBase const& item) const;

    MCFOLD int $getBackgroundStyle(int slot, bool inventoryContainsItem) const;

    MCAPI ::ItemSetType $_canSet(
        ::ContainerScreenContext const& context,
        int                             modelSlot,
        ::ItemStackBase const&          item,
        ::ItemTransferAmount            transferAmount
    ) const;

    MCAPI int
    $_getAvailableSetCount(::ContainerScreenContext const& context, int modelSlot, ::ItemStackBase const& item) const;

    MCAPI bool $_canRemove(int modelSlot, int removeCount) const;

    MCFOLD void $_onItemChanged(int modelSlot);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canRemove(int, int) const;
#else // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isItemAllowed(::ItemStackBase const&) const;

    MCNAPI bool $isItemFiltered(::Recipes const&, ::ItemStackBase const&) const;

    MCNAPI int $getBackgroundStyle(int, bool) const;

    MCNAPI ::ItemSetType
    $_canSet(::ContainerScreenContext const&, int, ::ItemStackBase const&, ::ItemTransferAmount) const;

    MCNAPI int $_getAvailableSetCount(::ContainerScreenContext const&, int, ::ItemStackBase const&) const;

    MCNAPI bool $_canRemove(int, int) const;

    MCNAPI void $_onItemChanged(int);
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
