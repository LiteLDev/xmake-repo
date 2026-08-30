#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ItemActor;
class ItemStack;
class Level;
class ShareableDefinition;
// clang-format on

class ShareableComponent {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI int getCountToPickUp(::Actor const&, ::ItemActor const&) const;

    MCNAPI int getCountToPickUp(::Actor const&, ::ItemStack const&) const;

    MCNAPI int getSlotToSwap(::Actor const&, ::ItemActor const&) const;

    MCNAPI int hasSurplus(::Actor const&, ::ItemStack const&, bool) const;

    MCNAPI int hasSurplus(::Actor const&, ::ItemStack const&, ::ItemStack&, bool) const;

    MCNAPI bool itemBelongsInInventory(::Actor const&, ::ItemStack const&, bool) const;

    MCNAPI int wantsMore(::Actor const&, ::ItemStack const&) const;

    MCNAPI bool willPickup(::Actor const&, ::ItemStack const&, bool, bool) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool _canPickupItem(::ItemStack const&, ::ItemStack const&, int, bool);

    MCNAPI static bool _shouldReplaceItem(::ItemStack const&, ::ItemStack const&, ::ShareableDefinition const&, bool);

    MCNAPI static bool _useLegacySurplusRules(::Level const&);
    // NOLINTEND
};
