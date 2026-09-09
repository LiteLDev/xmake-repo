#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/Item.h"

// auto generated forward declare list
// clang-format off
class ItemStackBase;
// clang-format on

class EnchantedBookItem : public ::Item {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mIsGlint;
    // NOLINTEND

public:
    // prevent constructor by default
    EnchantedBookItem();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EnchantedBookItem();

    virtual bool isGlint(::ItemStackBase const&) const;

    virtual int getEnchantSlot() const;

    virtual int getEnchantValue() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI EnchantedBookItem(std::string const&, int, bool);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&, int, bool);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isGlint(::ItemStackBase const&) const;

    MCNAPI int $getEnchantSlot() const;

    MCNAPI int $getEnchantValue() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
