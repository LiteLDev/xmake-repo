#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/ChemistryItem.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/item/ItemColor.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/item/ItemUseMethod.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BaseGameVersion;
class Item;
class ItemStack;
class ItemStackBase;
class Level;
class Mob;
class Player;
// clang-format on

class ChemistryStickItem : public ::ChemistryItem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mMaxActiveTime;
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    ChemistryStickItem();

public:
#else // @header-generator platform
#endif // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ChemistryStickItem();
#else // @header-generator platform
    virtual ::ItemStack& use(::ItemStack& item, ::Player& player) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Item& setMaxDamage(int);
#else // @header-generator platform
    virtual ::ItemUseMethod useTimeDepleted(::ItemStack& inoutInstance, ::Level* level, ::Player* player) const
        /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool showsDurabilityInCreative() const;
#else // @header-generator platform
    virtual bool uniqueAuxValues() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isValidRepairItem(::ItemStackBase const&, ::ItemStackBase const&, ::BaseGameVersion const&) const;
#else // @header-generator platform
    virtual bool inventoryTick(::ItemStack& item, ::Level& level, ::Actor& owner, int slot, bool selected) const
        /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool uniqueAuxValues() const;
#else // @header-generator platform
    virtual ::Item& setMaxDamage(int maxDamage) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ItemStack& use(::ItemStack&, ::Player&) const;
#else // @header-generator platform
    virtual void hurtActor(::ItemStack& instance, ::Actor& actor, ::Mob& attacker) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ItemUseMethod useTimeDepleted(::ItemStack&, ::Level*, ::Player*) const;
#else // @header-generator platform
    virtual bool isValidRepairItem(
        ::ItemStackBase const&   source,
        ::ItemStackBase const&   repairItem,
        ::BaseGameVersion const& baseGameVersion
    ) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void hurtActor(::ItemStack&, ::Actor&, ::Mob&) const;
#else // @header-generator platform
    virtual bool showsDurabilityInCreative() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool inventoryTick(::ItemStack&, ::Level&, ::Actor&, int, bool) const;

    virtual void fixupCommon(::ItemStackBase&) const;
#else // @header-generator platform
    virtual void fixupCommon(::ItemStackBase& stack) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ChemistryStickItem(std::string const&, short);
#else // @header-generator platform
    MCAPI ::std::string _getColorName(int data) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string _getColorName(int) const;
#else // @header-generator platform
    MCAPI void _storeActivationTimestamp(::ItemStack& item, uint64 curTime, int desiredPercent) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _storeActivationTimestamp(::ItemStack&, ulong, int) const;

    MCNAPI bool _tick(::ItemStack&, ulong) const;
#else // @header-generator platform
    MCAPI bool _tick(::ItemStack& item, uint64 curTime) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::ItemColor getColorType(int);

    MCNAPI static bool isActive(int);

    MCNAPI static bool isChemistryStick(::ItemStackBase const&);
#else // @header-generator platform
    MCAPI static bool isChemistryStick(::ItemStackBase const& item);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& ACTIVATION_TIMESTAMP_TAG();

    MCNAPI static int const& ACTIVE_BIT();

    MCNAPI static int const& COLOR_BITS();

    MCNAPI static int const& COLOR_MASK();

    MCNAPI static int const& DAMAGE_BITS();

    MCNAPI static int const& DAMAGE_MASK();

    MCNAPI static int const& DAMAGE_START_BIT();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&, short);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI static ::std::string const& ACTIVATION_TIMESTAMP_TAG();
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Item& $setMaxDamage(int);
#else // @header-generator platform
    MCAPI ::ItemStack& $use(::ItemStack& item, ::Player& player) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $showsDurabilityInCreative() const;
#else // @header-generator platform
    MCAPI ::ItemUseMethod $useTimeDepleted(::ItemStack& inoutInstance, ::Level* level, ::Player* player) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isValidRepairItem(::ItemStackBase const&, ::ItemStackBase const&, ::BaseGameVersion const&) const;
#else // @header-generator platform
    MCFOLD bool $uniqueAuxValues() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $uniqueAuxValues() const;
#else // @header-generator platform
    MCAPI bool $inventoryTick(::ItemStack& item, ::Level& level, ::Actor& owner, int slot, bool selected) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ItemStack& $use(::ItemStack&, ::Player&) const;
#else // @header-generator platform
    MCAPI ::Item& $setMaxDamage(int maxDamage);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ItemUseMethod $useTimeDepleted(::ItemStack&, ::Level*, ::Player*) const;
#else // @header-generator platform
    MCFOLD void $hurtActor(::ItemStack& instance, ::Actor& actor, ::Mob& attacker) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $hurtActor(::ItemStack&, ::Actor&, ::Mob&) const;
#else // @header-generator platform
    MCFOLD bool $isValidRepairItem(
        ::ItemStackBase const&   source,
        ::ItemStackBase const&   repairItem,
        ::BaseGameVersion const& baseGameVersion
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $inventoryTick(::ItemStack&, ::Level&, ::Actor&, int, bool) const;
#else // @header-generator platform
    MCFOLD bool $showsDurabilityInCreative() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $fixupCommon(::ItemStackBase&) const;
    // NOLINTEND
#else // @header-generator platform
    MCAPI void $fixupCommon(::ItemStackBase& stack) const;
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
