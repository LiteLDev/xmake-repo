#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/deps/shared_types/legacy/actor/ActorDamageCause.h"
#include "mc/world/actor/ActorEvent.h"
#include "mc/world/actor/animal/Animal.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorDamageSource;
class ActorDefinitionGroup;
class ActorHurtResult;
class CompoundTag;
class DataLoadHelper;
class EntityContext;
class Mob;
struct ActorDefinitionIdentifier;
struct HurtParameters;
// clang-format on

class Wolf : public ::Animal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mShakeAnim;
    ::ll::TypedStorage<4, 4, float> mShakeAnimO;
    ::ll::TypedStorage<4, 4, float> mInterestedAngle;
    ::ll::TypedStorage<4, 4, float> mInterestedAngleO;
    ::ll::TypedStorage<1, 1, bool>  mIsWet;
    ::ll::TypedStorage<1, 1, bool>  mIsShaking;
    // NOLINTEND

public:
    // prevent constructor by default
    Wolf();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Wolf();

    virtual void setSitting(bool);

    virtual ::SharedTypes::Legacy::LevelSoundEvent getAmbientSound() const;

    virtual void handleEntityEvent(::ActorEvent, int);

    virtual bool load(::CompoundTag const&, ::DataLoadHelper&);

    virtual void onSynchedDataUpdate(int);

    virtual ::ActorHurtResult _hurt(::ActorDamageSource const&, float, ::HurtParameters const&);

    virtual bool isAlliedTo(::Mob*);

    virtual void onBorn(::Actor&, ::Actor&);

    virtual void newServerAiStep();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Wolf(::ActorDefinitionGroup*, ::ActorDefinitionIdentifier const&, ::EntityContext&);

    MCNAPI void _updateTintColor();

    MCNAPI float getHeadRollAngle(float);

    MCNAPI float getShakeAnim() const;

    MCNAPI float getTailAngle();

    MCNAPI bool isShaking() const;

    MCNAPI void postNormalTick();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::optional<SharedTypes::Legacy::LevelSoundEvent>
    getCustomHurtSound(::Mob const&, ::SharedTypes::Legacy::ActorDamageCause);
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
    MCNAPI void $setSitting(bool);

    MCNAPI ::SharedTypes::Legacy::LevelSoundEvent $getAmbientSound() const;

    MCNAPI void $handleEntityEvent(::ActorEvent, int);

    MCNAPI bool $load(::CompoundTag const&, ::DataLoadHelper&);

    MCNAPI void $onSynchedDataUpdate(int);

    MCNAPI ::ActorHurtResult $_hurt(::ActorDamageSource const&, float, ::HurtParameters const&);

    MCNAPI bool $isAlliedTo(::Mob*);

    MCNAPI void $onBorn(::Actor&, ::Actor&);

    MCNAPI void $newServerAiStep();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
