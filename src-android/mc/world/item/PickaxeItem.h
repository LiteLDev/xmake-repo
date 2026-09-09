#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/DiggerItem.h"

// auto generated forward declare list
// clang-format off
class ItemStackBase;
class RenderParams;
struct ItemTier;
// clang-format on

class PickaxeItem : public ::DiggerItem {
public:
    // prevent constructor by default
    PickaxeItem();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PickaxeItem();

    virtual void executeEvent(::ItemStackBase&, std::string const&, ::RenderParams&) const;

    virtual int getEnchantSlot() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PickaxeItem(std::string const&, int, ::ItemTier const&);
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
    MCNAPI void $executeEvent(::ItemStackBase&, std::string const&, ::RenderParams&) const;

    MCNAPI int $getEnchantSlot() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
