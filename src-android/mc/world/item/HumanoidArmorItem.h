#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/deps/shared_types/legacy/actor/ActorLocation.h"
#include "mc/deps/shared_types/legacy/actor/ArmorSlot.h"
#include "mc/world/item/Item.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BaseGameVersion;
class BlockSource;
class CompoundTag;
class Container;
class ItemDescriptor;
class ItemInstance;
class ItemStack;
class ItemStackBase;
class Level;
class Mob;
class Player;
class Vec3;
struct ResolvedItemIconInfo;
namespace Bedrock::Safety { class RedactableString; }
namespace mce { class Color; }
// clang-format on

class HumanoidArmorItem : public ::Item {
public:
    // HumanoidArmorItem inner types declare
    // clang-format off
    class ArmorMaterial;
    // clang-format on

    // HumanoidArmorItem inner types define
    enum Tier : uint {
        TIER_LEATHER   = 0,
        TIER_CHAIN     = 1,
        TIER_IRON      = 2,
        TIER_DIAMOND   = 3,
        TIER_GOLD      = 4,
        TIER_ELYTRA    = 5,
        TIER_TURTLE    = 6,
        TIER_NETHERITE = 7,
        TIER_COPPER    = 8,
    };

    class ArmorMaterial {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int>     mDurabilityMultiplier;
        ::ll::TypedStorage<4, 16, int[4]> mSlotProtections;
        ::ll::TypedStorage<4, 4, int>     mToughnessValue;
        ::ll::TypedStorage<4, 4, int>     mEnchantmentValue;
        ::ll::TypedStorage<4, 4, float>   mKnockbackResistance;
        // NOLINTEND

    public:
        // prevent constructor by default
        ArmorMaterial();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::ArmorSlot const>    mSlot;
    ::ll::TypedStorage<4, 4, int const>                                 mDefense;
    ::ll::TypedStorage<4, 4, int const>                                 mModelIndex;
    ::ll::TypedStorage<8, 8, ::HumanoidArmorItem::ArmorMaterial const&> mArmorType;
    ::ll::TypedStorage<1, 1, bool>                                      mCurrentVersionAllowsTrim;
    // NOLINTEND

public:
    // prevent constructor by default
    HumanoidArmorItem& operator=(HumanoidArmorItem const&);
    HumanoidArmorItem(HumanoidArmorItem const&);
    HumanoidArmorItem();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~HumanoidArmorItem();

    virtual bool isHumanoidArmor() const;

    virtual bool isDyeable() const;

    virtual bool isTrimAllowed() const;

    virtual void appendFormattedHovertext(::ItemStackBase const&, ::Level&, ::Bedrock::Safety::RedactableString&, bool const) const;

    virtual bool isValidRepairItem(::ItemStackBase const&, ::ItemStackBase const&, ::BaseGameVersion const&) const;

    virtual int getEnchantSlot() const;

    virtual int getEnchantValue() const;

    virtual int getArmorValue() const;

    virtual int getToughnessValue() const;

    virtual float getKnockbackResistanceValue() const;

    virtual ::SharedTypes::Legacy::LevelSoundEvent getEquipSound() const;

    virtual int getDamageChance(int) const;

    virtual ::mce::Color getColor(::CompoundTag const*, ::ItemDescriptor const&) const;

    virtual bool hasCustomColor(::CompoundTag const*) const;

    virtual void clearColor(::ItemStackBase&) const;

    virtual void setColor(::ItemStackBase&, ::mce::Color const&) const;

    virtual int buildIdAux(short, ::CompoundTag const*) const;

    virtual ::ItemStack& use(::ItemStack&, ::Player&) const;

    virtual bool dispense(::BlockSource&, ::Container&, int, ::Vec3 const&, uchar) const;

    virtual void hurtActor(::ItemStack&, ::Actor&, ::Mob&) const;

    virtual ::SharedTypes::Legacy::ActorLocation getEquipLocation() const;

    virtual ::ResolvedItemIconInfo getIconInfo(::ItemStackBase const&, int, bool) const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI HumanoidArmorItem(
        std::string const&,
        short,
        ::HumanoidArmorItem::ArmorMaterial const&,
        int,
        ::SharedTypes::Legacy::ArmorSlot,
        bool
    );

    MCNAPI ::ItemInstance getTierItem() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void ResetDefaultLeatherColor();

    MCNAPI static void SetDefaultLeatherColor(int);

    MCNAPI static bool isDamageable(::ItemDescriptor const&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::HumanoidArmorItem::ArmorMaterial const& CHAIN();

    MCNAPI static ::HumanoidArmorItem::ArmorMaterial const& COPPER();

    MCNAPI static ::mce::Color& DEFAULT_LEATHER_COLOR();

    MCNAPI static ::HumanoidArmorItem::ArmorMaterial const& DIAMOND();

    MCNAPI static ::HumanoidArmorItem::ArmorMaterial const& ELYTRA();

    MCNAPI static ::HumanoidArmorItem::ArmorMaterial const& GOLD();

    MCNAPI static ::HumanoidArmorItem::ArmorMaterial const& IRON();

    MCNAPI static ::HumanoidArmorItem::ArmorMaterial const& LEATHER();

    MCNAPI static ::HumanoidArmorItem::ArmorMaterial const& NETHERITE();

    MCNAPI static ::HumanoidArmorItem::ArmorMaterial const& TURTLE();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        std::string const&,
        short,
        ::HumanoidArmorItem::ArmorMaterial const&,
        int,
        ::SharedTypes::Legacy::ArmorSlot,
        bool
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isHumanoidArmor() const;

    MCNAPI bool $isDyeable() const;

    MCNAPI bool $isTrimAllowed() const;

    MCNAPI void
    $appendFormattedHovertext(::ItemStackBase const&, ::Level&, ::Bedrock::Safety::RedactableString&, bool const) const;

    MCNAPI bool $isValidRepairItem(::ItemStackBase const&, ::ItemStackBase const&, ::BaseGameVersion const&) const;

    MCNAPI int $getEnchantSlot() const;

    MCNAPI int $getEnchantValue() const;

    MCNAPI int $getArmorValue() const;

    MCNAPI int $getToughnessValue() const;

    MCNAPI float $getKnockbackResistanceValue() const;

    MCNAPI ::SharedTypes::Legacy::LevelSoundEvent $getEquipSound() const;

    MCNAPI int $getDamageChance(int) const;

    MCNAPI ::mce::Color $getColor(::CompoundTag const*, ::ItemDescriptor const&) const;

    MCNAPI bool $hasCustomColor(::CompoundTag const*) const;

    MCNAPI void $clearColor(::ItemStackBase&) const;

    MCNAPI void $setColor(::ItemStackBase&, ::mce::Color const&) const;

    MCNAPI int $buildIdAux(short, ::CompoundTag const*) const;

    MCNAPI ::ItemStack& $use(::ItemStack&, ::Player&) const;

    MCNAPI bool $dispense(::BlockSource&, ::Container&, int, ::Vec3 const&, uchar) const;

    MCNAPI void $hurtActor(::ItemStack&, ::Actor&, ::Mob&) const;

    MCNAPI ::SharedTypes::Legacy::ActorLocation $getEquipLocation() const;

    MCNAPI ::ResolvedItemIconInfo $getIconInfo(::ItemStackBase const&, int, bool) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
