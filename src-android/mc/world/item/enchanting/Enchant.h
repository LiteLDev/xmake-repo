#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/shared_types/item/EnchantSlot.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorDamageSource;
class BaseGameVersion;
class Experiments;
class ItemInstance;
struct EnchantSlotEnumHasher;
// clang-format on

class Enchant {
public:
    // Enchant inner types define
    enum class Type : uchar {
        Protection           = 0,
        FireProtection       = 1,
        FeatherFalling       = 2,
        BlastProtection      = 3,
        ProjectileProtection = 4,
        Thorns               = 5,
        Respiration          = 6,
        DepthStrider         = 7,
        AquaAffinity         = 8,
        Sharpness            = 9,
        Smite                = 10,
        BaneOfArthropods     = 11,
        Knockback            = 12,
        FireAspect           = 13,
        Looting              = 14,
        Efficiency           = 15,
        SilkTouch            = 16,
        Unbreaking           = 17,
        Fortune              = 18,
        Power                = 19,
        Punch                = 20,
        Flame                = 21,
        Infinity             = 22,
        LuckOfTheSea         = 23,
        Lure                 = 24,
        FrostWalker          = 25,
        Mending              = 26,
        CurseOfBinding       = 27,
        CurseOfVanishing     = 28,
        Impaling             = 29,
        Riptide              = 30,
        Loyalty              = 31,
        Channeling           = 32,
        Multishot            = 33,
        Piercing             = 34,
        QuickCharge          = 35,
        SoulSpeed            = 36,
        SwiftSneak           = 37,
        WindBurst            = 38,
        Density              = 39,
        Breach               = 40,
        Lunge                = 41,
        NumEnchantments      = 42,
        InvalidEnchantment   = 43,
    };

    enum class Frequency : int {
        Common   = 30,
        Uncommon = 10,
        Rare     = 3,
        VeryRare = 1,
    };

    enum class VillagerTrading : int {
        NotAvailable = 0,
        Available    = 1,
    };

    enum CompatibilityID : uint {
        NON_CONFLICT     = 0,
        DAMAGE           = 1,
        GATHERING        = 2,
        PROTECTION       = 3,
        FROST_STRIDER    = 4,
        MENDING_INFINITY = 5,
        LOYALTY_RIPTIDE  = 6,
    };

    enum Activation : uint {
        EQUIPPED         = 0,
        HELD             = 1,
        SELF             = 2,
        _num_activations = 3,
        _invalid         = 4,
    };

    using Slot = ::SharedTypes::EnchantSlot;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::Enchant::Type const>      mEnchantType;
    ::ll::TypedStorage<4, 4, ::Enchant::Frequency const> mFrequency;
    ::ll::TypedStorage<1, 1, bool const>                 mIsAvailableInVillagerTrading;
    ::ll::TypedStorage<4, 4, int const>                  mPrimarySlots;
    ::ll::TypedStorage<4, 4, int const>                  mSecondarySlots;
    ::ll::TypedStorage<4, 4, int const>                  mCompatibility;
    ::ll::TypedStorage<8, 24, std::string const>         mDescription;
    ::ll::TypedStorage<8, 40, ::HashedString const>      mStringId;
    ::ll::TypedStorage<8, 40, ::HashedString const>      mScriptStringId;
    ::ll::TypedStorage<1, 1, bool>                       mIsDisabled;
    // NOLINTEND

public:
    // prevent constructor by default
    Enchant();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Enchant();

    virtual bool isCompatibleWith(::Enchant::Type) const;

    virtual int getMinCost(int) const;

    virtual int getMaxCost(int) const;

    virtual int getMinLevel() const;

    virtual int getMaxLevel() const;

    virtual int getDamageProtection(int, ::ActorDamageSource const&) const;

    virtual float getAfterBreachArmorFraction(int, float) const;

    virtual float getDamageBonus(int, ::Actor const&, ::Actor const&) const;

