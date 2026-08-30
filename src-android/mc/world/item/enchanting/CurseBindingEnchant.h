#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/enchanting/Enchant.h"

class CurseBindingEnchant : public ::Enchant {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CurseBindingEnchant();

    virtual int getMinCost(int) const;

    virtual int getMaxCost(int) const;

    virtual bool isTreasureOnly() const;
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

    MCNAPI bool $isTreasureOnly() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
