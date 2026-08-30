#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/Container.h"
#include "mc/world/item/ItemStack.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

class CraftingContainer : public ::Container {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<ItemStack>> mItems;
    ::ll::TypedStorage<4, 4, int>                     mWidth;
    // NOLINTEND

public:
    // prevent constructor by default
    CraftingContainer();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CraftingContainer();

    virtual void serverInitItemStackIds(int, int, std::function<void(int, const ItemStack&)>);

    virtual ::ItemStack const& getItem(int) const;

    virtual void setItem(int, ::ItemStack const&);

    virtual int getContainerSize() const;

    virtual int getMaxStackSize() const;

    virtual void startOpen(::Actor&);

    virtual void stopOpen(::Actor&);

    virtual void setContainerChanged(int);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CraftingContainer(int, int);

    MCNAPI ::ItemStack const& getItem(int, int) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(int, int);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $serverInitItemStackIds(int, int, std::function<void(int, const ItemStack&)>);

    MCNAPI ::ItemStack const& $getItem(int) const;

    MCNAPI void $setItem(int, ::ItemStack const&);

    MCNAPI int $getContainerSize() const;

    MCNAPI int $getMaxStackSize() const;

    MCNAPI void $startOpen(::Actor&);

    MCNAPI void $stopOpen(::Actor&);

    MCNAPI void $setContainerChanged(int);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
