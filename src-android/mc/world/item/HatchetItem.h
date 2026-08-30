#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/DiggerItem.h"

// auto generated forward declare list
// clang-format off
struct ItemTier;
// clang-format on

class HatchetItem : public ::DiggerItem {
public:
    // prevent constructor by default
    HatchetItem();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~HatchetItem();

    virtual int getEnchantSlot() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI HatchetItem(std::string const&, int, ::ItemTier const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&, int, ::ItemTier const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI int $getEnchantSlot() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
