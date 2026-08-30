#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/enchanting/Enchant.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorDamageSource;
class ItemInstance;
// clang-format on

class ProtectionEnchant : public ::Enchant {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ProtectionEnchant();

    virtual int getMinCost(int) const;

    virtual int getMaxCost(int) const;

    virtual int getMaxLevel() const;

    virtual int getDamageProtection(int, ::ActorDamageSource const&) const;

    virtual void doPostHurt(::ItemInstance&, ::Actor&, ::Actor&, int) const;

    virtual bool isProtectionEnchant() const;

    virtual bool _isValidEnchantmentTypeForCategory(::Enchant::Type) const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static float const& THORNS_CHANCE_PER_LEVEL();

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

    MCNAPI int $getDamageProtection(int, ::ActorDamageSource const&) const;

    MCNAPI void $doPostHurt(::ItemInstance&, ::Actor&, ::Actor&, int) const;

    MCNAPI bool $isProtectionEnchant() const;

    MCNAPI bool $_isValidEnchantmentTypeForCategory(::Enchant::Type) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
