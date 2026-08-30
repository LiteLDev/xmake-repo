#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/ChemistryItem.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockSource;
class Container;
class HashedString;
class ItemStack;
class Player;
class Vec3;
// clang-format on

class IceBombItem : public ::ChemistryItem {
public:
    // prevent constructor by default
    IceBombItem();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IceBombItem();

    virtual bool isThrowable() const;

    virtual ::ItemStack& use(::ItemStack&, ::Player&) const;

    virtual ::Actor* createProjectileActor(::BlockSource&, ::ItemStack const&, ::Vec3 const&, ::Vec3 const&) const;

    virtual bool dispense(::BlockSource&, ::Container&, int, ::Vec3 const&, uchar) const;

    virtual ::HashedString const& getCooldownCategory() const;

    virtual int getCooldownDuration() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI IceBombItem(std::string const&, int);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::HashedString const& COOLDOWN_CATEGORY();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&, int);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isThrowable() const;

    MCNAPI ::ItemStack& $use(::ItemStack&, ::Player&) const;

    MCNAPI ::Actor* $createProjectileActor(::BlockSource&, ::ItemStack const&, ::Vec3 const&, ::Vec3 const&) const;

    MCNAPI bool $dispense(::BlockSource&, ::Container&, int, ::Vec3 const&, uchar) const;

    MCNAPI ::HashedString const& $getCooldownCategory() const;

    MCNAPI int $getCooldownDuration() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
