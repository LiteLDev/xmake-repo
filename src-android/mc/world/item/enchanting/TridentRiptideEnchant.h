#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/enchanting/Enchant.h"

class TridentRiptideEnchant : public ::Enchant {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TridentRiptideEnchant();

    virtual bool isCompatibleWith(::Enchant::Type) const;

    virtual int getMinCost(int) const;

    virtual int getMaxCost(int) const;

    virtual int getMaxLevel() const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isCompatibleWith(::Enchant::Type) const;

    MCNAPI int $getMinCost(int) const;

    MCNAPI int $getMaxCost(int) const;

    MCNAPI int $getMaxLevel() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
