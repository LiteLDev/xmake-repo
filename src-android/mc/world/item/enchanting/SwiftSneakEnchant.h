#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/enchanting/Enchant.h"

class SwiftSneakEnchant : public ::Enchant {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SwiftSneakEnchant();

    virtual int getMinCost(int) const;

    virtual int getMaxCost(int) const;

    virtual int getMaxLevel() const;

    virtual bool isTreasureOnly() const;

    virtual bool isDiscoverable() const;
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

    MCNAPI bool $isTreasureOnly() const;

    MCNAPI bool $isDiscoverable() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
