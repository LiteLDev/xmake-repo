#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/ChemistryItem.h"
#include "mc/world/item/ItemColor.h"
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
    // prevent constructor by default
    ChemistryStickItem();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ChemistryStickItem();

    virtual ::Item& setMaxDamage(int);

    virtual bool showsDurabilityInCreative() const;

    virtual bool isValidRepairItem(::ItemStackBase const&, ::ItemStackBase const&, ::BaseGameVersion const&) const;

    virtual bool uniqueAuxValues() const;

    virtual ::ItemStack& use(::ItemStack&, ::Player&) const;

    virtual ::ItemUseMethod useTimeDepleted(::ItemStack&, ::Level*, ::Player*) const;

    virtual void hurtActor(::ItemStack&, ::Actor&, ::Mob&) const;

    virtual bool inventoryTick(::ItemStack&, ::Level&, ::Actor&, int, bool) const;

    virtual void fixupCommon(::ItemStackBase&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ChemistryStickItem(std::string const&, short);

    MCNAPI std::string _getColorName(int) const;

    MCNAPI void _storeActivationTimestamp(::ItemStack&, ulong, int) const;

    MCNAPI bool _tick(::ItemStack&, ulong) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::ItemColor getColorType(int);

    MCNAPI static bool isActive(int);

    MCNAPI static bool isChemistryStick(::ItemStackBase const&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
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
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Item& $setMaxDamage(int);

    MCNAPI bool $showsDurabilityInCreative() const;

    MCNAPI bool $isValidRepairItem(::ItemStackBase const&, ::ItemStackBase const&, ::BaseGameVersion const&) const;

    MCNAPI bool $uniqueAuxValues() const;

    MCNAPI ::ItemStack& $use(::ItemStack&, ::Player&) const;

    MCNAPI ::ItemUseMethod $useTimeDepleted(::ItemStack&, ::Level*, ::Player*) const;

    MCNAPI void $hurtActor(::ItemStack&, ::Actor&, ::Mob&) const;

    MCNAPI bool $inventoryTick(::ItemStack&, ::Level&, ::Actor&, int, bool) const;

    MCNAPI void $fixupCommon(::ItemStackBase&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
