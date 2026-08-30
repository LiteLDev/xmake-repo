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
        Undefined = -1,
        Regular   = 0,
        Splash    = 1,
        Lingering = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                             mId;
    ::ll::TypedStorage<8, 24, std::string>                    mNameId;
    ::ll::TypedStorage<8, 24, std::string>                    mPrefix;
    ::ll::TypedStorage<8, 24, std::vector<MobEffectInstance>> mEffects;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>       mDescriptionIds;
    ::ll::TypedStorage<4, 4, ::Potion::PotionVariant>         mVar;
    // NOLINTEND

public:
    // prevent constructor by default
    Potion();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Potion(::Potion const&);

    MCNAPI Potion(std::string_view const, std::string_view const);

    MCNAPI Potion(std::string_view const, std::string_view const, ::MobEffectInstance const&, ::Potion::PotionVariant);

    MCNAPI
    Potion(std::string_view const, std::vector<std::string>, std::vector<MobEffectInstance>, ::Potion::PotionVariant);

    MCNAPI void appendFormattedPotionText(
        ::Bedrock::Safety::RedactableString&,
        ::Potion::PotionType,
        ::Potion::PotionVariant,
        ::Player const&,
        float
    ) const;

    MCNAPI std::string getDescriptionId() const;

    MCNAPI std::string getDescriptionId(::Potion::PotionType) const;

    MCNAPI ::MobEffectInstance const& getMobEffect() const;

    MCNAPI int getMobEffectId() const;

    MCNAPI std::vector<MobEffectInstance> const& getMobEffects() const;

    MCNAPI std::string getNameId() const;

    MCNAPI std::string getPotencyDescription(::Potion::PotionType, float) const;

    MCNAPI int getPotionId() const;

    MCNAPI ::Potion::PotionVariant getPotionVariant() const;

    MCNAPI std::string getPrefix() const;

    MCNAPI ~Potion();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void addPotion(std::shared_ptr<const Potion> const);

    MCNAPI static void
    appendMobEffectText(::Bedrock::Safety::RedactableString&, ::Potion::PotionVariant, uint, int, ::Player const&);

    MCNAPI static std::string effectDurationToString(::Potion::PotionType, float, ::MobEffectInstance const&);

    MCNAPI static std::string effectPotencyToString(::MobEffectInstance const&);

    MCNAPI static std::string getBasePotion(::Potion::PotionType);

    MCNAPI static std::string
    getPotencyDescription(::Potion::PotionType, float, std::string_view const, ::MobEffectInstance const&);

    MCNAPI static std::shared_ptr<const Potion> getPotion(int);

    MCNAPI static std::shared_ptr<const Potion> getPotion(std::string_view const);

    MCNAPI static int getPotionCount();

    MCNAPI static std::vector<std::shared_ptr<const Potion>> getPotions();

    MCNAPI static void initPotions(::BaseGameVersion const&, ::Experiments const&);

    MCNAPI static void shutdownPotions();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::shared_ptr<const Potion> const& Awkward();

    MCNAPI static std::shared_ptr<const Potion> const& FireResistance();

    MCNAPI static std::shared_ptr<const Potion> const& Harming();

    MCNAPI static std::shared_ptr<const Potion> const& Healing();

    MCNAPI static std::shared_ptr<const Potion> const& Infested();

    MCNAPI static std::shared_ptr<const Potion> const& Invisibility();

    MCNAPI static std::shared_ptr<const Potion> const& Leaping();

    MCNAPI static std::shared_ptr<const Potion> const& LongFireResistance();

    MCNAPI static std::shared_ptr<const Potion> const& LongInvisibility();

    MCNAPI static std::shared_ptr<const Potion> const& LongLeaping();

    MCNAPI static std::shared_ptr<const Potion> const& LongMundane();

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
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Potion const&);

    MCNAPI void* $ctor(std::string_view const, std::string_view const);

    MCNAPI void*
    $ctor(std::string_view const, std::string_view const, ::MobEffectInstance const&, ::Potion::PotionVariant);

    MCNAPI void*
    $ctor(std::string_view const, std::vector<std::string>, std::vector<MobEffectInstance>, ::Potion::PotionVariant);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
