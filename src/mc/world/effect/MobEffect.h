#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/MobEffectIds.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/core/container/DenseEnumMap.h"
#include "mc/deps/core/math/Color.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/world/effect/MobEffectIds.h"
#endif // @header-generator platform

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
#if defined(LL_PLAT_A) // @header-generator platform
class CompoundTag;
#else // @header-generator platform
#endif // @header-generator platform
class Experiments;
#if defined(LL_PLAT_A) // @header-generator platform
class InstantaneousAttributeBuff;
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::UntypedStorage<8, 48>     mUpdateFn;
#else // @header-generator platform
        ::ll::TypedStorage<8, 64, ::std::function<void(::MobEffect::FactorCalculationData&, ::EffectDuration)>>
                                        mUpdateFn;
#endif // @header-generator platform
        ::ll::TypedStorage<4, 4, int>   mTicksActive;
        ::ll::TypedStorage<4, 4, float> mFactorPreviousFrame;
        ::ll::TypedStorage<1, 1, bool>  mHadEffectLastTick;
        ::ll::TypedStorage<1, 1, bool>  mHadApplied;
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI float getFactor(float) const;
        // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
    };
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    using AttributeBuffPair = ::std::pair<::Attribute const*, ::std::shared_ptr<::AttributeBuff>>;

    using AttributeModPair = ::std::pair<::Attribute const*, ::std::shared_ptr<::AttributeModifier>>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, uint const>                                              mId;
    ::ll::TypedStorage<1, 1, bool>                                                    mIsHarmful;
    ::ll::TypedStorage<4, 16, ::mce::Color>                                           mColor;
    ::ll::TypedStorage<8, 48, ::HashedString>                                         mParticleEffectId;
    ::ll::TypedStorage<8, 48, ::HashedString>                                         mParticleEffectAmbientId;
    ::ll::TypedStorage<8, 32, ::std::string>                                          mDescriptionId;
    ::ll::TypedStorage<4, 4, int>                                                     mIcon;
    ::ll::TypedStorage<4, 4, float>                                                   mDurationModifier;
    ::ll::TypedStorage<1, 1, bool>                                                    mIsDisabled;
    ::ll::TypedStorage<8, 32, ::std::string>                                          mResourceName;
    ::ll::TypedStorage<8, 32, ::std::string>                                          mIconName;
    ::ll::TypedStorage<1, 1, bool>                                                    mEffectVisible;
    ::ll::TypedStorage<4, 8, ::std::optional<::SharedTypes::Legacy::LevelSoundEvent>> mOnApplySound;
    ::ll::TypedStorage<8, 48, ::HashedString>                                         mComponentName;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Amplifier>>                         mValueAmplifier;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Amplifier>>                         mDurationAmplifier;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::pair<::Attribute const*, ::std::shared_ptr<::AttributeBuff>>>>
        mAttributeBuffs;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::pair<::Attribute const*, ::std::shared_ptr<::AttributeModifier>>>>
                                                                  mAttributeModifiers;
    ::ll::TypedStorage<8, 96, ::MobEffect::FactorCalculationData> mFactorCalculationData;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    MobEffect();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~MobEffect();
#else // @header-generator platform
    virtual ~MobEffect() = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void applyEffects(::Actor&, ::EffectDuration, int) const;
#else // @header-generator platform
    virtual void applyEffects(::Actor& target, ::EffectDuration durationTicks, int amplification) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void removeEffects(::BaseAttributeMap&) const;
#else // @header-generator platform
    virtual void removeEffects(::BaseAttributeMap& attributeMapToRemoveFrom) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onEffectExpired(::Actor&) const;
#else // @header-generator platform
    virtual void onEffectExpired(::Actor& target) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onActorDied(::Actor&, int) const;
#else // @header-generator platform
    virtual void onActorDied(::Actor& target, int amplifier) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onActorHurt(::Actor&, int, ::ActorDamageSource const&, float) const;
#else // @header-generator platform
    virtual void onActorHurt(::Actor& target, int amplifier, ::ActorDamageSource const& source, float damage) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void applyInstantaneousEffect(::Actor*, ::Actor*, ::Actor*, int, float) const;
#else // @header-generator platform
    virtual void
    applyInstantaneousEffect(::Actor* source, ::Actor* owner, ::Actor* target, int amplification, float scale) const;
#endif // @header-generator platform

    virtual bool isInstantaneous() const;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual float getAttributeModifierValue(int, ::AttributeModifier const&) const;
#else // @header-generator platform
    virtual float getAttributeModifierValue(int amplifier, ::AttributeModifier const& modifier) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI MobEffect(uint, std::string const&, std::string const&, bool, int, int, std::string const&, bool);
