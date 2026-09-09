#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/animal/Animal.h"

// auto generated forward declare list
// clang-format off
class ActorDamageSource;
class ActorDefinitionGroup;
class BlockPos;
class EntityContext;
struct ActorDefinitionIdentifier;
// clang-format on

class Parrot : public ::Animal {
public:
    // prevent constructor by default
    Parrot();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Parrot();

    virtual void reloadHardcodedClient(::ActorInitializationMethod);

    virtual float getShadowRadius() const;

    virtual void setSitting(bool);

    virtual void playAmbientSound();

    virtual ::SharedTypes::Legacy::LevelSoundEvent getAmbientSound() const;

    virtual bool isInvulnerableTo(::ActorDamageSource const&) const;

    virtual bool canBePulledIntoVehicle() const;

    virtual float _getWalkTargetValue(::BlockPos const&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Parrot(::ActorDefinitionGroup*, ::ActorDefinitionIdentifier const&, ::EntityContext&);

    MCNAPI void postAiStep();
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
    MCNAPI void $reloadHardcodedClient(::ActorInitializationMethod);

    MCNAPI float $getShadowRadius() const;

    MCNAPI void $setSitting(bool);

    MCNAPI void $playAmbientSound();

    MCNAPI ::SharedTypes::Legacy::LevelSoundEvent $getAmbientSound() const;

    MCNAPI bool $isInvulnerableTo(::ActorDamageSource const&) const;

    MCNAPI bool $canBePulledIntoVehicle() const;

    MCNAPI float $_getWalkTargetValue(::BlockPos const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
