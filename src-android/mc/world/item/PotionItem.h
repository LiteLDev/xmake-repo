#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/Item.h"
#include "mc/world/item/ItemUseMethod.h"
#include "mc/world/item/ResolvedItemIconInfo.h"
#include "mc/world/item/alchemy/Potion.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class BlockSource;
class BlockType;
class CompoundTag;
class Container;
class InteractionResult;
class ItemDescriptor;
class ItemStack;
class ItemStackBase;
class Level;
class Player;
class ThrownPotion;
class Vec3;
namespace Bedrock::Safety { class RedactableString; }
// clang-format on

class PotionItem : public ::Item {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 1736, ::ResolvedItemIconInfo[31]> mPotionIcons;
    ::ll::UntypedStorage<4, 124>                            mPotionVariants;
    // NOLINTEND

public:
    // prevent constructor by default
    PotionItem();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~PotionItem();

    virtual bool isDestructive(int) const;

    virtual void appendFormattedHovertext(::ItemStackBase const&, ::Level&, ::Bedrock::Safety::RedactableString&, bool const) const;

    virtual bool isValidAuxValue(int) const;

    virtual bool uniqueAuxValues() const;

    virtual ::ItemStack& use(::ItemStack&, ::Player&) const;

    virtual bool dispense(::BlockSource&, ::Container&, int, ::Vec3 const&, uchar) const;

    virtual ::ItemUseMethod useTimeDepleted(::ItemStack&, ::Level*, ::Player*) const;

    virtual std::string buildDescriptionId(::ItemDescriptor const&, ::CompoundTag const*) const;

    virtual std::string buildEffectDescriptionName(::ItemStackBase const&, bool) const;

    virtual ::Item& setIconInfo(std::string const&, int);

    virtual ::ResolvedItemIconInfo getIconInfo(::ItemStackBase const&, int, bool) const;

    virtual ::InteractionResult _useOn(::ItemStack&, ::Actor&, ::BlockPos, uchar, ::Vec3 const&) const;

    virtual ::Potion::PotionType getPotionType() const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PotionItem(std::string const&, int);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void applyEffect(::ThrownPotion*, ::ItemStack const&);

    MCNAPI static bool isDestructivePotion(::Potion::PotionVariant);
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
    MCNAPI bool $isDestructive(int) const;

    MCNAPI void
    $appendFormattedHovertext(::ItemStackBase const&, ::Level&, ::Bedrock::Safety::RedactableString&, bool const) const;

    MCNAPI bool $isValidAuxValue(int) const;

    MCNAPI bool $uniqueAuxValues() const;

    MCNAPI ::ItemStack& $use(::ItemStack&, ::Player&) const;

    MCNAPI bool $dispense(::BlockSource&, ::Container&, int, ::Vec3 const&, uchar) const;

    MCNAPI ::ItemUseMethod $useTimeDepleted(::ItemStack&, ::Level*, ::Player*) const;

    MCNAPI std::string $buildDescriptionId(::ItemDescriptor const&, ::CompoundTag const*) const;

    MCNAPI std::string $buildEffectDescriptionName(::ItemStackBase const&, bool) const;

    MCNAPI ::Item& $setIconInfo(std::string const&, int);

    MCNAPI ::ResolvedItemIconInfo $getIconInfo(::ItemStackBase const&, int, bool) const;

    MCNAPI ::InteractionResult $_useOn(::ItemStack&, ::Actor&, ::BlockPos, uchar, ::Vec3 const&) const;

    MCNAPI ::Potion::PotionType $getPotionType() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
