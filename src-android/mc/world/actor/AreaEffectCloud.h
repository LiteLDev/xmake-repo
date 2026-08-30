#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/comprehensive/ParticleType.h"
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
class Random;
struct ActorDefinitionIdentifier;
struct VariantParameterList;
namespace mce { class Color; }
// clang-format on

class AreaEffectCloud : public ::Actor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                         mOwnerId;
    ::ll::TypedStorage<1, 1, bool>                                    mAffectOwner;
    ::ll::TypedStorage<8, 8, long>                                    mSpawnTickClient;
    ::ll::TypedStorage<4, 4, int>                                     mReapplicationDelay;
    ::ll::TypedStorage<4, 4, ::EffectDuration>                        mDurationOnUse;
    ::ll::TypedStorage<4, 4, int>                                     mLocalPickupCount;
    ::ll::TypedStorage<4, 4, float>                                   mRadiusOnUse;
    ::ll::TypedStorage<8, 24, std::vector<MobEffectInstance>>         mMobAreaEffects;
    ::ll::TypedStorage<8, 40, std::unordered_map<ActorUniqueID, int>> mVictims;
    // NOLINTEND

public:
    // prevent constructor by default
    AreaEffectCloud();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AreaEffectCloud();

    virtual void reloadHardcoded(::ActorInitializationMethod, ::VariantParameterList const&);

    virtual void normalTick();

    virtual float getShadowRadius() const;

    virtual void setOwner(::ActorUniqueID const);

    virtual void readAdditionalSaveData(::CompoundTag const&, ::DataLoadHelper&);

    virtual void addAdditionalSaveData(::CompoundTag&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI AreaEffectCloud(::ActorDefinitionGroup*, ::ActorDefinitionIdentifier const&, ::EntityContext&);

    MCNAPI void addAreaEffect(::MobEffectInstance);

    MCNAPI void calculateAndSetRadiusPerTick();

    MCNAPI float getEffectiveRadius() const;

    MCNAPI ::ParticleType getParticle() const;

    MCNAPI void notifyPickup();

    MCNAPI void setAffectOwner(bool);

    MCNAPI void setDuration(::EffectDuration);

    MCNAPI void setInitialRadius(float);

    MCNAPI void setParticle(::ParticleType);

    MCNAPI void setParticleColor(::mce::Color&);

    MCNAPI void setPotion(short);

    MCNAPI void setRadiusChangeOnPickup(float);

    MCNAPI void setRadiusOnUse(float);

    MCNAPI void setReapplicationDelay(int);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ActorDefinitionGroup*, ::ActorDefinitionIdentifier const&, ::EntityContext&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $reloadHardcoded(::ActorInitializationMethod, ::VariantParameterList const&);

    MCNAPI void $normalTick();

    MCNAPI float $getShadowRadius() const;

    MCNAPI void $setOwner(::ActorUniqueID const);

    MCNAPI void $readAdditionalSaveData(::CompoundTag const&, ::DataLoadHelper&);

    MCNAPI void $addAdditionalSaveData(::CompoundTag&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
