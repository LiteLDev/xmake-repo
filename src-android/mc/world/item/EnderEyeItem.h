#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/Item.h"

// auto generated forward declare list
// clang-format off
class ItemStack;
class Level;
class Player;
// clang-format on

class EnderEyeItem : public ::Item {
public:
    // prevent constructor by default
    EnderEyeItem();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EnderEyeItem();

    virtual bool isThrowable() const;

    virtual ::ItemStack& use(::ItemStack&, ::Player&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI EnderEyeItem(std::string const&, int);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&, int);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isThrowable() const;

    MCNAPI ::ItemStack& $use(::ItemStack&, ::Player&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
