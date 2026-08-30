#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/enchanting/Enchant.h"

class BowEnchant : public ::Enchant {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BowEnchant();

    virtual int getMinCost(int) const;

    virtual int getMaxCost(int) const;

    virtual int getMaxLevel() const;

    virtual bool _isValidEnchantmentTypeForCategory(::Enchant::Type) const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::vector<Enchant::Type> const& VALID_ENCHANTMENTS();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI int $getMinCost(int) const;

    MCNAPI int $getMaxCost(int) const;

    MCNAPI int $getMaxLevel() const;

    MCNAPI bool $_isValidEnchantmentTypeForCategory(::Enchant::Type) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
