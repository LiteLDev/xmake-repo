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
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int getCountToPickUp(::Actor const&, ::ItemActor const&) const;
#else // @header-generator platform
    MCAPI int getCountToPickUp(::Actor const& owner, ::ItemStack const& item) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int getCountToPickUp(::Actor const&, ::ItemStack const&) const;
#else // @header-generator platform
    MCAPI int getSlotToSwap(::Actor const& owner, ::ItemActor const& itemActor) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int getSlotToSwap(::Actor const&, ::ItemActor const&) const;
#else // @header-generator platform
    MCAPI int hasSurplus(
        ::Actor const&     owner,
        ::ItemStack const& item,
        ::ItemStack&       resultStack,
        bool               includeStackSizeofItem
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int hasSurplus(::Actor const&, ::ItemStack const&, bool) const;
#else // @header-generator platform
    MCAPI bool
    itemBelongsInInventory(::Actor const& owner, ::ItemStack const& item, bool canPickupToHandOrEquipment) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int hasSurplus(::Actor const&, ::ItemStack const&, ::ItemStack&, bool) const;
#else // @header-generator platform
    MCAPI int wantsMore(::Actor const& owner, ::ItemStack const& item) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool itemBelongsInInventory(::Actor const&, ::ItemStack const&, bool) const;

    MCNAPI int wantsMore(::Actor const&, ::ItemStack const&) const;

    MCNAPI bool willPickup(::Actor const&, ::ItemStack const&, bool, bool) const;
#else // @header-generator platform
    MCAPI bool willPickup(
        ::Actor const&     owner,
        ::ItemStack const& item,
        bool               canPickupAnyItem,
        bool               canPickupToHandOrEquipment
    ) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool _canPickupItem(::ItemStack const&, ::ItemStack const&, int, bool);
#else // @header-generator platform
    MCAPI static bool
    _canPickupItem(::ItemStack const& item, ::ItemStack const& carriedItem, int maxAmount, bool singularPickupOnly);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool _shouldReplaceItem(::ItemStack const&, ::ItemStack const&, ::ShareableDefinition const&, bool);
#else // @header-generator platform
    MCAPI static bool _shouldReplaceItem(
        ::ItemStack const&           itemToReplace,
        ::ItemStack const&           newItem,
        ::ShareableDefinition const& shareable,
        bool                         canPickupAnyItem
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool _useLegacySurplusRules(::Level const&);
#else // @header-generator platform
    MCAPI static bool _useLegacySurplusRules(::Level const& level);
#endif // @header-generator platform
    // NOLINTEND
};
