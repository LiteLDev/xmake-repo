#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/Item.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockSource;
class Container;
class ItemStack;
class ItemStackBase;
class Player;
class Vec3;
// clang-format on

class ExperiencePotionItem : public ::Item {
public:
    // prevent constructor by default
    ExperiencePotionItem();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ExperiencePotionItem();

    virtual bool isThrowable() const;

    virtual bool isGlint(::ItemStackBase const&) const;

    virtual ::ItemStack& use(::ItemStack&, ::Player&) const;

    virtual ::Actor* createProjectileActor(::BlockSource&, ::ItemStack const&, ::Vec3 const&, ::Vec3 const&) const;

    virtual bool dispense(::BlockSource&, ::Container&, int, ::Vec3 const&, uchar) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ExperiencePotionItem(std::string const&, int);
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

    MCNAPI bool $isGlint(::ItemStackBase const&) const;

    MCNAPI ::ItemStack& $use(::ItemStack&, ::Player&) const;

    MCNAPI ::Actor* $createProjectileActor(::BlockSource&, ::ItemStack const&, ::Vec3 const&, ::Vec3 const&) const;

    MCNAPI bool $dispense(::BlockSource&, ::Container&, int, ::Vec3 const&, uchar) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
