#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/MobEffectIds.h"
#include "mc/deps/core/container/DenseEnumMap.h"
#include "mc/deps/core/math/Color.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorDamageSource;
class Amplifier;
class Attribute;
class AttributeBuff;
class AttributeModifier;
class BaseAttributeMap;
class BaseGameVersion;
class CompoundTag;
class Experiments;
class InstantaneousAttributeBuff;
class TemporalAttributeBuff;
struct EffectDuration;
// clang-format on

class MobEffect {
public:
    // MobEffect inner types declare
    // clang-format off
    struct FactorCalculationData;
    // clang-format on

    // MobEffect inner types define
    struct FactorCalculationData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int>   mPaddingDuration;
        ::ll::TypedStorage<4, 4, float> mFactorStart;
        ::ll::TypedStorage<4, 4, float> mFactorTarget;
        ::ll::TypedStorage<4, 4, float> mFactorCurrent;
        ::ll::UntypedStorage<8, 48>     mUpdateFn;
        ::ll::TypedStorage<4, 4, int>   mTicksActive;
        ::ll::TypedStorage<4, 4, float> mFactorPreviousFrame;
        ::ll::TypedStorage<1, 1, bool>  mHadEffectLastTick;
        ::ll::TypedStorage<1, 1, bool>  mHadApplied;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI float getFactor(float) const;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<4, 4, uint const> mId;
    ::ll::TypedStorage<1, 1, bool> mIsHarmful;
    ::ll::TypedStorage<4, 16, ::mce::Color> mColor;
    ::ll::TypedStorage<8, 40, ::HashedString> mParticleEffectId;
    ::ll::TypedStorage<8, 40, ::HashedString> mParticleEffectAmbientId;
    ::ll::TypedStorage<8, 24, std::string> mDescriptionId;
    ::ll::TypedStorage<4, 4, int> mIcon;
    ::ll::TypedStorage<4, 4, float> mDurationModifier;
    ::ll::TypedStorage<1, 1, bool> mIsDisabled;
    ::ll::TypedStorage<8, 24, std::string> mResourceName;
    ::ll::TypedStorage<8, 24, std::string> mIconName;
    ::ll::TypedStorage<1, 1, bool> mEffectVisible;
    ::ll::TypedStorage<4, 8, std::optional<SharedTypes::Legacy::LevelSoundEvent>> mOnApplySound;
    ::ll::TypedStorage<8, 40, ::HashedString> mComponentName;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Amplifier>> mValueAmplifier;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Amplifier>> mDurationAmplifier;
    ::ll::TypedStorage<8, 24, std::vector<std::pair<const Attribute*, std::shared_ptr<AttributeBuff>>>> mAttributeBuffs;
    ::ll::TypedStorage<8, 24, std::vector<std::pair<const Attribute*, std::shared_ptr<AttributeModifier>>>> mAttributeModifiers;
    ::ll::UntypedStorage<8, 80> mFactorCalculationData;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    MobEffect();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MobEffect();

    virtual void applyEffects(::Actor&, ::EffectDuration, int) const;

    virtual void removeEffects(::BaseAttributeMap&) const;

    virtual void onEffectExpired(::Actor&) const;

    virtual void onActorDied(::Actor&, int) const;

    virtual void onActorHurt(::Actor&, int, ::ActorDamageSource const&, float) const;

    virtual void applyInstantaneousEffect(::Actor*, ::Actor*, ::Actor*, int, float) const;

    virtual bool isInstantaneous() const;

    virtual float getAttributeModifierValue(int, ::AttributeModifier const&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MobEffect(uint, std::string const&, std::string const&, bool, int, int, std::string const&, bool);

    MCNAPI ::InstantaneousAttributeBuff _createInstantBuff(::AttributeBuff const&, int, float) const;

    MCNAPI ::TemporalAttributeBuff _createTemporalBuff(::AttributeBuff const&, ::EffectDuration, int) const;

    MCNAPI void applyModsAndBuffs(::BaseAttributeMap&, ::EffectDuration, int) const;

    MCNAPI ::mce::Color const& getColor() const;

    MCNAPI std::string const& getDescriptionId() const;

    MCNAPI float getDurationModifier() const;

    MCNAPI std::string const& getIconName() const;

    MCNAPI uint getId() const;

    MCNAPI ::HashedString const& getParticleEffect(bool) const;

    MCNAPI std::string const& getResourceName() const;

    MCNAPI bool hasIcon() const;

    MCNAPI bool isHarmful() const;

    MCNAPI bool isVisible() const;

    MCNAPI void updateModsAndBuffs(::BaseAttributeMap&, ::EffectDuration, int) const;

    MCNAPI std::vector<std::pair<const Attribute*, std::shared_ptr<AttributeModifier>>> const&
           viewAttributeModifiers() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::MobEffect const* getById(uint);

    MCNAPI static ::MobEffect const* getById(::MobEffectIds);

    MCNAPI static ::MobEffect const* getByName(std::string const&);

    MCNAPI static std::string getNameById(uint);

    MCNAPI static void initEffects(::BaseGameVersion const&, ::Experiments const&);

    MCNAPI static void shutdownEffects();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::mce::Color const& DEFAULT_COLOR();

    MCNAPI static ::Bedrock::DenseEnumMap<MobEffectIds, std::unique_ptr<MobEffect>, (MobEffectIds)38>& mMobEffects();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(uint, std::string const&, std::string const&, bool, int, int, std::string const&, bool);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $applyEffects(::Actor&, ::EffectDuration, int) const;

    MCNAPI void $removeEffects(::BaseAttributeMap&) const;

    MCNAPI void $onEffectExpired(::Actor&) const;

    MCNAPI void $onActorDied(::Actor&, int) const;

    MCNAPI void $onActorHurt(::Actor&, int, ::ActorDamageSource const&, float) const;

    MCNAPI void $applyInstantaneousEffect(::Actor*, ::Actor*, ::Actor*, int, float) const;

    MCNAPI bool $isInstantaneous() const;

    MCNAPI float $getAttributeModifierValue(int, ::AttributeModifier const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
