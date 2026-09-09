#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/Item.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ItemStack;
class Mob;
// clang-format on

class CarrotOnAStickItem : public ::Item {
public:
    // prevent constructor by default
    CarrotOnAStickItem();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CarrotOnAStickItem();

    virtual bool isHandEquipped() const;

    virtual bool requiresInteract() const;

    virtual int getEnchantSlot() const;

    virtual int getEnchantValue() const;

    virtual void hurtActor(::ItemStack&, ::Actor&, ::Mob&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CarrotOnAStickItem(std::string const&, short);
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
    MCNAPI bool $isHandEquipped() const;

    MCNAPI bool $requiresInteract() const;

    MCNAPI int $getEnchantSlot() const;

    MCNAPI int $getEnchantValue() const;

    MCNAPI void $hurtActor(::ItemStack&, ::Actor&, ::Mob&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
