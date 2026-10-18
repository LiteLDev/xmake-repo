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
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    enum class Tier : int {
        Leather   = 0,
        Chain     = 1,
        Iron      = 2,
        Diamond   = 3,
        Gold      = 4,
        Elytra    = 5,
        Turtle    = 6,
        Netherite = 7,
        Copper    = 8,
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform

    public:
        // prevent constructor by default
        ArmorMaterial();
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    HumanoidArmorItem(
        std::string const&                   nameId,
        short                                id,
        SharedTypes::Legacy::ArmorSlot const slot,
        int const                            defense,
        int const                            modelIndex,
        ArmorMaterial const&                 armorType,
        bool                                 allowTrim
    )
    : Item(nameId, id),
      mSlot(slot),
      mDefense(defense),
      mModelIndex(modelIndex),
      mArmorType(armorType),
      mCurrentVersionAllowsTrim(allowTrim) {}

public:
#endif // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~HumanoidArmorItem();
#else // @header-generator platform
    virtual bool isHumanoidArmor() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isHumanoidArmor() const;
#else // @header-generator platform
    virtual bool isValidRepairItem(
        ::ItemStackBase const&   source,
        ::ItemStackBase const&   repairItem,
        ::BaseGameVersion const& baseGameVersion
    ) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isDyeable() const;
#else // @header-generator platform
    virtual int getEnchantSlot() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isTrimAllowed() const;
#else // @header-generator platform
    virtual int getEnchantValue() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void appendFormattedHovertext(::ItemStackBase const&, ::Level&, ::Bedrock::Safety::RedactableString&, bool const) const;
#else // @header-generator platform
    virtual int getArmorValue() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isValidRepairItem(::ItemStackBase const&, ::ItemStackBase const&, ::BaseGameVersion const&) const;
#else // @header-generator platform
    virtual int getToughnessValue() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int getEnchantSlot() const;
#else // @header-generator platform
    virtual float getKnockbackResistanceValue() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int getEnchantValue() const;
#else // @header-generator platform
    virtual bool hasCustomColor(::CompoundTag const* userData) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int getArmorValue() const;
#else // @header-generator platform
    virtual ::mce::Color getColor(::CompoundTag const* userData, ::ItemDescriptor const&) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int getToughnessValue() const;
#else // @header-generator platform
    virtual void clearColor(::ItemStackBase& instance) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual float getKnockbackResistanceValue() const;
#else // @header-generator platform
    virtual void setColor(::ItemStackBase& item, ::mce::Color const& color) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::SharedTypes::Legacy::LevelSoundEvent getEquipSound() const;
#else // @header-generator platform
    virtual bool isDyeable() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int getDamageChance(int) const;
#else // @header-generator platform
    virtual bool isTrimAllowed() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::mce::Color getColor(::CompoundTag const*, ::ItemDescriptor const&) const;
#else // @header-generator platform
    virtual ::SharedTypes::Legacy::ActorLocation getEquipLocation() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool hasCustomColor(::CompoundTag const*) const;
#else // @header-generator platform
    virtual ::SharedTypes::Legacy::LevelSoundEvent getEquipSound() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void clearColor(::ItemStackBase&) const;
#else // @header-generator platform
    virtual int getDamageChance(int unbreaking) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setColor(::ItemStackBase&, ::mce::Color const&) const;
#else // @header-generator platform
    virtual bool dispense(::BlockSource& region, ::Container& container, int slot, ::Vec3 const& pos, uchar) const
        /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int buildIdAux(short, ::CompoundTag const*) const;
#else // @header-generator platform
    virtual void appendFormattedHovertext(
        ::ItemStackBase const&               stack,
        ::Level&                             level,
        ::Bedrock::Safety::RedactableString& hovertext,
        bool const                           showCategory
    ) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ItemStack& use(::ItemStack&, ::Player&) const;
#else // @header-generator platform
    virtual void hurtActor(::ItemStack& item, ::Actor& actor, ::Mob& attacker) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool dispense(::BlockSource&, ::Container&, int, ::Vec3 const&, uchar) const;
#else // @header-generator platform
    virtual ::ResolvedItemIconInfo
    getIconInfo(::ItemStackBase const& item, int newAnimationFrame, bool inInventoryPane) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void hurtActor(::ItemStack&, ::Actor&, ::Mob&) const;
#else // @header-generator platform
    virtual ::ItemStack& use(::ItemStack& item, ::Player& player) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::SharedTypes::Legacy::ActorLocation getEquipLocation() const;

    virtual ::ResolvedItemIconInfo getIconInfo(::ItemStackBase const&, int, bool) const;
    // clang-format on
#else // @header-generator platform
    virtual int buildIdAux(short auxValue, ::CompoundTag const* userData) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ::ItemInstance getTierItem() const;
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::HumanoidArmorItem::ArmorMaterial const& CHAIN();
#else // @header-generator platform
    MCAPI static ::HumanoidArmorItem::ArmorMaterial const& CHAIN();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::HumanoidArmorItem::ArmorMaterial const& COPPER();
#else // @header-generator platform
    MCAPI static ::HumanoidArmorItem::ArmorMaterial const& COPPER();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::mce::Color& DEFAULT_LEATHER_COLOR();
#else // @header-generator platform
    MCAPI static ::mce::Color& DEFAULT_LEATHER_COLOR();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::HumanoidArmorItem::ArmorMaterial const& DIAMOND();
#else // @header-generator platform
    MCAPI static ::HumanoidArmorItem::ArmorMaterial const& DIAMOND();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::HumanoidArmorItem::ArmorMaterial const& ELYTRA();
#else // @header-generator platform
    MCAPI static ::HumanoidArmorItem::ArmorMaterial const& ELYTRA();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::HumanoidArmorItem::ArmorMaterial const& GOLD();
#else // @header-generator platform
    MCAPI static ::HumanoidArmorItem::ArmorMaterial const& GOLD();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::HumanoidArmorItem::ArmorMaterial const& IRON();
#else // @header-generator platform
    MCAPI static ::HumanoidArmorItem::ArmorMaterial const& IRON();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::HumanoidArmorItem::ArmorMaterial const& LEATHER();
#else // @header-generator platform
    MCAPI static ::HumanoidArmorItem::ArmorMaterial const& LEATHER();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::HumanoidArmorItem::ArmorMaterial const& NETHERITE();
#else // @header-generator platform
    MCAPI static ::HumanoidArmorItem::ArmorMaterial const& NETHERITE();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI static ::HumanoidArmorItem::ArmorMaterial const& TURTLE();
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isHumanoidArmor() const;
#else // @header-generator platform
    MCFOLD bool $isHumanoidArmor() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isDyeable() const;
#else // @header-generator platform
    MCAPI bool $isValidRepairItem(
        ::ItemStackBase const&   source,
        ::ItemStackBase const&   repairItem,
        ::BaseGameVersion const& baseGameVersion
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isTrimAllowed() const;
#else // @header-generator platform
    MCAPI int $getEnchantSlot() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void
    $appendFormattedHovertext(::ItemStackBase const&, ::Level&, ::Bedrock::Safety::RedactableString&, bool const) const;
#else // @header-generator platform
    MCAPI int $getEnchantValue() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isValidRepairItem(::ItemStackBase const&, ::ItemStackBase const&, ::BaseGameVersion const&) const;
#else // @header-generator platform
    MCAPI int $getArmorValue() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getEnchantSlot() const;
#else // @header-generator platform
    MCAPI int $getToughnessValue() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getEnchantValue() const;
#else // @header-generator platform
    MCAPI float $getKnockbackResistanceValue() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getArmorValue() const;
#else // @header-generator platform
    MCAPI bool $hasCustomColor(::CompoundTag const* userData) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getToughnessValue() const;
#else // @header-generator platform
    MCAPI ::mce::Color $getColor(::CompoundTag const* userData, ::ItemDescriptor const&) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float $getKnockbackResistanceValue() const;
#else // @header-generator platform
    MCFOLD void $clearColor(::ItemStackBase& instance) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::SharedTypes::Legacy::LevelSoundEvent $getEquipSound() const;
#else // @header-generator platform
    MCFOLD void $setColor(::ItemStackBase& item, ::mce::Color const& color) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getDamageChance(int) const;
#else // @header-generator platform
    MCAPI bool $isDyeable() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::mce::Color $getColor(::CompoundTag const*, ::ItemDescriptor const&) const;
#else // @header-generator platform
    MCAPI bool $isTrimAllowed() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $hasCustomColor(::CompoundTag const*) const;
#else // @header-generator platform
    MCAPI ::SharedTypes::Legacy::ActorLocation $getEquipLocation() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $clearColor(::ItemStackBase&) const;
#else // @header-generator platform
    MCAPI ::SharedTypes::Legacy::LevelSoundEvent $getEquipSound() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setColor(::ItemStackBase&, ::mce::Color const&) const;
#else // @header-generator platform
    MCAPI int $getDamageChance(int unbreaking) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $buildIdAux(short, ::CompoundTag const*) const;
#else // @header-generator platform
    MCAPI bool $dispense(::BlockSource& region, ::Container& container, int slot, ::Vec3 const& pos, uchar) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ItemStack& $use(::ItemStack&, ::Player&) const;
#else // @header-generator platform
    MCFOLD void $appendFormattedHovertext(
        ::ItemStackBase const&               stack,
        ::Level&                             level,
        ::Bedrock::Safety::RedactableString& hovertext,
        bool const                           showCategory
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $dispense(::BlockSource&, ::Container&, int, ::Vec3 const&, uchar) const;
#else // @header-generator platform
    MCFOLD void $hurtActor(::ItemStack& item, ::Actor& actor, ::Mob& attacker) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $hurtActor(::ItemStack&, ::Actor&, ::Mob&) const;
#else // @header-generator platform
    MCAPI ::ResolvedItemIconInfo
    $getIconInfo(::ItemStackBase const& item, int newAnimationFrame, bool inInventoryPane) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::SharedTypes::Legacy::ActorLocation $getEquipLocation() const;
#else // @header-generator platform
    MCAPI ::ItemStack& $use(::ItemStack& item, ::Player& player) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ResolvedItemIconInfo $getIconInfo(::ItemStackBase const&, int, bool) const;
#else // @header-generator platform
    MCAPI int $buildIdAux(short auxValue, ::CompoundTag const* userData) const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void** $vftable();
#else // @header-generator platform
    MCAPI static void** $vftable();
#endif // @header-generator platform
    // NOLINTEND
};
