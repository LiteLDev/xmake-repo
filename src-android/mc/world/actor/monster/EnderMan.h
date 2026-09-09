#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/world/actor/monster/Monster.h"
#include "mc/world/level/block/NewBlockID.h"

// auto generated forward declare list
// clang-format off
class ActorDamageSource;
class ActorDefinitionGroup;
class ActorHurtResult;
class CompoundTag;
class DataLoadHelper;
class EntityContext;
class MobEffectInstance;
struct ActorDefinitionIdentifier;
struct HurtEffectsSettings;
struct HurtParameters;
// clang-format on

class EnderMan : public ::Monster {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                         mAggroedByPlayer;
    ::ll::TypedStorage<8, 8, std::unique_ptr<CompoundTag>> mCarryBlockSerId;
    ::ll::UntypedStorage<2, 2>                             mCarryBlockId;
    ::ll::TypedStorage<2, 2, ushort>                       mCarryBlockData;
    // NOLINTEND

public:
    // prevent constructor by default
    EnderMan();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EnderMan();

    virtual void normalTick();

    virtual ::SharedTypes::Legacy::LevelSoundEvent getAmbientSound() const;

    virtual bool canBeAffectedByArrow(::MobEffectInstance const&) const;

    virtual ::ActorHurtResult _hurt(::ActorDamageSource const&, float, ::HurtParameters const&);

    virtual void readAdditionalSaveData(::CompoundTag const&, ::DataLoadHelper&);

    virtual void addAdditionalSaveData(::CompoundTag&) const;

    virtual void hurtEffects(::ActorDamageSource const&, float, ::HurtEffectsSettings const&);

    virtual void newServerAiStep();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI EnderMan(::ActorDefinitionGroup*, ::ActorDefinitionIdentifier const&, ::EntityContext&);
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
    MCNAPI void $normalTick();

    MCNAPI ::SharedTypes::Legacy::LevelSoundEvent $getAmbientSound() const;

    MCNAPI bool $canBeAffectedByArrow(::MobEffectInstance const&) const;

    MCNAPI ::ActorHurtResult $_hurt(::ActorDamageSource const&, float, ::HurtParameters const&);

    MCNAPI void $readAdditionalSaveData(::CompoundTag const&, ::DataLoadHelper&);

    MCNAPI void $addAdditionalSaveData(::CompoundTag&) const;

    MCNAPI void $hurtEffects(::ActorDamageSource const&, float, ::HurtEffectsSettings const&);

    MCNAPI void $newServerAiStep();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
