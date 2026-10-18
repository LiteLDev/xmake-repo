#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/comprehensive/ParticleType.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/actor/Actor.h"
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/effect/EffectDuration.h"
#include "mc/world/effect/MobEffectInstance.h"

// auto generated forward declare list
// clang-format off
class ActorDefinitionGroup;
class CompoundTag;
class DataLoadHelper;
class EntityContext;
#if defined(LL_PLAT_A) // @header-generator platform
class Random;
#else // @header-generator platform
#endif // @header-generator platform
struct ActorDefinitionIdentifier;
struct VariantParameterList;
namespace mce { class Color; }
// clang-format on

class AreaEffectCloud : public ::Actor {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                         mOwnerId;
    ::ll::TypedStorage<1, 1, bool>                                    mAffectOwner;
    ::ll::TypedStorage<8, 8, long>                                    mSpawnTickClient;
    ::ll::TypedStorage<4, 4, int>                                     mReapplicationDelay;
    ::ll::TypedStorage<4, 4, ::EffectDuration>                        mDurationOnUse;
    ::ll::TypedStorage<4, 4, int>                                     mLocalPickupCount;
    ::ll::TypedStorage<4, 4, float>                                   mRadiusOnUse;
    ::ll::TypedStorage<8, 24, std::vector<MobEffectInstance>>         mMobAreaEffects;
    ::ll::TypedStorage<8, 40, std::unordered_map<ActorUniqueID, int>> mVictims;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                             mOwnerId;
    ::ll::TypedStorage<1, 1, bool>                                        mAffectOwner;
    ::ll::TypedStorage<8, 8, int64>                                       mSpawnTickClient;
    ::ll::TypedStorage<4, 4, int>                                         mReapplicationDelay;
    ::ll::TypedStorage<4, 4, ::EffectDuration>                            mDurationOnUse;
    ::ll::TypedStorage<4, 4, int>                                         mLocalPickupCount;
    ::ll::TypedStorage<4, 4, float>                                       mRadiusOnUse;
    ::ll::TypedStorage<8, 24, ::std::vector<::MobEffectInstance>>         mMobAreaEffects;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::ActorUniqueID, int>> mVictims;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    AreaEffectCloud();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~AreaEffectCloud();
#else // @header-generator platform
    virtual void reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void reloadHardcoded(::ActorInitializationMethod, ::VariantParameterList const&);
#else // @header-generator platform
    virtual void setOwner(::ActorUniqueID const ownerID) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void normalTick();
#else // @header-generator platform
    virtual void normalTick() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual float getShadowRadius() const;
#else // @header-generator platform
    virtual float getShadowRadius() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setOwner(::ActorUniqueID const);
#else // @header-generator platform
    virtual void addAdditionalSaveData(::CompoundTag& tag) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void readAdditionalSaveData(::CompoundTag const&, ::DataLoadHelper&);

    virtual void addAdditionalSaveData(::CompoundTag&) const;
#else // @header-generator platform
    virtual void readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI AreaEffectCloud(::ActorDefinitionGroup*, ::ActorDefinitionIdentifier const&, ::EntityContext&);
#else // @header-generator platform
    MCAPI AreaEffectCloud(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addAreaEffect(::MobEffectInstance);
#else // @header-generator platform
    MCAPI void addAreaEffect(::MobEffectInstance effect);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void calculateAndSetRadiusPerTick();
#else // @header-generator platform
    MCAPI void calculateAndSetRadiusPerTick();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float getEffectiveRadius() const;
#else // @header-generator platform
    MCAPI float getEffectiveRadius() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ParticleType getParticle() const;
#else // @header-generator platform
    MCAPI void notifyPickup();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void notifyPickup();
#else // @header-generator platform
    MCAPI void setDuration(::EffectDuration duration);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setAffectOwner(bool);
#else // @header-generator platform
    MCAPI void setInitialRadius(float radius);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setDuration(::EffectDuration);

    MCNAPI void setInitialRadius(float);

    MCNAPI void setParticle(::ParticleType);

    MCNAPI void setParticleColor(::mce::Color&);

    MCNAPI void setPotion(short);

    MCNAPI void setRadiusChangeOnPickup(float);

    MCNAPI void setRadiusOnUse(float);

    MCNAPI void setReapplicationDelay(int);
#else // @header-generator platform
    MCAPI void setParticleColor(::mce::Color& c);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::ActorDefinitionGroup*, ::ActorDefinitionIdentifier const&, ::EntityContext&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $reloadHardcoded(::ActorInitializationMethod, ::VariantParameterList const&);
#else // @header-generator platform
    MCAPI void $reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $normalTick();
#else // @header-generator platform
    MCAPI void $setOwner(::ActorUniqueID const ownerID);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float $getShadowRadius() const;
#else // @header-generator platform
    MCAPI void $normalTick();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setOwner(::ActorUniqueID const);
#else // @header-generator platform
    MCFOLD float $getShadowRadius() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $readAdditionalSaveData(::CompoundTag const&, ::DataLoadHelper&);
#else // @header-generator platform
    MCAPI void $addAdditionalSaveData(::CompoundTag& tag) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $addAdditionalSaveData(::CompoundTag&) const;
    // NOLINTEND
#else // @header-generator platform
    MCAPI void $readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);
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
