#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/Item.h"
#include "mc/world/item/ItemUseMethod.h"

// auto generated forward declare list
// clang-format off
class ItemStack;
class Level;
class Player;
// clang-format on

class SpyglassItem : public ::Item {
public:
    // prevent constructor by default
    SpyglassItem();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SpyglassItem();

    virtual float getViewDamping() const;

    virtual ::ItemStack& use(::ItemStack&, ::Player&) const;

    virtual ::ItemUseMethod useTimeDepleted(::ItemStack&, ::Level*, ::Player*) const;

    virtual void releaseUsing(::ItemStack&, ::Player*, int) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SpyglassItem(std::string const&, short);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&, short);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI float $getViewDamping() const;

    MCNAPI ::ItemStack& $use(::ItemStack&, ::Player&) const;

    MCNAPI ::ItemUseMethod $useTimeDepleted(::ItemStack&, ::Level*, ::Player*) const;

    MCNAPI void $releaseUsing(::ItemStack&, ::Player*, int) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
