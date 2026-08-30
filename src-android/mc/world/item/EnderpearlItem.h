#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/Item.h"

// auto generated forward declare list
// clang-format off
class HashedString;
class ItemStack;
class Player;
// clang-format on

class EnderpearlItem : public ::Item {
public:
    // prevent constructor by default
    EnderpearlItem();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EnderpearlItem();

    virtual bool isThrowable() const;

    virtual ::ItemStack& use(::ItemStack&, ::Player&) const;

    virtual ::HashedString const& getCooldownCategory() const;

    virtual int getCooldownDuration() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI EnderpearlItem(std::string const&, int);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::HashedString const& COOLDOWN();
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

    MCNAPI ::HashedString const& $getCooldownCategory() const;

    MCNAPI int $getCooldownDuration() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
