#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/effect/MobEffectInstance.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
class Experiments;
class Player;
namespace Bedrock::Safety { class RedactableString; }
// clang-format on

class Potion {
public:
    // Potion inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum PotionVariant : uint {
        MOVESLOW       = 0,
        MOVESPEED      = 1,
        DIGSLOW        = 2,
        DIGSPEED       = 3,
        DAMAGEBOOST    = 4,
        HEAL           = 5,
        HARM           = 6,
        JUMP           = 7,
        CONFUSION      = 8,
        REGEN          = 9,
        RESISTANCE     = 10,
        FIRERESISTANCE = 11,
        WATERBREATH    = 12,
        INVISIBILITY   = 13,
        BLINDNESS      = 14,
        NIGHTVISION    = 15,
        HUNGER         = 16,
        WEAKNESS       = 17,
        POISON         = 18,
        WITHER         = 19,
        HEALTHBOOST    = 20,
        ABSORPTION     = 21,
        SATURATION     = 22,
        LEVITATION     = 23,
        TURTLEMASTER   = 24,
        SLOWFALL       = 25,
        WINDCHARGED    = 26,
        WEAVING        = 27,
        OOZING         = 28,
        INFESTED       = 29,
        BASE           = 30,
    };

    enum PotionType : int {
#else // @header-generator platform
    enum class PotionType : int {
#endif // @header-generator platform
        Undefined = -1,
        Regular   = 0,
        Splash    = 1,
        Lingering = 2,
    };

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    enum class PotionVariant : int {
        Moveslow       = 0,
        Movespeed      = 1,
        Digslow        = 2,
        Digspeed       = 3,
        Damageboost    = 4,
        Heal           = 5,
        Harm           = 6,
        Jump           = 7,
        Confusion      = 8,
        Regen          = 9,
        Resistance     = 10,
        Fireresistance = 11,
        Waterbreath    = 12,
        Invisibility   = 13,
        Blindness      = 14,
        Nightvision    = 15,
        Hunger         = 16,
        Weakness       = 17,
        Poison         = 18,
        Wither         = 19,
        Healthboost    = 20,
        Absorption     = 21,
        Saturation     = 22,
        Levitation     = 23,
        Turtlemaster   = 24,
        Slowfall       = 25,
        Windcharged    = 26,
        Weaving        = 27,
        Oozing         = 28,
        Infested       = 29,
        Base           = 30,
    };

#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, int>                             mId;
    ::ll::TypedStorage<8, 24, std::string>                    mNameId;
    ::ll::TypedStorage<8, 24, std::string>                    mPrefix;
    ::ll::TypedStorage<8, 24, std::vector<MobEffectInstance>> mEffects;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>       mDescriptionIds;
    ::ll::TypedStorage<4, 4, ::Potion::PotionVariant>         mVar;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, int>                                 mId;
    ::ll::TypedStorage<8, 32, ::std::string>                      mNameId;
    ::ll::TypedStorage<8, 32, ::std::string>                      mPrefix;
    ::ll::TypedStorage<8, 24, ::std::vector<::MobEffectInstance>> mEffects;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>       mDescriptionIds;
    ::ll::TypedStorage<4, 4, ::Potion::PotionVariant>             mVar;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    Potion();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI Potion(::Potion const&);
#else // @header-generator platform
    MCAPI Potion(::std::string_view const nameId, ::std::string_view const prefix);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI Potion(std::string_view const, std::string_view const);
#else // @header-generator platform
    MCAPI Potion(
        ::std::string_view const   nameId,
        ::std::string_view const   descriptionID,
        ::MobEffectInstance const& mobEffect,
        ::Potion::PotionVariant    var
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI Potion(std::string_view const, std::string_view const, ::MobEffectInstance const&, ::Potion::PotionVariant);
#else // @header-generator platform
    MCAPI Potion(
        ::std::string_view const           nameId,
        ::std::vector<::std::string>       descriptionIDs,
        ::std::vector<::MobEffectInstance> mobEffects,
        ::Potion::PotionVariant            var
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI
    Potion(std::string_view const, std::vector<std::string>, std::vector<MobEffectInstance>, ::Potion::PotionVariant);

    MCNAPI void appendFormattedPotionText(
        ::Bedrock::Safety::RedactableString&,
        ::Potion::PotionType,
        ::Potion::PotionVariant,
        ::Player const&,
        float
#else // @header-generator platform
    MCAPI void appendFormattedPotionText(
        ::Bedrock::Safety::RedactableString& inOutHovertext,
        ::Potion::PotionType                 potionType,
        ::Potion::PotionVariant              potionVariant,
        ::Player const&                      player,
        float                                timeMod
#endif // @header-generator platform
    ) const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string getDescriptionId() const;
#else // @header-generator platform
    MCAPI ::std::string getDescriptionId() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string getDescriptionId(::Potion::PotionType) const;
#else // @header-generator platform
    MCAPI ::std::string getDescriptionId(::Potion::PotionType potionType) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::MobEffectInstance const& getMobEffect() const;
#else // @header-generator platform
    MCFOLD ::std::string getNameId() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int getMobEffectId() const;
#else // @header-generator platform
    MCAPI ::std::string getPotencyDescription(::Potion::PotionType potionType, float timeMod) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<MobEffectInstance> const& getMobEffects() const;

    MCNAPI std::string getNameId() const;

    MCNAPI std::string getPotencyDescription(::Potion::PotionType, float) const;

    MCNAPI int getPotionId() const;

    MCNAPI ::Potion::PotionVariant getPotionVariant() const;

    MCNAPI std::string getPrefix() const;

    MCNAPI ~Potion();
#else // @header-generator platform
    MCFOLD ::std::string getPrefix() const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void addPotion(std::shared_ptr<const Potion> const);
#else // @header-generator platform
    MCAPI static void addPotion(::std::shared_ptr<::Potion const> const potion);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void
    appendMobEffectText(::Bedrock::Safety::RedactableString&, ::Potion::PotionVariant, uint, int, ::Player const&);
#else // @header-generator platform
    MCAPI static void appendMobEffectText(
        ::Bedrock::Safety::RedactableString& inOutHovertext,
        ::Potion::PotionVariant              potionVariant,
        uint                                 mobEffectId,
        int                                  amplifier,
        ::Player const&                      player
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string effectDurationToString(::Potion::PotionType, float, ::MobEffectInstance const&);
#else // @header-generator platform
    MCAPI static ::std::string
    effectDurationToString(::Potion::PotionType potionType, float timeMod, ::MobEffectInstance const& effect);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string effectPotencyToString(::MobEffectInstance const&);
#else // @header-generator platform
    MCAPI static ::std::string effectPotencyToString(::MobEffectInstance const& effect);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string getBasePotion(::Potion::PotionType);
#else // @header-generator platform
    MCAPI static ::std::string getBasePotion(::Potion::PotionType type);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string
    getPotencyDescription(::Potion::PotionType, float, std::string_view const, ::MobEffectInstance const&);
#else // @header-generator platform
    MCAPI static ::std::string getPotencyDescription(
        ::Potion::PotionType       potionType,
        float                      timeMod,
        ::std::string_view const   descID,
        ::MobEffectInstance const& effect
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::shared_ptr<const Potion> getPotion(int);
#else // @header-generator platform
    MCAPI static ::std::shared_ptr<::Potion const> getPotion(::std::string_view potionNameId);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::shared_ptr<const Potion> getPotion(std::string_view const);

    MCNAPI static int getPotionCount();

    MCNAPI static std::vector<std::shared_ptr<const Potion>> getPotions();

    MCNAPI static void initPotions(::BaseGameVersion const&, ::Experiments const&);

    MCNAPI static void shutdownPotions();
#else // @header-generator platform
    MCAPI static void initPotions(::BaseGameVersion const& baseGameVersion, ::Experiments const& experiments);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::shared_ptr<const Potion> const& Awkward();
#else // @header-generator platform
    MCAPI static ::std::shared_ptr<::Potion const> const& Awkward();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::shared_ptr<const Potion> const& FireResistance();
#else // @header-generator platform
    MCAPI static ::std::shared_ptr<::Potion const> const& FireResistance();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::shared_ptr<const Potion> const& Harming();
#else // @header-generator platform
    MCAPI static ::std::shared_ptr<::Potion const> const& Healing();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::shared_ptr<const Potion> const& Healing();
#else // @header-generator platform
    MCAPI static ::std::shared_ptr<::Potion const> const& Poison();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::shared_ptr<const Potion> const& Infested();
#else // @header-generator platform
    MCAPI static ::std::shared_ptr<::Potion const> const& Slowness();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::shared_ptr<const Potion> const& Invisibility();
#else // @header-generator platform
    MCAPI static ::std::shared_ptr<::Potion const> const& Swiftness();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::shared_ptr<const Potion> const& Leaping();
#else // @header-generator platform
    MCAPI static ::std::shared_ptr<::Potion const> const& Water();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::shared_ptr<const Potion> const& LongFireResistance();
#else // @header-generator platform
    MCAPI static ::std::shared_ptr<::Potion const> const& WaterBreathing();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::shared_ptr<const Potion> const& LongInvisibility();
#else // @header-generator platform
    MCAPI static ::std::shared_ptr<::Potion const> const& Weakness();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::shared_ptr<const Potion> const& LongLeaping();
#else // @header-generator platform
    MCAPI static int& mLastId();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::shared_ptr<const Potion> const& LongMundane();
#else // @header-generator platform
    MCAPI static ::std::add_lvalue_reference_t<::std::shared_ptr<::Potion const>[]> mPotionsById();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::shared_ptr<const Potion> const& LongNightvision();

    MCNAPI static std::shared_ptr<const Potion> const& LongPoison();

    MCNAPI static std::shared_ptr<const Potion> const& LongRegeneration();

    MCNAPI static std::shared_ptr<const Potion> const& LongSlowFalling();

    MCNAPI static std::shared_ptr<const Potion> const& LongSlowness();

    MCNAPI static std::shared_ptr<const Potion> const& LongStrength();

    MCNAPI static std::shared_ptr<const Potion> const& LongSwiftness();

    MCNAPI static std::shared_ptr<const Potion> const& LongTurtleMaster();

    MCNAPI static std::shared_ptr<const Potion> const& LongWaterBreathing();

    MCNAPI static std::shared_ptr<const Potion> const& LongWeakness();

    MCNAPI static std::shared_ptr<const Potion> const& Mundane();

    MCNAPI static std::shared_ptr<const Potion> const& Nightvision();

    MCNAPI static std::shared_ptr<const Potion> const& Oozing();

    MCNAPI static std::shared_ptr<const Potion> const& Poison();

    MCNAPI static std::shared_ptr<const Potion> const& Regeneration();

    MCNAPI static std::shared_ptr<const Potion> const& SlowFalling();

    MCNAPI static std::shared_ptr<const Potion> const& Slowness();

    MCNAPI static std::shared_ptr<const Potion> const& Strength();

    MCNAPI static std::shared_ptr<const Potion> const& StrongHarming();

    MCNAPI static std::shared_ptr<const Potion> const& StrongHealing();

    MCNAPI static std::shared_ptr<const Potion> const& StrongLeaping();

    MCNAPI static std::shared_ptr<const Potion> const& StrongPoison();

    MCNAPI static std::shared_ptr<const Potion> const& StrongRegeneration();

    MCNAPI static std::shared_ptr<const Potion> const& StrongSlowness();

    MCNAPI static std::shared_ptr<const Potion> const& StrongStrength();

    MCNAPI static std::shared_ptr<const Potion> const& StrongSwiftness();

    MCNAPI static std::shared_ptr<const Potion> const& StrongTurtleMaster();

    MCNAPI static std::shared_ptr<const Potion> const& Swiftness();

    MCNAPI static std::shared_ptr<const Potion> const& Thick();

    MCNAPI static std::shared_ptr<const Potion> const& TurtleMaster();

    MCNAPI static std::shared_ptr<const Potion> const& Water();

    MCNAPI static std::shared_ptr<const Potion> const& WaterBreathing();

    MCNAPI static std::shared_ptr<const Potion> const& Weakness();

    MCNAPI static std::shared_ptr<const Potion> const& Weaving();

    MCNAPI static std::shared_ptr<const Potion> const& WindCharged();

    MCNAPI static std::shared_ptr<const Potion> const& Wither();

    MCNAPI static int& mLastId();

    MCNAPI static ::std::add_lvalue_reference_t<std::shared_ptr<const Potion>[64]> mPotionsById();

    MCNAPI static std::unordered_map<std::string, int>& mPotionsByName();
#else // @header-generator platform
    MCAPI static ::std::unordered_map<::std::string, int>& mPotionsByName();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::Potion const&);
#else // @header-generator platform
    MCAPI void* $ctor(::std::string_view const nameId, ::std::string_view const prefix);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::string_view const, std::string_view const);
#else // @header-generator platform
    MCAPI void* $ctor(
        ::std::string_view const   nameId,
        ::std::string_view const   descriptionID,
        ::MobEffectInstance const& mobEffect,
        ::Potion::PotionVariant    var
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void*
    $ctor(std::string_view const, std::string_view const, ::MobEffectInstance const&, ::Potion::PotionVariant);

    MCNAPI void*
    $ctor(std::string_view const, std::vector<std::string>, std::vector<MobEffectInstance>, ::Potion::PotionVariant);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(
        ::std::string_view const           nameId,
        ::std::vector<::std::string>       descriptionIDs,
        ::std::vector<::MobEffectInstance> mobEffects,
        ::Potion::PotionVariant            var
    );
#endif // @header-generator platform
    // NOLINTEND
};