#else // @header-generator platform
    MCAPI MobEffect(
        uint                 id,
        ::std::string const& resourceName,
        ::std::string const& locName,
        bool                 isHarmful,
        int                  color,
        int                  icon,
        ::std::string const& iconName,
        bool                 drawParticles
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::InstantaneousAttributeBuff _createInstantBuff(::AttributeBuff const&, int, float) const;
#else // @header-generator platform
    MCAPI ::TemporalAttributeBuff
    _createTemporalBuff(::AttributeBuff const& baseBuff, ::EffectDuration duration, int amplification) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::TemporalAttributeBuff _createTemporalBuff(::AttributeBuff const&, ::EffectDuration, int) const;
#else // @header-generator platform
    MCAPI void _setParticleEffectIds(char const* particleEffectId, char const* particleEffectAmbientId);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void applyModsAndBuffs(::BaseAttributeMap&, ::EffectDuration, int) const;
#else // @header-generator platform
    MCAPI void addAttributeBuff(::Attribute const& attribute, ::std::shared_ptr<::AttributeBuff> buff);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::mce::Color const& getColor() const;
#else // @header-generator platform
    MCAPI void addAttributeModifier(::Attribute const& attribute, ::std::shared_ptr<::AttributeModifier> modifier);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string const& getDescriptionId() const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void applyModsAndBuffs(
        ::BaseAttributeMap& attributeMapToRemoveFrom,
        ::EffectDuration    durationTicks,
        int                 amplification
    ) const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI void updateModsAndBuffs(
        ::BaseAttributeMap& attributeMapToRemoveFrom,
        ::EffectDuration    durationTicks,
        int                 amplification
    ) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::MobEffect const* getById(uint);
#else // @header-generator platform
    MCAPI static ::MobEffect const* getByName(::std::string const& name);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::MobEffect const* getById(::MobEffectIds);
#else // @header-generator platform
    MCAPI static ::std::string getNameById(uint effectId);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::MobEffect const* getByName(std::string const&);

    MCNAPI static std::string getNameById(uint);

    MCNAPI static void initEffects(::BaseGameVersion const&, ::Experiments const&);

    MCNAPI static void shutdownEffects();
#else // @header-generator platform
    MCAPI static void initEffects(::BaseGameVersion const& baseGameVersion, ::Experiments const& experiments);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::mce::Color const& DEFAULT_COLOR();
#else // @header-generator platform
    MCAPI static ::mce::Color const& DEFAULT_COLOR();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Bedrock::DenseEnumMap<MobEffectIds, std::unique_ptr<MobEffect>, (MobEffectIds)38>& mMobEffects();
#else // @header-generator platform
    MCAPI static ::Bedrock::DenseEnumMap<::MobEffectIds, ::std::unique_ptr<::MobEffect>, 38>& mMobEffects();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(uint, std::string const&, std::string const&, bool, int, int, std::string const&, bool);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(
        uint                 id,
        ::std::string const& resourceName,
        ::std::string const& locName,
        bool                 isHarmful,
        int                  color,
        int                  icon,
        ::std::string const& iconName,
        bool                 drawParticles
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $applyEffects(::Actor&, ::EffectDuration, int) const;
#else // @header-generator platform
    MCAPI void $applyEffects(::Actor& target, ::EffectDuration durationTicks, int amplification) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $removeEffects(::BaseAttributeMap&) const;
#else // @header-generator platform
    MCAPI void $removeEffects(::BaseAttributeMap& attributeMapToRemoveFrom) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onEffectExpired(::Actor&) const;
#else // @header-generator platform
    MCFOLD void $onEffectExpired(::Actor& target) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onActorDied(::Actor&, int) const;
#else // @header-generator platform
    MCFOLD void $onActorDied(::Actor& target, int amplifier) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onActorHurt(::Actor&, int, ::ActorDamageSource const&, float) const;
#else // @header-generator platform
    MCFOLD void $onActorHurt(::Actor& target, int amplifier, ::ActorDamageSource const& source, float damage) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $applyInstantaneousEffect(::Actor*, ::Actor*, ::Actor*, int, float) const;
#else // @header-generator platform
    MCAPI void
    $applyInstantaneousEffect(::Actor* source, ::Actor* owner, ::Actor* target, int amplification, float scale) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isInstantaneous() const;
#else // @header-generator platform
    MCFOLD bool $isInstantaneous() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float $getAttributeModifierValue(int, ::AttributeModifier const&) const;
    // NOLINTEND
#else // @header-generator platform
    MCAPI float $getAttributeModifierValue(int amplifier, ::AttributeModifier const& modifier) const;
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
