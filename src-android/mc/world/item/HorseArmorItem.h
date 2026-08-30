#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/Item.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockSource;
class CompoundTag;
class Container;
class ItemDescriptor;
class ItemStack;
class ItemStackBase;
class Level;
class Vec3;
namespace Bedrock::Safety { class RedactableString; }
namespace mce { class Color; }
// clang-format on

class HorseArmorItem : public ::Item {
public:
    // HorseArmorItem inner types define
    enum class Tier : int {
        NONE      = 0,
        LEATHER   = 1,
        IRON      = 2,
        GOLD      = 3,
        DIAMOND   = 4,
        COPPER    = 5,
        NETHERITE = 6,
        COUNT     = 7,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int const>              mDefense;
    ::ll::TypedStorage<4, 4, ::HorseArmorItem::Tier> mTier;
    // NOLINTEND

public:
    // prevent constructor by default
    HorseArmorItem();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~HorseArmorItem();

    virtual bool isDyeable() const;

    virtual bool isBodyArmor() const;

    virtual void appendFormattedHovertext(::ItemStackBase const&, ::Level&, ::Bedrock::Safety::RedactableString&, bool const) const;

    virtual int getArmorValue() const;

    virtual int getToughnessValue() const;

    virtual float getKnockbackResistanceValue() const;

    virtual ::mce::Color getColor(::CompoundTag const*, ::ItemDescriptor const&) const;

    virtual bool hasCustomColor(::CompoundTag const*) const;

    virtual void clearColor(::ItemStackBase&) const;

    virtual void setColor(::ItemStackBase&, ::mce::Color const&) const;

    virtual bool dispense(::BlockSource&, ::Container&, int, ::Vec3 const&, uchar) const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI HorseArmorItem(std::string const&, int, ::HorseArmorItem::Tier);

    MCNAPI ::HorseArmorItem::Tier getTier() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void ResetDefaultHorseLeatherColor();

    MCNAPI static void SetDefaultHorseLeatherColor(int);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&, int, ::HorseArmorItem::Tier);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isDyeable() const;

    MCNAPI bool $isBodyArmor() const;

    MCNAPI void
    $appendFormattedHovertext(::ItemStackBase const&, ::Level&, ::Bedrock::Safety::RedactableString&, bool const) const;

    MCNAPI int $getArmorValue() const;

    MCNAPI int $getToughnessValue() const;

    MCNAPI float $getKnockbackResistanceValue() const;

    MCNAPI ::mce::Color $getColor(::CompoundTag const*, ::ItemDescriptor const&) const;

    MCNAPI bool $hasCustomColor(::CompoundTag const*) const;

    MCNAPI void $clearColor(::ItemStackBase&) const;

    MCNAPI void $setColor(::ItemStackBase&, ::mce::Color const&) const;

    MCNAPI bool $dispense(::BlockSource&, ::Container&, int, ::Vec3 const&, uchar) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
