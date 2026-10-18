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
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ProtectionEnchant();
#else // @header-generator platform
    virtual int getMinCost(int level) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int getMinCost(int) const;
#else // @header-generator platform
    virtual int getMaxCost(int level) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int getMaxCost(int) const;
#else // @header-generator platform
    virtual int getMaxLevel() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int getMaxLevel() const;
#else // @header-generator platform
    virtual int getDamageProtection(int level, ::ActorDamageSource const& source) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int getDamageProtection(int, ::ActorDamageSource const&) const;
#else // @header-generator platform
    virtual void doPostHurt(::ItemInstance& item, ::Actor& victim, ::Actor& attacker, int level) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void doPostHurt(::ItemInstance&, ::Actor&, ::Actor&, int) const;
#else // @header-generator platform
    virtual bool isProtectionEnchant() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isProtectionEnchant() const;

    virtual bool _isValidEnchantmentTypeForCategory(::Enchant::Type) const;
#else // @header-generator platform
    virtual bool _isValidEnchantmentTypeForCategory(::Enchant::Type type) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static float const& THORNS_CHANCE_PER_LEVEL();

    MCNAPI static std::vector<Enchant::Type> const& VALID_ENCHANTMENTS();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI static ::std::vector<::Enchant::Type> const& VALID_ENCHANTMENTS();
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getMinCost(int) const;
#else // @header-generator platform
    MCAPI int $getMinCost(int level) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getMaxCost(int) const;
#else // @header-generator platform
    MCAPI int $getMaxCost(int level) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getMaxLevel() const;
#else // @header-generator platform
    MCAPI int $getMaxLevel() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getDamageProtection(int, ::ActorDamageSource const&) const;
#else // @header-generator platform
    MCAPI int $getDamageProtection(int level, ::ActorDamageSource const& source) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $doPostHurt(::ItemInstance&, ::Actor&, ::Actor&, int) const;
#else // @header-generator platform
    MCAPI void $doPostHurt(::ItemInstance& item, ::Actor& victim, ::Actor& attacker, int level) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isProtectionEnchant() const;
#else // @header-generator platform
    MCFOLD bool $isProtectionEnchant() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $_isValidEnchantmentTypeForCategory(::Enchant::Type) const;
    // NOLINTEND
#else // @header-generator platform
    MCAPI bool $_isValidEnchantmentTypeForCategory(::Enchant::Type type) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};
