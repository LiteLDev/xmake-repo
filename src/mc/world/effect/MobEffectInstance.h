#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/shared_types/legacy/Difficulty.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/effect/EffectDuration.h"
#include "mc/world/effect/MobEffect.h"

// auto generated forward declare list
// clang-format off
class Actor;
#if defined(LL_PLAT_A) // @header-generator platform
class ActorDamageSource;
class BaseAttributeMap;
#else // @header-generator platform
#endif // @header-generator platform
class CompoundTag;
#if defined(LL_PLAT_A) // @header-generator platform
class HashedString;
#else // @header-generator platform
#endif // @header-generator platform
namespace mce { class Color; }
// clang-format on

class MobEffectInstance {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, uint>                          mId;
    ::ll::TypedStorage<4, 4, ::EffectDuration>              mDuration;
    ::ll::TypedStorage<4, 8, std::optional<EffectDuration>> mDurationEasy;
    ::ll::TypedStorage<4, 8, std::optional<EffectDuration>> mDurationNormal;
    ::ll::TypedStorage<4, 8, std::optional<EffectDuration>> mDurationHard;
    ::ll::TypedStorage<4, 4, int>                           mAmplifier;
    ::ll::TypedStorage<1, 1, bool>                          mDisplayOnScreenTextureAnimation;
    ::ll::TypedStorage<1, 1, bool>                          mIsCounterPausedThisTick;
    ::ll::TypedStorage<1, 1, bool>                          mAmbient;
    ::ll::UntypedStorage<1, 9>                              mEffectVisible;
    ::ll::UntypedStorage<8, 80>                             mFactorCalculationData;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, uint>                                mId;
    ::ll::TypedStorage<4, 4, ::EffectDuration>                    mDuration;
    ::ll::TypedStorage<4, 8, ::std::optional<::EffectDuration>>   mDurationEasy;
    ::ll::TypedStorage<4, 8, ::std::optional<::EffectDuration>>   mDurationNormal;
    ::ll::TypedStorage<4, 8, ::std::optional<::EffectDuration>>   mDurationHard;
    ::ll::TypedStorage<4, 4, int>                                 mAmplifier;
    ::ll::TypedStorage<1, 1, bool>                                mDisplayOnScreenTextureAnimation;
    ::ll::TypedStorage<1, 1, bool>                                mIsCounterPausedThisTick;
    ::ll::TypedStorage<1, 1, bool>                                mAmbient;
    ::ll::TypedStorage<1, 1, bool>                                mEffectVisible;
    ::ll::TypedStorage<8, 96, ::MobEffect::FactorCalculationData> mFactorCalculationData;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI MobEffectInstance(uint, ::EffectDuration);
#else // @header-generator platform
    MCAPI ::std::string getDisplayName() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI MobEffectInstance(uint, ::EffectDuration, int);
#else // @header-generator platform
    MCAPI ::std::unique_ptr<::CompoundTag> save() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void applyEffects(::Actor&) const;

    MCNAPI void applyModsAndBuffs(::BaseAttributeMap&) const;

    MCNAPI bool displaysOnScreenTextureAnimation() const;

    MCNAPI int getAmplifier() const;

    MCNAPI ::HashedString const& getComponentName() const;

    MCNAPI std::string const& getDescriptionId() const;

    MCNAPI ::EffectDuration getDifficultyDuration(::SharedTypes::Legacy::Difficulty) const;

    MCNAPI std::string getDisplayName() const;

    MCNAPI ::EffectDuration getDuration() const;

    MCNAPI uint getId() const;

    MCNAPI ::EffectDuration getLingerDuration() const;

    MCNAPI std::string const& getResourceName() const;

    MCNAPI ::EffectDuration getSplashDuration() const;

    MCNAPI ::MobEffectInstance getSplashEffect() const;

    MCNAPI bool isAmbient() const;

    MCNAPI bool isEffectVisible() const;

    MCNAPI void onActorDied(::Actor&) const;

    MCNAPI void onActorHurt(::Actor&, ::ActorDamageSource const&, float) const;

    MCNAPI void onEffectsExpired(::Actor&) const;

    MCNAPI bool operator!=(::MobEffectInstance const&) const;

    MCNAPI bool operator==(::MobEffectInstance const&) const;

    MCNAPI void pauseCounterThisTick();

    MCNAPI void removeEffects(::BaseAttributeMap&) const;

    MCNAPI std::unique_ptr<CompoundTag> save() const;

    MCNAPI void setDifficultyDuration(::SharedTypes::Legacy::Difficulty, ::EffectDuration);

    MCNAPI void setDuration(::EffectDuration);

    MCNAPI void splitDurations(int);

    MCNAPI bool tick();

    MCNAPI void tryInitializeMobEffectData();

    MCNAPI void update(::MobEffectInstance const&);

    MCNAPI void updateEffects(::Actor&) const;

    MCNAPI void updateModsAndBuffs(::BaseAttributeMap&) const;

    MCNAPI ~MobEffectInstance();
#else // @header-generator platform
    MCAPI void updateEffects(::Actor& mob) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::mce::Color getAverageColorValue(std::vector<MobEffectInstance> const&);
#else // @header-generator platform
    MCAPI static ::mce::Color getAverageColorValue(::std::vector<::MobEffectInstance> const& effects);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::MobEffectInstance load(::CompoundTag const&);
#else // @header-generator platform
    MCAPI static ::MobEffectInstance load(::CompoundTag const& tag);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static int const& MAX_AMPLIFIER_COUNT();
#else // @header-generator platform
    MCAPI static ::MobEffectInstance const& NO_EFFECT();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::MobEffectInstance const& NO_EFFECT();

    MCNAPI static float& splashDurationMultiplier();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(uint, ::EffectDuration);

    MCNAPI void* $ctor(uint, ::EffectDuration, int);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI static float& splashDurationMultiplier();
#endif // @header-generator platform
    // NOLINTEND
};