    virtual void doPostAttack(::Actor&, ::Actor&, int) const;

    virtual void doPostPiercingAttack(::Actor&, int) const;

    virtual void doPostItemHurtActor(::Actor&, ::Actor&, int) const;

    virtual void doPostHurt(::ItemInstance&, ::Actor&, ::Actor&, int) const;

    virtual bool isMeleeDamageEnchant() const;

    virtual bool isProtectionEnchant() const;

    virtual bool isTreasureOnly() const;

    virtual bool isDiscoverable() const;

    virtual bool _isValidEnchantmentTypeForCategory(::Enchant::Type) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Enchant(
        ::Enchant::Type,
        ::Enchant::Frequency,
        std::string_view const,
        std::string_view const,
        std::string_view const,
        ::Enchant::VillagerTrading,
        int,
        int
    );

    MCNAPI bool canEnchant(int, bool) const;

    MCNAPI std::string getDescriptionId() const;

    MCNAPI ::Enchant::Type getEnchantType() const;

    MCNAPI ::Enchant::Frequency getFrequency() const;

    MCNAPI ::HashedString const& getStringId() const;

    MCNAPI bool isAvailable() const;

    MCNAPI bool isDisabled() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::SharedTypes::EnchantSlot enchantSlotFromString(std::string_view const);

    MCNAPI static ::Enchant const* getEnchant(::Enchant::Type const&);

    MCNAPI static ::Enchant const* getEnchantFromName(::HashedString const&);

    MCNAPI static ::Enchant::Type getEnchantTypeFromName(::HashedString const&);

    MCNAPI static void initEnchants(::BaseGameVersion const&, ::Experiments const&);

    MCNAPI static void shutdownEnchants();

    MCNAPI static std::string stringFromEnchantSlot(::SharedTypes::EnchantSlot const&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::unordered_map<HashedString, Enchant::Type>& mEnchantNameToType();

    MCNAPI static std::unordered_map<
        SharedTypes::EnchantSlot,
        std::string,
        EnchantSlotEnumHasher,
        std::equal_to<SharedTypes::EnchantSlot>,
        std::allocator<std::pair<const SharedTypes::EnchantSlot, std::string>>>&
    mEnchantSlotTypeEnumToStringMap();

    MCNAPI static std::unordered_map<std::string, SharedTypes::EnchantSlot>& mEnchantSlotTypeNameToEnumMap();

    MCNAPI static std::vector<std::unique_ptr<Enchant>>& mEnchants();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::Enchant::Type,
        ::Enchant::Frequency,
        std::string_view const,
        std::string_view const,
        std::string_view const,
        ::Enchant::VillagerTrading,
        int,
        int
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
    MCNAPI bool $isCompatibleWith(::Enchant::Type) const;

    MCNAPI int $getMinCost(int) const;

    MCNAPI int $getMaxCost(int) const;

    MCNAPI int $getMinLevel() const;

    MCNAPI int $getMaxLevel() const;

    MCNAPI int $getDamageProtection(int, ::ActorDamageSource const&) const;

    MCNAPI float $getAfterBreachArmorFraction(int, float) const;

    MCNAPI float $getDamageBonus(int, ::Actor const&, ::Actor const&) const;

    MCNAPI void $doPostAttack(::Actor&, ::Actor&, int) const;

    MCNAPI void $doPostPiercingAttack(::Actor&, int) const;

    MCNAPI void $doPostItemHurtActor(::Actor&, ::Actor&, int) const;

    MCNAPI void $doPostHurt(::ItemInstance&, ::Actor&, ::Actor&, int) const;

    MCNAPI bool $isMeleeDamageEnchant() const;

    MCNAPI bool $isProtectionEnchant() const;

    MCNAPI bool $isTreasureOnly() const;

    MCNAPI bool $isDiscoverable() const;

    MCNAPI bool $_isValidEnchantmentTypeForCategory(::Enchant::Type) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
