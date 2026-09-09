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
class Vec3;
// clang-format on

class NautilusArmorItem : public ::Item {
public:
    // NautilusArmorItem inner types define
    enum class Tier : int {
        NONE      = 0,
        COPPER    = 1,
        IRON      = 2,
        GOLD      = 3,
        DIAMOND   = 4,
        NETHERITE = 5,
        COUNT     = 6,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::NautilusArmorItem::Tier> mTier;
    // NOLINTEND

public:
    // prevent constructor by default
    NautilusArmorItem();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~NautilusArmorItem();

    virtual bool isBodyArmor() const;

    virtual int getArmorValue() const;

    virtual int getToughnessValue() const;

    virtual float getKnockbackResistanceValue() const;

    virtual bool dispense(::BlockSource&, ::Container&, int, ::Vec3 const&, uchar) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI NautilusArmorItem(std::string const&, int, ::NautilusArmorItem::Tier);

    MCNAPI ::NautilusArmorItem::Tier getTier() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&, int, ::NautilusArmorItem::Tier);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isBodyArmor() const;

    MCNAPI int $getArmorValue() const;

    MCNAPI int $getToughnessValue() const;

    MCNAPI float $getKnockbackResistanceValue() const;

    MCNAPI bool $dispense(::BlockSource&, ::Container&, int, ::Vec3 const&, uchar) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
