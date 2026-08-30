#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/Difficulty.h"
#include "mc/world/effect/EffectDuration.h"
#include "mc/world/effect/MobEffect.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorDamageSource;
class BaseAttributeMap;
class CompoundTag;
class HashedString;
namespace mce { class Color; }
// clang-format on

class MobEffectInstance {
public:
    // member variables
    // NOLINTBEGIN
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
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MobEffectInstance(uint, ::EffectDuration);

    MCNAPI MobEffectInstance(uint, ::EffectDuration, int);

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
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::mce::Color getAverageColorValue(std::vector<MobEffectInstance> const&);

    MCNAPI static ::MobEffectInstance load(::CompoundTag const&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static int const& MAX_AMPLIFIER_COUNT();

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
    // NOLINTEND
};
