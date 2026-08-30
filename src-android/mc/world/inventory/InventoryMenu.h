#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/world/inventory/BaseContainerMenu.h"

// auto generated forward declare list
// clang-format off
class Container;
class IContainerRegistryAccess;
class ItemStack;
class Player;
struct FullContainerName;
// clang-format on

class InventoryMenu : public ::BaseContainerMenu {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Container*> mContainer;
    ::ll::UntypedStorage<1, 16>            mContainerRegistryAccess;
    // NOLINTEND

public:
    // prevent constructor by default
    InventoryMenu();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~InventoryMenu();

    virtual void removeSlot(int, int);

    virtual void serverInitItemStackIds();

    virtual std::vector<ItemStack> getItemCopies() const;

    virtual void setSlot(int, ::ItemStack const&, bool);

    virtual ::ItemStack const& getSlot(int) const;

    virtual ::Container* _getContainer() const;

    virtual void setFullContainerSlot(int, ::FullContainerName const&, ::ItemStack const&, bool);

    virtual ::ItemStack const& getFullContainerSlot(int, ::FullContainerName const&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI InventoryMenu(::Player&, ::Container*);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Player&, ::Container*);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $removeSlot(int, int);

    MCNAPI void $serverInitItemStackIds();

    MCNAPI std::vector<ItemStack> $getItemCopies() const;

    MCNAPI void $setSlot(int, ::ItemStack const&, bool);

    MCNAPI ::ItemStack const& $getSlot(int) const;

    MCNAPI ::Container* $_getContainer() const;

    MCNAPI void $setFullContainerSlot(int, ::FullContainerName const&, ::ItemStack const&, bool);

    MCNAPI ::ItemStack const& $getFullContainerSlot(int, ::FullContainerName const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
