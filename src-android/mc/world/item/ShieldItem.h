#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/world/item/InHandUpdateType.h"
#include "mc/world/item/Item.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BaseGameVersion;
class BlockSource;
class CompoundTag;
class Container;
class HashedString;
class IDataInput;
class IDataOutput;
class ItemDescriptor;
class ItemStack;
class ItemStackBase;
class Level;
class Mob;
class Player;
class ReadOnlyBinaryStream;
class Vec3;
namespace Bedrock::Safety { class RedactableString; }
// clang-format on

class ShieldItem : public ::Item {
public:
    // prevent constructor by default
    ShieldItem();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~ShieldItem();

    virtual bool isHandEquipped() const;

    virtual void appendFormattedHovertext(::ItemStackBase const&, ::Level&, ::Bedrock::Safety::RedactableString&, bool const) const;

    virtual bool isValidRepairItem(::ItemStackBase const&, ::ItemStackBase const&, ::BaseGameVersion const&) const;

    virtual int getEnchantSlot() const;

    virtual ::SharedTypes::Legacy::LevelSoundEvent getEquipSound() const;

    virtual ::ItemStack& use(::ItemStack&, ::Player&) const;

    virtual bool dispense(::BlockSource&, ::Container&, int, ::Vec3 const&, uchar) const;

    virtual void hurtActor(::ItemStack&, ::Actor&, ::Mob&) const;

    virtual std::string buildDescriptionId(::ItemDescriptor const&, ::CompoundTag const*) const;

    virtual void readUserData(::ItemStackBase&, ::IDataInput&, ::ReadOnlyBinaryStream&) const;

    virtual void writeUserData(::ItemStackBase const&, ::IDataOutput&) const;

    virtual bool inventoryTick(::ItemStack&, ::Level&, ::Actor&, int, bool) const;

    virtual ::HashedString const& getCooldownCategory() const;

    virtual int getCooldownDuration() const;

    virtual ::InHandUpdateType getInHandUpdateType(::Player const&, ::ItemStack const&, ::ItemStack const&, bool const, bool const) const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ShieldItem(std::string const&, int);

    MCNAPI void playBlockSound(::Player*) const;

    MCNAPI void playBreakSound(::Player*) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static int const getBaseColor(::CompoundTag const*);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static int const& EFFECTIVE_BLOCK_DELAY();

    MCNAPI static int const& IN_HAND_BLOCK_DURATION();

    MCNAPI static int const& NO_SHIELD_PATTERN();

    MCNAPI static std::string const& TIMESTAMP_TAG();
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
    MCNAPI bool $isHandEquipped() const;

    MCNAPI void
    $appendFormattedHovertext(::ItemStackBase const&, ::Level&, ::Bedrock::Safety::RedactableString&, bool const) const;

    MCNAPI bool $isValidRepairItem(::ItemStackBase const&, ::ItemStackBase const&, ::BaseGameVersion const&) const;

    MCNAPI int $getEnchantSlot() const;

    MCNAPI ::SharedTypes::Legacy::LevelSoundEvent $getEquipSound() const;

    MCNAPI ::ItemStack& $use(::ItemStack&, ::Player&) const;

    MCNAPI bool $dispense(::BlockSource&, ::Container&, int, ::Vec3 const&, uchar) const;

    MCNAPI void $hurtActor(::ItemStack&, ::Actor&, ::Mob&) const;

    MCNAPI std::string $buildDescriptionId(::ItemDescriptor const&, ::CompoundTag const*) const;

    MCNAPI void $readUserData(::ItemStackBase&, ::IDataInput&, ::ReadOnlyBinaryStream&) const;

    MCNAPI void $writeUserData(::ItemStackBase const&, ::IDataOutput&) const;

    MCNAPI bool $inventoryTick(::ItemStack&, ::Level&, ::Actor&, int, bool) const;

    MCNAPI ::HashedString const& $getCooldownCategory() const;

    MCNAPI int $getCooldownDuration() const;

    MCNAPI ::InHandUpdateType
    $getInHandUpdateType(::Player const&, ::ItemStack const&, ::ItemStack const&, bool const, bool const) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
