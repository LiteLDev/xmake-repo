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
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    enum class Activation : int {
        Equipped       = 0,
        Held           = 1,
        Self           = 2,
        NumActivations = 3,
        Invalid        = 4,
    };

    enum class CompatibilityID : int {
        NonConflict     = 0,
        Damage          = 1,
        Gathering       = 2,
        Protection      = 3,
        FrostStrider    = 4,
        MendingInfinity = 5,
        LoyaltyRiptide  = 6,
    };

    enum class Frequency : int {
        Common   = 30,
        Uncommon = 10,
        Rare     = 3,
        VeryRare = 1,
    };

#endif // @header-generator platform
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

#if defined(LL_PLAT_A) // @header-generator platform
    enum class Frequency : int {
        Common   = 30,
        Uncommon = 10,
        Rare     = 3,
        VeryRare = 1,
    };

#else // @header-generator platform
#endif // @header-generator platform
    enum class VillagerTrading : int {
        NotAvailable = 0,
        Available    = 1,
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string const>         mDescription;
    ::ll::TypedStorage<8, 40, ::HashedString const>      mStringId;
    ::ll::TypedStorage<8, 40, ::HashedString const>      mScriptStringId;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string const>       mDescription;
    ::ll::TypedStorage<8, 48, ::HashedString const>      mStringId;
    ::ll::TypedStorage<8, 48, ::HashedString const>      mScriptStringId;
#endif // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>                       mIsDisabled;
    // NOLINTEND

public:
    // prevent constructor by default
    Enchant();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~Enchant();
#else // @header-generator platform
    virtual ~Enchant() = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isCompatibleWith(::Enchant::Type) const;
#else // @header-generator platform
    virtual bool isCompatibleWith(::Enchant::Type type) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int getMinCost(int) const;
#else // @header-generator platform
    virtual int getMinCost(int level) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int getMaxCost(int) const;
#else // @header-generator platform
    virtual int getMaxCost(int level) const;
#endif // @header-generator platform

    virtual int getMinLevel() const;

    virtual int getMaxLevel() const;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int getDamageProtection(int, ::ActorDamageSource const&) const;
#else // @header-generator platform
    virtual int getDamageProtection(int level, ::ActorDamageSource const& source) const;
#endif // @header-generator platform

    virtual float getAfterBreachArmorFraction(int, float) const;

    virtual float getDamageBonus(int, ::Actor const&, ::Actor const&) const;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void doPostAttack(::Actor&, ::Actor&, int) const;
#else // @header-generator platform
    virtual void doPostAttack(::Actor& attacker, ::Actor& victim, int level) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void doPostPiercingAttack(::Actor&, int) const;
#else // @header-generator platform
    virtual void doPostPiercingAttack(::Actor& attacker, int enchantLevel) const;
#endif // @header-generator platform

    virtual void doPostItemHurtActor(::Actor&, ::Actor&, int) const;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void doPostHurt(::ItemInstance&, ::Actor&, ::Actor&, int) const;
#else // @header-generator platform
    virtual void doPostHurt(::ItemInstance& item, ::Actor& victim, ::Actor& attacker, int level) const;
#endif // @header-generator platform

    virtual bool isMeleeDamageEnchant() const;

    virtual bool isProtectionEnchant() const;

    virtual bool isTreasureOnly() const;

    virtual bool isDiscoverable() const;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool _isValidEnchantmentTypeForCategory(::Enchant::Type) const;
#else // @header-generator platform
    virtual bool _isValidEnchantmentTypeForCategory(::Enchant::Type type) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI Enchant(
        ::Enchant::Type,
        ::Enchant::Frequency,
        std::string_view const,
        std::string_view const,
        std::string_view const,
        ::Enchant::VillagerTrading,
        int,
        int
#else // @header-generator platform
    MCAPI Enchant(
        ::Enchant::Type            type,
        ::Enchant::Frequency       frequency,
        ::std::string_view const   stringId,
        ::std::string_view const   scriptStringId,
        ::std::string_view const   description,
        ::Enchant::VillagerTrading isAvailableForVillagerTraining,
        int                        primarySlots,
        int                        secondarySlots
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool canEnchant(int, bool) const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ::std::string getDescription() const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string getDescriptionId() const;

    MCNAPI ::Enchant::Type getEnchantType() const;

    MCNAPI ::Enchant::Frequency getFrequency() const;

    MCNAPI ::HashedString const& getStringId() const;

    MCNAPI bool isAvailable() const;

    MCNAPI bool isDisabled() const;
#else // @header-generator platform
    MCAPI ::std::string getDescriptionId() const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::SharedTypes::EnchantSlot enchantSlotFromString(std::string_view const);
#else // @header-generator platform
    MCAPI static ::SharedTypes::EnchantSlot enchantSlotFromString(::std::string_view str);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Enchant const* getEnchant(::Enchant::Type const&);
#else // @header-generator platform
    MCAPI static ::Enchant const* getEnchantFromName(::HashedString const& name);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Enchant const* getEnchantFromName(::HashedString const&);
#else // @header-generator platform
    MCAPI static ::Enchant::Type getEnchantTypeFromName(::HashedString const& name);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Enchant::Type getEnchantTypeFromName(::HashedString const&);
#else // @header-generator platform
    MCAPI static void initEnchants(::BaseGameVersion const& baseGameVersion, ::Experiments const& experiments);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void initEnchants(::BaseGameVersion const&, ::Experiments const&);

    MCNAPI static void shutdownEnchants();

    MCNAPI static std::string stringFromEnchantSlot(::SharedTypes::EnchantSlot const&);
#else // @header-generator platform
    MCAPI static ::std::string stringFromEnchantSlot(::SharedTypes::EnchantSlot const& enchantSlot);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::unordered_map<HashedString, Enchant::Type>& mEnchantNameToType();
#else // @header-generator platform
    MCAPI static ::std::unordered_map<::HashedString, ::Enchant::Type>& mEnchantNameToType();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::unordered_map<
        SharedTypes::EnchantSlot,
        std::string,
        EnchantSlotEnumHasher,
        std::equal_to<SharedTypes::EnchantSlot>,
        std::allocator<std::pair<const SharedTypes::EnchantSlot, std::string>>>&
#else // @header-generator platform
    MCAPI static ::std::unordered_map<
        ::SharedTypes::EnchantSlot,
        ::std::string,
        ::EnchantSlotEnumHasher,
        ::std::equal_to<::SharedTypes::EnchantSlot>>&
#endif // @header-generator platform
    mEnchantSlotTypeEnumToStringMap();

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::unordered_map<std::string, SharedTypes::EnchantSlot>& mEnchantSlotTypeNameToEnumMap();
#else // @header-generator platform
    MCAPI static ::std::unordered_map<::std::string, ::SharedTypes::EnchantSlot>& mEnchantSlotTypeNameToEnumMap();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::vector<std::unique_ptr<Enchant>>& mEnchants();
#else // @header-generator platform
    MCAPI static ::std::vector<::std::unique_ptr<::Enchant>>& mEnchants();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(
        ::Enchant::Type,
        ::Enchant::Frequency,
        std::string_view const,
        std::string_view const,
        std::string_view const,
        ::Enchant::VillagerTrading,
        int,
        int
#else // @header-generator platform
    MCAPI void* $ctor(
        ::Enchant::Type            type,
        ::Enchant::Frequency       frequency,
        ::std::string_view const   stringId,
        ::std::string_view const   scriptStringId,
        ::std::string_view const   description,
        ::Enchant::VillagerTrading isAvailableForVillagerTraining,
        int                        primarySlots,
        int                        secondarySlots
#endif // @header-generator platform
    );
#if defined(LL_PLAT_A) // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isCompatibleWith(::Enchant::Type) const;
#else // @header-generator platform
    MCAPI bool $isCompatibleWith(::Enchant::Type type) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getMinCost(int) const;
#else // @header-generator platform
    MCAPI int $getMinCost(int level) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getMaxCost(int) const;
#else // @header-generator platform
    MCAPI int $getMaxCost(int level) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getMinLevel() const;
#else // @header-generator platform
    MCFOLD int $getMinLevel() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getMaxLevel() const;
#else // @header-generator platform
    MCFOLD int $getMaxLevel() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getDamageProtection(int, ::ActorDamageSource const&) const;
#else // @header-generator platform
    MCFOLD int $getDamageProtection(int level, ::ActorDamageSource const& source) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float $getAfterBreachArmorFraction(int, float) const;
#else // @header-generator platform
    MCFOLD float $getAfterBreachArmorFraction(int, float) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float $getDamageBonus(int, ::Actor const&, ::Actor const&) const;
#else // @header-generator platform
    MCFOLD float $getDamageBonus(int, ::Actor const&, ::Actor const&) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $doPostAttack(::Actor&, ::Actor&, int) const;
#else // @header-generator platform
    MCFOLD void $doPostAttack(::Actor& attacker, ::Actor& victim, int level) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $doPostPiercingAttack(::Actor&, int) const;
#else // @header-generator platform
    MCFOLD void $doPostPiercingAttack(::Actor& attacker, int enchantLevel) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $doPostItemHurtActor(::Actor&, ::Actor&, int) const;
#else // @header-generator platform
    MCFOLD void $doPostItemHurtActor(::Actor&, ::Actor&, int) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $doPostHurt(::ItemInstance&, ::Actor&, ::Actor&, int) const;
#else // @header-generator platform
    MCFOLD void $doPostHurt(::ItemInstance& item, ::Actor& victim, ::Actor& attacker, int level) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isMeleeDamageEnchant() const;
#else // @header-generator platform
    MCFOLD bool $isMeleeDamageEnchant() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isProtectionEnchant() const;
#else // @header-generator platform
    MCFOLD bool $isProtectionEnchant() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isTreasureOnly() const;
#else // @header-generator platform
    MCFOLD bool $isTreasureOnly() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isDiscoverable() const;
#else // @header-generator platform
    MCFOLD bool $isDiscoverable() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $_isValidEnchantmentTypeForCategory(::Enchant::Type) const;
    // NOLINTEND
#else // @header-generator platform
    MCFOLD bool $_isValidEnchantmentTypeForCategory(::Enchant::Type type) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

// clang-format off
template <>
MCAPI ::ll::type_id_ref Bedrock::typeid_storage_impl<class CommandRegistry, ::Enchant::Type>();
// clang-format on
#endif // @header-generator platform
